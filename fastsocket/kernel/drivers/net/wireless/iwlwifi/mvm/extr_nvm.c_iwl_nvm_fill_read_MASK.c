
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_nvm_access_cmd {void* type; void* length; void* offset; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_nvm_access_cmd *VAR_0,
         u16 VAR_1, u16 VAR_2, u16 VAR_3)
{
 VAR_0->offset = FUNC_0(VAR_1);
 VAR_0->length = FUNC_0(VAR_2);
 VAR_0->type = FUNC_0(VAR_3);
}
