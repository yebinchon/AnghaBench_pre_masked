
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct qlcnic_esw_func_cfg {scalar_t__ pci_func; int op_mode; int mac_override; int promisc_mode; int op_type; int vlan_id; int mac_anti_spoof; int offload_flags; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {scalar_t__ op_mode; scalar_t__ pci_base0; } ;


 int FUNC_0 (int ) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct qlcnic_adapter *VAR_6,
          struct qlcnic_esw_func_cfg *VAR_7, int VAR_8)
{
 u32 VAR_9;
 u8 VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_4(VAR_6))
  VAR_9 = FUNC_6(VAR_6->ahw->pci_base0 + VAR_0);
 else
  VAR_9 = FUNC_1(VAR_6->ahw, VAR_4);

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_10 = VAR_7[VAR_11].pci_func;
  if (VAR_10 >= VAR_1)
   return VAR_5;

  if (VAR_6->ahw->op_mode == VAR_2)
   if (FUNC_5(VAR_6, VAR_10) < 0)
    return VAR_5;

  switch (VAR_7[VAR_11].op_mode) {
  case 128:
   if (FUNC_4(VAR_6)) {
    VAR_12 = FUNC_3(VAR_9, VAR_10);
   } else {
    VAR_12 = FUNC_2(VAR_9,
          VAR_10);
    VAR_7[VAR_11].offload_flags = 0;
   }

   if (VAR_12 != VAR_3) {
    if (VAR_7[VAR_11].mac_anti_spoof != 0)
     return VAR_5;
    if (VAR_7[VAR_11].mac_override != 1)
     return VAR_5;
    if (VAR_7[VAR_11].promisc_mode != 1)
     return VAR_5;
   }
   break;
  case 130:
   if (!FUNC_0(VAR_7[VAR_11].vlan_id))
    return VAR_5;
   if (!VAR_7[VAR_11].op_type)
    return VAR_5;
   break;
  case 129:
   if (!VAR_7[VAR_11].op_type)
    return VAR_5;
   break;
  default:
   return VAR_5;
  }
 }

 return 0;
}
