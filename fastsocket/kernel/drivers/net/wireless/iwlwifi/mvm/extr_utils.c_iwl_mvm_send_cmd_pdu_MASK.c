
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_mvm {int dummy; } ;
struct iwl_host_cmd {int flags; int data; int len; int id; } ;


 int FUNC_0 (struct iwl_mvm*,struct iwl_host_cmd*) ;

int FUNC_1(struct iwl_mvm *VAR_0, u8 VAR_1,
    u32 VAR_2, u16 VAR_3, const void *VAR_4)
{
 struct iwl_host_cmd VAR_5 = {
  .id = VAR_1,
  .len = VAR_3, 
  .data = VAR_4, 
  .flags = VAR_2,
 };

 return FUNC_0(VAR_0, &VAR_5);
}
