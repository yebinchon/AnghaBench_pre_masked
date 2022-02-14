
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fifo_statistic_full_task; } ;
struct TYPE_6__ {int int_pending; int irq_lock; scalar_t__ OS_Cookie; } ;
typedef TYPE_1__* PRTMP_ADAPTER ;
typedef TYPE_2__* POS_COOKIE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *) ;

void FUNC_6(unsigned long VAR_3)
{
 unsigned long VAR_4;
 PRTMP_ADAPTER VAR_5 = (PRTMP_ADAPTER) VAR_3;
 POS_COOKIE VAR_6;



 if (FUNC_3(VAR_5, VAR_1 | VAR_2))
  return;

    VAR_6 = (POS_COOKIE) VAR_5->OS_Cookie;

 VAR_5->int_pending &= ~(VAR_0);
 FUNC_0(VAR_5);

 FUNC_1(&VAR_5->irq_lock, VAR_4);



 if (VAR_5->int_pending & VAR_0)
 {
  FUNC_5(&VAR_6->fifo_statistic_full_task);
  FUNC_2(&VAR_5->irq_lock, VAR_4);
  return;
 }



 FUNC_4(VAR_5, VAR_0);
 FUNC_2(&VAR_5->irq_lock, VAR_4);

}
