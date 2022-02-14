
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct qlcnic_sriov {scalar_t__ vlan; scalar_t__ vlan_mode; int num_allowed_vlans; scalar_t__* allowed_vlans; scalar_t__ any_vlan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_sriov *VAR_2,
       u16 VAR_3, u8 VAR_4)
{
 u16 VAR_5 = VAR_2->vlan;
 u8 VAR_6 = 0;
 int VAR_7;

 if (VAR_2->vlan_mode != VAR_1)
  return -VAR_0;

 if (VAR_4) {
  if (VAR_5)
   return -VAR_0;

  if (VAR_2->any_vlan) {
   for (VAR_7 = 0; VAR_7 < VAR_2->num_allowed_vlans; VAR_7++) {
    if (VAR_2->allowed_vlans[VAR_7] == VAR_3)
     VAR_6 = 1;
   }

   if (!VAR_6)
    return -VAR_0;
  }
 } else {
  if (!VAR_5 || VAR_5 != VAR_3)
   return -VAR_0;
 }

 return 0;
}
