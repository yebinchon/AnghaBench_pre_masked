
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int avctx; } ;
struct TYPE_10__ {int spectrum_params; } ;
typedef TYPE_1__ SpectralBandReplication ;
typedef TYPE_2__ AACContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(AACContext *VAR_1, SpectralBandReplication *VAR_2)
{
    int VAR_3;
    VAR_3 = FUNC_2(VAR_1, VAR_2, &VAR_2->spectrum_params);
    if (VAR_3 >= 0)
        VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (VAR_3 < 0) {
        FUNC_0(VAR_1->avctx, VAR_0,
               "SBR reset failed. Switching SBR to pure upsampling mode.\n");
        FUNC_3(VAR_2);
    }
}
