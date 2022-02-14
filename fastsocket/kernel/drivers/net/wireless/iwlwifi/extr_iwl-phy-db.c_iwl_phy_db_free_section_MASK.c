
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_phy_db_entry {scalar_t__ size; int * data; } ;
struct iwl_phy_db {int dummy; } ;
typedef enum iwl_phy_db_section_type { ____Placeholder_iwl_phy_db_section_type } iwl_phy_db_section_type ;


 struct iwl_phy_db_entry* FUNC_0 (struct iwl_phy_db*,int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iwl_phy_db *VAR_0,
        enum iwl_phy_db_section_type VAR_1,
        u16 VAR_2)
{
 struct iwl_phy_db_entry *VAR_3 =
    FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return;

 FUNC_1(VAR_3->data);
 VAR_3->data = ((void*)0);
 VAR_3->size = 0;
}
