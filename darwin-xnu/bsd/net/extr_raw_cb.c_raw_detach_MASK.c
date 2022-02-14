
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; scalar_t__ so_pcb; } ;
struct rawcb {struct socket* rcb_socket; scalar_t__ rcb_laddr; } ;
typedef int caddr_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rawcb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (struct socket*,int ) ;
 int FUNC_8 (struct socket*,int ) ;
 int FUNC_9 (struct socket*) ;

void
FUNC_10(struct rawcb *VAR_4)
{
 struct socket *VAR_5 = VAR_4->rcb_socket;

 VAR_5->so_pcb = 0;
 VAR_5->so_flags |= VAR_1;
 FUNC_9(VAR_5);
 if (!FUNC_4(VAR_3)) {
  FUNC_8(VAR_5, 0);
  FUNC_3(VAR_3);
  FUNC_7(VAR_5, 0);
 }
 FUNC_1(VAR_4, VAR_2);
 FUNC_5(VAR_3);





 VAR_4->rcb_socket = ((void*)0);
 FUNC_0((caddr_t)(VAR_4), VAR_0);
}
