
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_pci_info {int dummy; } ;
struct qlcnic_adapter {int flags; TYPE_1__* ahw; } ;
struct TYPE_2__ {int port_type; scalar_t__ op_mode; int act_pci_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 struct qlcnic_pci_info* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct qlcnic_pci_info*) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_pci_info*) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_7)
{
 struct qlcnic_pci_info *VAR_8;
 int VAR_9;

 if (!(VAR_7->flags & VAR_2)) {
  switch (VAR_7->ahw->port_type) {
  case 129:
   VAR_7->ahw->act_pci_func = VAR_5;
   break;
  case 128:
   VAR_7->ahw->act_pci_func = VAR_6;
   break;
  }
  return 0;
 }

 if (VAR_7->ahw->op_mode == VAR_4)
  return 0;

 VAR_8 = FUNC_0(VAR_3, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_7, VAR_8);
 FUNC_1(VAR_8);
 return VAR_9;
}
