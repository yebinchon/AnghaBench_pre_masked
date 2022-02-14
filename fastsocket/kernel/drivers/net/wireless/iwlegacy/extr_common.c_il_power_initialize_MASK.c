
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int pci_pm; int debug_sleep_level_override; int sleep_cmd; } ;
struct il_priv {TYPE_1__ power_data; int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int ,int*) ;

void
FUNC_2(struct il_priv *VAR_2)
{
 u16 VAR_3;

 FUNC_1(VAR_2->pci_dev, VAR_0, &VAR_3);
 VAR_2->power_data.pci_pm = !(VAR_3 & VAR_1);

 VAR_2->power_data.debug_sleep_level_override = -1;

 FUNC_0(&VAR_2->power_data.sleep_cmd, 0, sizeof(VAR_2->power_data.sleep_cmd));
}
