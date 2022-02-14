
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ioc3_driver_data {scalar_t__* active; int dual_irq; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {size_t id; int (* intr ) (TYPE_1__*,struct ioc3_driver_data*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_1__*,struct ioc3_driver_data*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 unsigned long VAR_6;
 struct ioc3_driver_data *VAR_7 = (struct ioc3_driver_data *)VAR_5;
 int VAR_8 = 1;

 if(!VAR_7->dual_irq)
  return VAR_1;
 FUNC_0(&VAR_3, VAR_6);
 if(VAR_2 && VAR_7->active[VAR_2->id]
    && VAR_2->intr)
  VAR_8 = VAR_8 && !VAR_2->intr(VAR_2, VAR_7, 0);
 FUNC_1(&VAR_3, VAR_6);
 return VAR_8?VAR_0:VAR_1;
}
