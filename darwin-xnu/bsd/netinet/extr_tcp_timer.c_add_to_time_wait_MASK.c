
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {TYPE_4__* t_inpcb; } ;
struct inpcbinfo {int ipi_lock; } ;
struct TYPE_6__ {TYPE_1__* inp_socket; } ;
struct TYPE_5__ {int so_options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcpcb*,int ) ;
 int FUNC_1 (struct inpcbinfo*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 struct inpcbinfo VAR_2 ;

void
FUNC_9(struct tcpcb *VAR_3, uint32_t VAR_4)
{
 struct inpcbinfo *VAR_5 = &VAR_2;
 if (VAR_3->t_inpcb->inp_socket->so_options & VAR_1)
  FUNC_7(VAR_3->t_inpcb->inp_socket);


 FUNC_5(VAR_3->t_inpcb);

 if (!FUNC_4(VAR_5->ipi_lock)) {
  FUNC_8(VAR_3->t_inpcb->inp_socket, 0);
  FUNC_3(VAR_5->ipi_lock);
  FUNC_6(VAR_3->t_inpcb->inp_socket, 0);
 }
 FUNC_0(VAR_3, VAR_4);
 FUNC_2(VAR_5->ipi_lock);

 FUNC_1(VAR_5, VAR_0);
}
