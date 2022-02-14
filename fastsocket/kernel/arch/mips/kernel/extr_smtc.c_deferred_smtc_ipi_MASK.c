
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smtc_ipi_q {scalar_t__ resched_flag; int lock; int * head; } ;
struct smtc_ipi {scalar_t__ type; scalar_t__ arg; } ;


 struct smtc_ipi_q* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 struct smtc_ipi* FUNC_1 (struct smtc_ipi_q*) ;
 int FUNC_2 (struct smtc_ipi*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 int VAR_3 = FUNC_4();
 while (VAR_0[VAR_3].head != ((void*)0)) {
  struct smtc_ipi_q *VAR_4 = &VAR_0[VAR_3];
  struct smtc_ipi *VAR_5;
  unsigned long VAR_6;





  FUNC_3(VAR_6);
  FUNC_5(&VAR_4->lock);
  VAR_5 = FUNC_1(VAR_4);
  FUNC_6(&VAR_4->lock);
  if (VAR_5 != ((void*)0)) {
   if (VAR_5->type == VAR_1 &&
       (int)VAR_5->arg == VAR_2)
    VAR_0[VAR_3].resched_flag = 0;
   FUNC_2(VAR_5);
  }






  FUNC_0(VAR_6);
 }
}
