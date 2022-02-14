
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scale_tbl_info {int * expected_tpt; } ;
typedef int s32 ;



__attribute__((used)) static s32 FUNC_0(struct iwl_scale_tbl_info *VAR_0, int VAR_1)
{
 if (VAR_0->expected_tpt)
  return VAR_0->expected_tpt[VAR_1];
 return 0;
}
