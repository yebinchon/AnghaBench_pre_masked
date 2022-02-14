
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smtc_ipi_q {int lock; int * head; } ;
struct smtc_ipi {int dummy; } ;
struct TYPE_2__ {int selfipis; } ;


 struct smtc_ipi_q* VAR_0 ;
 int FUNC_0 (unsigned long) ;
 struct smtc_ipi* FUNC_1 (struct smtc_ipi_q*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct smtc_ipi*) ;
 unsigned int FUNC_4 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 unsigned int VAR_2 = FUNC_4();
 while (VAR_0[VAR_2].head != ((void*)0)) {
  struct smtc_ipi_q *VAR_3 = &VAR_0[VAR_2];
  struct smtc_ipi *VAR_4;
  unsigned long VAR_5;





  FUNC_2(VAR_5);

  FUNC_5(&VAR_3->lock);
  VAR_4 = FUNC_1(VAR_3);
  FUNC_6(&VAR_3->lock);



  FUNC_0(VAR_5);

  if (VAR_4) {
   FUNC_3(VAR_4);
   VAR_1[VAR_2].selfipis++;
  }
 }
}
