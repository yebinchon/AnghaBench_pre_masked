
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qlcnic_pm_func_cfg {scalar_t__ pci_func; scalar_t__ dest_npar; } ;
struct qlcnic_adapter {TYPE_1__* npars; } ;
struct TYPE_2__ {scalar_t__ phy_port; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_1,
         struct qlcnic_pm_func_cfg *VAR_2, int VAR_3)
{
 u8 VAR_4, VAR_5, VAR_6;
 u8 VAR_7;
 int VAR_8, VAR_9, VAR_10;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_4 = VAR_2[VAR_8].pci_func;
  VAR_7 = VAR_2[VAR_8].dest_npar;
  VAR_9 = FUNC_0(VAR_1, VAR_4);

  if (VAR_9 < 0)
   return VAR_0;

  VAR_10 = FUNC_0(VAR_1, VAR_7);
  if (VAR_10 < 0)
   return VAR_0;

  VAR_5 = VAR_1->npars[VAR_9].phy_port;
  VAR_6 = VAR_1->npars[VAR_10].phy_port;

  if (VAR_5 != VAR_6)
   return VAR_0;
 }

 return 0;
}
