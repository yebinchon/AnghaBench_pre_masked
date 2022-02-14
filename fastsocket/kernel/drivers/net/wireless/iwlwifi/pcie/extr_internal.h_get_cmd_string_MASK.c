
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_trans_pcie {char const** command_names; } ;



__attribute__((used)) static inline const char *FUNC_0(struct iwl_trans_pcie *VAR_0,
      u8 VAR_1)
{
 if (!VAR_0->command_names || !VAR_0->command_names[VAR_1])
  return "UNKNOWN";
 return VAR_0->command_names[VAR_1];
}
