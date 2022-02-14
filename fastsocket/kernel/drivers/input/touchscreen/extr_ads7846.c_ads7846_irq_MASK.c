
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ads7846 {int irq_disabled; int pending; int lock; int timer; TYPE_1__* spi; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ads7846*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct ads7846 *VAR_5 = VAR_4;
 unsigned long VAR_6;

 FUNC_5(&VAR_5->lock, VAR_6);
 if (FUNC_4(FUNC_1(VAR_5))) {
  if (!VAR_5->irq_disabled) {





   VAR_5->irq_disabled = 1;
   FUNC_0(VAR_5->spi->irq);
   VAR_5->pending = 1;
   FUNC_2(&VAR_5->timer, FUNC_3(0, VAR_2),
     VAR_0);
  }
 }
 FUNC_6(&VAR_5->lock, VAR_6);

 return VAR_1;
}
