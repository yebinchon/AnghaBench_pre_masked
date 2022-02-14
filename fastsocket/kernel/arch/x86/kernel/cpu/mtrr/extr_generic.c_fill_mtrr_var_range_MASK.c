
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct mtrr_var_range {void* mask_hi; void* mask_lo; void* base_hi; void* base_lo; } ;
struct TYPE_2__ {struct mtrr_var_range* var_ranges; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(unsigned int VAR_1,
  u32 VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct mtrr_var_range *VAR_6;

 VAR_6 = VAR_0.var_ranges;

 VAR_6[VAR_1].base_lo = VAR_2;
 VAR_6[VAR_1].base_hi = VAR_3;
 VAR_6[VAR_1].mask_lo = VAR_4;
 VAR_6[VAR_1].mask_hi = VAR_5;
}
