
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iwl_phy_db_entry {int dummy; } ;
struct iwl_phy_db {struct iwl_phy_db_entry* calib_ch_group_txp; struct iwl_phy_db_entry* calib_ch_group_papd; struct iwl_phy_db_entry calib_ch; struct iwl_phy_db_entry calib_nch; struct iwl_phy_db_entry cfg; } ;
typedef enum iwl_phy_db_section_type { ____Placeholder_iwl_phy_db_section_type } iwl_phy_db_section_type ;


 size_t VAR_0 ;
 size_t VAR_1 ;





 int VAR_2 ;

__attribute__((used)) static struct iwl_phy_db_entry *
FUNC_0(struct iwl_phy_db *VAR_3,
         enum iwl_phy_db_section_type VAR_4,
         u16 VAR_5)
{
 if (!VAR_3 || VAR_4 >= VAR_2)
  return ((void*)0);

 switch (VAR_4) {
 case 128:
  return &VAR_3->cfg;
 case 129:
  return &VAR_3->calib_nch;
 case 132:
  return &VAR_3->calib_ch;
 case 131:
  if (VAR_5 >= VAR_0)
   return ((void*)0);
  return &VAR_3->calib_ch_group_papd[VAR_5];
 case 130:
  if (VAR_5 >= VAR_1)
   return ((void*)0);
  return &VAR_3->calib_ch_group_txp[VAR_5];
 default:
  return ((void*)0);
 }
 return ((void*)0);
}
