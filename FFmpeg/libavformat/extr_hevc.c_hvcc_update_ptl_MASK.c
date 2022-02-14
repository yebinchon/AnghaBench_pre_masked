
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ general_tier_flag; scalar_t__ general_level_idc; scalar_t__ general_profile_idc; int general_constraint_indicator_flags; int general_profile_compatibility_flags; int general_profile_space; } ;
struct TYPE_5__ {scalar_t__ tier_flag; scalar_t__ level_idc; scalar_t__ profile_idc; int constraint_indicator_flags; int profile_compatibility_flags; int profile_space; } ;
typedef TYPE_1__ HVCCProfileTierLevel ;
typedef TYPE_2__ HEVCDecoderConfigurationRecord ;


 void* FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(HEVCDecoderConfigurationRecord *VAR_0,
                            HVCCProfileTierLevel *VAR_1)
{




    VAR_0->general_profile_space = VAR_1->profile_space;






    if (VAR_0->general_tier_flag < VAR_1->tier_flag)
        VAR_0->general_level_idc = VAR_1->level_idc;
    else
        VAR_0->general_level_idc = FUNC_0(VAR_0->general_level_idc, VAR_1->level_idc);





    VAR_0->general_tier_flag = FUNC_0(VAR_0->general_tier_flag, VAR_1->tier_flag);
    VAR_0->general_profile_idc = FUNC_0(VAR_0->general_profile_idc, VAR_1->profile_idc);





    VAR_0->general_profile_compatibility_flags &= VAR_1->profile_compatibility_flags;





    VAR_0->general_constraint_indicator_flags &= VAR_1->constraint_indicator_flags;
}
