
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxamci_host {int mmc; TYPE_1__* pdata; scalar_t__ vcc; } ;
struct TYPE_2__ {int ocr_mask; int gpio_power_invert; int (* setpower ) (int ,unsigned int) ;int gpio_power; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_5(struct pxamci_host *VAR_0, unsigned int VAR_1)
{
 int VAR_2;





 if (!VAR_0->vcc && VAR_0->pdata &&
     FUNC_0(VAR_0->pdata->gpio_power)) {
  VAR_2 = ((1 << VAR_1) & VAR_0->pdata->ocr_mask);
  FUNC_1(VAR_0->pdata->gpio_power,
          !!VAR_2 ^ VAR_0->pdata->gpio_power_invert);
 }
 if (!VAR_0->vcc && VAR_0->pdata && VAR_0->pdata->setpower)
  VAR_0->pdata->setpower(FUNC_2(VAR_0->mmc), VAR_1);
}
