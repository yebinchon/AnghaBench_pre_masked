
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_calib_hdr {int groups_num; int data_valid; scalar_t__ first_group; int op_code; } ;



__attribute__((used)) static inline void FUNC_0(struct iwl_calib_hdr *VAR_0, u8 VAR_1)
{
 VAR_0->op_code = VAR_1;
 VAR_0->first_group = 0;
 VAR_0->groups_num = 1;
 VAR_0->data_valid = 1;
}
