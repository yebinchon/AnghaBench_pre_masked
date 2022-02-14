
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_6__ {int addr; } ;
struct dst_state {TYPE_2__ ctl; TYPE_3__* socket; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* shutdown ) (TYPE_3__*,int) ;} ;


 int FUNC_0 (TYPE_3__*,struct sockaddr*,char*) ;
 int FUNC_1 (struct dst_state*) ;
 int FUNC_2 (struct dst_state*) ;
 int FUNC_3 (TYPE_3__*,int) ;

void FUNC_4(struct dst_state *VAR_0)
{
 if (VAR_0->socket) {
  FUNC_1(VAR_0);
  VAR_0->socket->ops->shutdown(VAR_0->socket, 2);

  FUNC_0(VAR_0->socket, (struct sockaddr *)&VAR_0->ctl.addr,
    "Disconnected peer");
  FUNC_2(VAR_0);
 }
}
