
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct iwl_phy_db_entry {int data; int size; } ;
struct iwl_phy_db {int trans; } ;
typedef enum iwl_phy_db_section_type { ____Placeholder_iwl_phy_db_section_type } iwl_phy_db_section_type ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,scalar_t__) ;
 int FUNC_1 (int ,char*,int,scalar_t__,int) ;
 struct iwl_phy_db_entry* FUNC_2 (struct iwl_phy_db*,int,scalar_t__) ;
 int FUNC_3 (struct iwl_phy_db*,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(
     struct iwl_phy_db *VAR_1,
     enum iwl_phy_db_section_type VAR_2,
     u8 VAR_3)
{
 u16 VAR_4;
 int VAR_5;
 struct iwl_phy_db_entry *VAR_6;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_6 = FUNC_2(VAR_1,
            VAR_2,
            VAR_4);
  if (!VAR_6)
   return -VAR_0;


  VAR_5 = FUNC_3(VAR_1,
       VAR_2,
       VAR_6->size,
       VAR_6->data);
  if (VAR_5) {
   FUNC_1(VAR_1->trans,
    "Can't SEND phy_db section %d (%d), err %d",
    VAR_2, VAR_4, VAR_5);
   return VAR_5;
  }

  FUNC_0(VAR_1->trans,
          "Sent PHY_DB HCMD, type = %d num = %d",
          VAR_2, VAR_4);
 }

 return 0;
}
