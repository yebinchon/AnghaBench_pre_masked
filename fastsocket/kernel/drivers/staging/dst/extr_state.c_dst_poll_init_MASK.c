
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dst_state {TYPE_2__* socket; } ;
struct dst_poll_helper {int pt; struct dst_state* st; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* poll ) (int *,TYPE_2__*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;

int FUNC_2(struct dst_state *VAR_1)
{
 struct dst_poll_helper VAR_2;

 VAR_2.st = VAR_1;
 FUNC_0(&VAR_2.pt, &VAR_0);

 VAR_1->socket->ops->poll(((void*)0), VAR_1->socket, &VAR_2.pt);
 return 0;
}
