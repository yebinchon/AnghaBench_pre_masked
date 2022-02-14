
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int dummy; } ;
struct iwl_mac_ctx_cmd {int action; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,int ,int ,int,struct iwl_mac_ctx_cmd*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_mvm *VAR_2,
         struct iwl_mac_ctx_cmd *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_0,
           sizeof(*VAR_3), VAR_3);
 if (VAR_4)
  FUNC_0(VAR_2, "Failed to send MAC context (action:%d): %d\n",
   FUNC_2(VAR_3->action), VAR_4);
 return VAR_4;
}
