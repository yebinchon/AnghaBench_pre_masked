
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qlcnic_pci_info {int id; int active; scalar_t__ type; int pci_func; int phy_port; int flags; int tx_max_bw; int max_bw; int tx_min_bw; int min_bw; scalar_t__ default_port; } ;
struct qlcnic_npar_info {int dummy; } ;
struct qlcnic_eswitch {int dummy; } ;
struct qlcnic_adapter {struct qlcnic_pci_info* npars; struct qlcnic_pci_info* eswitch; TYPE_1__* ahw; } ;
struct TYPE_2__ {int act_pci_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct qlcnic_pci_info* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct qlcnic_pci_info*) ;
 void* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int,int) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_pci_info*) ;

int FUNC_6(struct qlcnic_adapter *VAR_7)
{
 struct qlcnic_pci_info *VAR_8;
 int VAR_9, VAR_10 = 0, VAR_11 = 0;
 u16 VAR_12;
 u8 VAR_13;

 VAR_8 = FUNC_0(VAR_2, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_7, VAR_8);
 if (VAR_10)
  goto err_pci_info;

 VAR_12 = VAR_7->ahw->act_pci_func;

 VAR_7->npars = FUNC_2(sizeof(struct qlcnic_npar_info) *
     VAR_12, VAR_1);
 if (!VAR_7->npars) {
  VAR_10 = -VAR_0;
  goto err_pci_info;
 }

 VAR_7->eswitch = FUNC_2(sizeof(struct qlcnic_eswitch) *
    VAR_3, VAR_1);
 if (!VAR_7->eswitch) {
  VAR_10 = -VAR_0;
  goto err_npars;
 }

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_13 = VAR_8[VAR_9].id;

  if (VAR_13 >= VAR_2) {
   VAR_10 = VAR_6;
   goto err_eswitch;
  }

  if (!VAR_8[VAR_9].active ||
      (VAR_8[VAR_9].type != VAR_5))
   continue;

  VAR_7->npars[VAR_11].pci_func = VAR_13;
  VAR_7->npars[VAR_11].active = (u8)VAR_8[VAR_9].active;
  VAR_7->npars[VAR_11].type = (u8)VAR_8[VAR_9].type;
  VAR_7->npars[VAR_11].phy_port = (u8)VAR_8[VAR_9].default_port;
  VAR_7->npars[VAR_11].min_bw = VAR_8[VAR_9].tx_min_bw;
  VAR_7->npars[VAR_11].max_bw = VAR_8[VAR_9].tx_max_bw;
  VAR_11++;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7->eswitch[VAR_9].flags |= VAR_4;
  if (FUNC_3(VAR_7))
   FUNC_4(VAR_7, VAR_9, 1);
 }

 FUNC_1(VAR_8);
 return 0;

err_eswitch:
 FUNC_1(VAR_7->eswitch);
 VAR_7->eswitch = ((void*)0);
err_npars:
 FUNC_1(VAR_7->npars);
 VAR_7->npars = ((void*)0);
err_pci_info:
 FUNC_1(VAR_8);

 return VAR_10;
}
