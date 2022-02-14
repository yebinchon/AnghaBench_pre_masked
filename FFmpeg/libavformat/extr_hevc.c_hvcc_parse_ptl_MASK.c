
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_3__ {void* level_idc; int constraint_indicator_flags; int profile_compatibility_flags; void* profile_idc; void* tier_flag; void* profile_space; } ;
typedef TYPE_1__ HVCCProfileTierLevel ;
typedef int HEVCDecoderConfigurationRecord ;
typedef int GetBitContext ;


 int VAR_0 ;
 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7(GetBitContext *VAR_1,
                           HEVCDecoderConfigurationRecord *VAR_2,
                           unsigned int VAR_3)
{
    unsigned int VAR_4;
    HVCCProfileTierLevel VAR_5;
    uint8_t VAR_6[VAR_0];
    uint8_t VAR_7[VAR_0];

    VAR_5.profile_space = FUNC_0(VAR_1, 2);
    VAR_5.tier_flag = FUNC_1(VAR_1);
    VAR_5.profile_idc = FUNC_0(VAR_1, 5);
    VAR_5.profile_compatibility_flags = FUNC_3(VAR_1, 32);
    VAR_5.constraint_indicator_flags = FUNC_2(VAR_1, 48);
    VAR_5.level_idc = FUNC_0(VAR_1, 8);
    FUNC_4(VAR_2, &VAR_5);

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_6[VAR_4] = FUNC_1(VAR_1);
        VAR_7[VAR_4] = FUNC_1(VAR_1);
    }

    if (VAR_3 > 0)
        for (VAR_4 = VAR_3; VAR_4 < 8; VAR_4++)
            FUNC_5(VAR_1, 2);

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        if (VAR_6[VAR_4]) {
            FUNC_6(VAR_1, 32);
            FUNC_6(VAR_1, 32);
            FUNC_5 (VAR_1, 24);
        }

        if (VAR_7[VAR_4])
            FUNC_5(VAR_1, 8);
    }
}
