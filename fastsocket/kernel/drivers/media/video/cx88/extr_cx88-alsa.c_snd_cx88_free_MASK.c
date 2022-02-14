
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ irq; int pci; int core; } ;
typedef TYPE_1__ snd_cx88_card_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(snd_cx88_card_t *VAR_0)
{

 if (VAR_0->irq >= 0)
  FUNC_1(VAR_0->irq, VAR_0);

 FUNC_0(VAR_0->core,VAR_0->pci);

 FUNC_2(VAR_0->pci);
 return 0;
}
