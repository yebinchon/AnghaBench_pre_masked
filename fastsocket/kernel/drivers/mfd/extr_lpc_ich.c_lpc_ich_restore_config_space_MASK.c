
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_3__ {int save; int ctrl; } ;
struct TYPE_4__ {int save; int ctrl; } ;
struct lpc_ich_priv {TYPE_1__ gpio; TYPE_2__ acpi; } ;


 struct lpc_ich_priv* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 struct lpc_ich_priv *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->acpi.save >= 0) {
  FUNC_1(VAR_0, VAR_1->acpi.ctrl, VAR_1->acpi.save);
  VAR_1->acpi.save = -1;
 }

 if (VAR_1->gpio.save >= 0) {
  FUNC_1(VAR_0, VAR_1->gpio.ctrl, VAR_1->gpio.save);
  VAR_1->gpio.save = -1;
 }
}
