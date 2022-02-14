
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inpcb {TYPE_1__* inp_socket; } ;
struct TYPE_3__ {int so_error; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(struct inpcb *VAR_0, int VAR_1)
{
 VAR_0->inp_socket->so_error = VAR_1;
 FUNC_0(VAR_0->inp_socket);
 FUNC_1(VAR_0->inp_socket);
}
