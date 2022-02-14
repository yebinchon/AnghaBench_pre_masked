
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bs_num_noise; int bs_df_noise; int bs_num_env; int bs_df_env; } ;
typedef int SpectralBandReplication ;
typedef TYPE_1__ SBRData ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(SpectralBandReplication *VAR_0, GetBitContext *VAR_1,
                          SBRData *VAR_2)
{
    FUNC_0(VAR_1, VAR_2->bs_df_env, VAR_2->bs_num_env);
    FUNC_0(VAR_1, VAR_2->bs_df_noise, VAR_2->bs_num_noise);
}
