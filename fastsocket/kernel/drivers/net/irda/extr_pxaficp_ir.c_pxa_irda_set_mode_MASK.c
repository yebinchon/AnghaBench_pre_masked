
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa_irda {int dev; TYPE_1__* pdata; } ;
struct TYPE_2__ {int gpio_pwdown_inverted; int gpio_pwdown; int (* transceiver_mode ) (int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct pxa_irda *VAR_1, int VAR_2)
{
 if (VAR_1->pdata->transceiver_mode)
  VAR_1->pdata->transceiver_mode(VAR_1->dev, VAR_2);
 else {
  if (FUNC_0(VAR_1->pdata->gpio_pwdown))
   FUNC_1(VAR_1->pdata->gpio_pwdown,
     !(VAR_2 & VAR_0) ^
     !VAR_1->pdata->gpio_pwdown_inverted);
  FUNC_2(VAR_1->dev, VAR_2);
 }
}
