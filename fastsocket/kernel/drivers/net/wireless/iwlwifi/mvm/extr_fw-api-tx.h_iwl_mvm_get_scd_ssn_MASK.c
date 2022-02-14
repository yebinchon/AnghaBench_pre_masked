
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_tx_resp {int frame_count; int status; } ;
typedef int __le32 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline u32 FUNC_1(struct iwl_mvm_tx_resp *VAR_0)
{
 return FUNC_0((__le32 *)&VAR_0->status +
       VAR_0->frame_count) & 0xfff;
}
