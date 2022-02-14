
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int ** bs_invf_mode; } ;
struct TYPE_5__ {int n_q; } ;
typedef TYPE_1__ SpectralBandReplication ;
typedef TYPE_2__ SBRData ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(SpectralBandReplication *VAR_0, GetBitContext *VAR_1,
                          SBRData *VAR_2)
{
    int VAR_3;

    FUNC_1(VAR_2->bs_invf_mode[1], VAR_2->bs_invf_mode[0], 5 * sizeof(uint8_t));
    for (VAR_3 = 0; VAR_3 < VAR_0->n_q; VAR_3++)
        VAR_2->bs_invf_mode[0][VAR_3] = FUNC_0(VAR_1, 2);
}
