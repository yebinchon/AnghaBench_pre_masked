
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int configurationVersion; int lengthSizeMinusOne; int general_profile_compatibility_flags; int general_constraint_indicator_flags; scalar_t__ min_spatial_segmentation_idc; } ;
typedef TYPE_1__ HEVCDecoderConfigurationRecord ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(HEVCDecoderConfigurationRecord *VAR_1)
{
    FUNC_0(VAR_1, 0, sizeof(HEVCDecoderConfigurationRecord));
    VAR_1->configurationVersion = 1;
    VAR_1->lengthSizeMinusOne = 3;





    VAR_1->general_profile_compatibility_flags = 0xffffffff;
    VAR_1->general_constraint_indicator_flags = 0xffffffffffff;





    VAR_1->min_spatial_segmentation_idc = VAR_0 + 1;
}
