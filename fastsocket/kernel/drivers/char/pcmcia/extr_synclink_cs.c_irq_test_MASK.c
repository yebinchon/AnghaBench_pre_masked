
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int testing_irq; int irq_occurred; int lock; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_8(MGSLPC_INFO *VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;

 FUNC_5(&VAR_4->lock,VAR_6);
 FUNC_4(VAR_4);

 VAR_4->testing_irq = 1;
 FUNC_0(VAR_4);

 VAR_4->irq_occurred = 0;



 FUNC_1(VAR_4, VAR_0, VAR_2);
 FUNC_7(VAR_4, VAR_0 + VAR_3, 0);
 FUNC_2(VAR_4, VAR_0, VAR_1);

 FUNC_6(&VAR_4->lock,VAR_6);

 VAR_5=100;
 while(VAR_5-- && !VAR_4->irq_occurred) {
  FUNC_3(10);
 }

 VAR_4->testing_irq = 0;

 FUNC_5(&VAR_4->lock,VAR_6);
 FUNC_4(VAR_4);
 FUNC_6(&VAR_4->lock,VAR_6);

 return VAR_4->irq_occurred;
}
