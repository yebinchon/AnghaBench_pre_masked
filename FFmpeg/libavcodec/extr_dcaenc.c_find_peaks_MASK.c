
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fullband_channels; int downsampled_lfe; void* lfe_peak_cb; scalar_t__ lfe_channel; int ** subband; void*** peak_cb; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_1(DCAEncContext *VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->fullband_channels; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
            VAR_2->peak_cb[VAR_4][VAR_3] = FUNC_0(VAR_2, VAR_2->subband[VAR_4][VAR_3],
                                             VAR_1);
    }

    if (VAR_2->lfe_channel)
        VAR_2->lfe_peak_cb = FUNC_0(VAR_2, VAR_2->downsampled_lfe, VAR_0);
}
