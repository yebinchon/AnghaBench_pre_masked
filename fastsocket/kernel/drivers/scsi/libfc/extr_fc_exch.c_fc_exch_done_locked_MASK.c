
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_exch {int state; int esb_stat; int ex_refcnt; int timeout_work; int * resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fc_exch *VAR_3)
{
 int VAR_4 = 1;







 VAR_3->resp = ((void*)0);
 if (VAR_3->state & VAR_2)
  return VAR_4;
 VAR_3->esb_stat |= VAR_0;

 if (!(VAR_3->esb_stat & VAR_1)) {
  VAR_3->state |= VAR_2;
  if (FUNC_1(&VAR_3->timeout_work))
   FUNC_0(&VAR_3->ex_refcnt);
  VAR_4 = 0;
 }
 return VAR_4;
}
