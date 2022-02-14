
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int irq; } ;
struct TYPE_2__ {scalar_t__ dw_AiBase; scalar_t__ b_EocEosInterrupt; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,void*) ;

int FUNC_4(struct comedi_device *VAR_1)
{
 unsigned char VAR_2 = 0;





 FUNC_0(VAR_1->irq);





 VAR_0->b_EocEosInterrupt = 0;





 FUNC_3(0, (void *)(VAR_0->dw_AiBase + 8));





 FUNC_3(FUNC_2((void *)(VAR_0->dw_AiBase + 16)),
  (void *)(VAR_0->dw_AiBase + 16));





 FUNC_2((void *)(VAR_0->dw_AiBase + 20));





 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  FUNC_2((void *)(VAR_0->dw_AiBase + 28));
 }





 FUNC_1(VAR_1->irq);

 return 0;
}
