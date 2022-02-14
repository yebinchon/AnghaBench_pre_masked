
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_nvm_section {scalar_t__ data; } ;
struct iwl_nvm_data {int dummy; } ;
struct iwl_mvm {int cfg; TYPE_1__* trans; struct iwl_nvm_section* nvm_sections; } ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 struct iwl_nvm_data* FUNC_2 (int ,int ,int const*,int const*,int const*) ;

__attribute__((used)) static struct iwl_nvm_data *
FUNC_3(struct iwl_mvm *VAR_3)
{
 struct iwl_nvm_section *VAR_4 = VAR_3->nvm_sections;
 const __le16 *VAR_5, *VAR_6, *VAR_7;


 if (!VAR_3->nvm_sections[VAR_2].data ||
     !VAR_3->nvm_sections[VAR_1].data) {
  FUNC_0(VAR_3, "Can't parse empty NVM sections\n");
  return ((void*)0);
 }

 if (FUNC_1(!VAR_3->cfg))
  return ((void*)0);

 VAR_5 = (const __le16 *)VAR_4[VAR_1].data;
 VAR_6 = (const __le16 *)VAR_4[VAR_2].data;
 VAR_7 = (const __le16 *)VAR_4[VAR_0].data;
 return FUNC_2(VAR_3->trans->dev, VAR_3->cfg, VAR_5, VAR_6, VAR_7);
}
