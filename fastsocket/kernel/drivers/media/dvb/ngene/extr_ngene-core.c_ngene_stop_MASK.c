
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ngene {TYPE_2__* pci_dev; scalar_t__ msi_enabled; TYPE_1__* channel; int cmd_mutex; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int i2c_adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct ngene*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct ngene *VAR_7)
{
 FUNC_0(&VAR_7->cmd_mutex);
 FUNC_2(&(VAR_7->channel[0].i2c_adapter));
 FUNC_2(&(VAR_7->channel[1].i2c_adapter));
 FUNC_3(0, VAR_4);
 FUNC_3(0, VAR_0);
 FUNC_3(0, VAR_1);
 FUNC_3(0, VAR_5);
 FUNC_3(0, VAR_6);
 FUNC_3(0, VAR_2);
 FUNC_3(0, VAR_3);
 FUNC_1(VAR_7->pci_dev->irq, VAR_7);




}
