
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_6__ {int capi_ctrl; TYPE_2__* card; } ;
typedef TYPE_1__ avmctrl_info ;
struct TYPE_7__ {int port; int irq; } ;
typedef TYPE_2__ avmcard ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 avmctrl_info *VAR_2 = FUNC_4(VAR_1);
 avmcard *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = VAR_2->card;

 FUNC_1(VAR_3->port);
 FUNC_1(VAR_3->port);

 FUNC_2(&VAR_2->capi_ctrl);
 FUNC_3(VAR_3->irq, VAR_3);
 FUNC_5(VAR_3->port, VAR_0);
 FUNC_0(VAR_3);
}
