
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tseg_qent {int tqe_m; } ;
struct tcpcb {scalar_t__ t_reassqlen; int t_segq; } ;


 struct tseg_qent* FUNC_0 (int *) ;
 int FUNC_1 (struct tseg_qent*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,struct tseg_qent*) ;

int
FUNC_4(struct tcpcb *VAR_2)
{
 struct tseg_qent *VAR_3;
 int VAR_4 = 0;

 while ((VAR_3 = FUNC_0(&VAR_2->t_segq)) != ((void*)0)) {
  FUNC_1(VAR_3, VAR_1);
  FUNC_2(VAR_3->tqe_m);
  FUNC_3(VAR_0, VAR_3);
  VAR_4 = 1;
 }
 VAR_2->t_reassqlen = 0;
 return (VAR_4);
}
