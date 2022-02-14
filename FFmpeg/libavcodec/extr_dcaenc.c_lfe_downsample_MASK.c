
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {size_t channel_config; int channels; scalar_t__* downsampled_lfe; int * lfe_fir_64i; int ** history; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (scalar_t__*,int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(DCAEncContext *VAR_2, const int32_t *VAR_3)
{

    const int VAR_4 = VAR_1[VAR_2->channel_config];
    int VAR_5, VAR_6, VAR_7;
    int32_t VAR_8[512];
    int32_t VAR_9;
    int VAR_10 = 0;

    FUNC_0(VAR_8, &VAR_2->history[VAR_2->channels - 1][0], 512 * sizeof(int32_t));

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {

        VAR_9 = 0;

        for (VAR_5 = VAR_10, VAR_6 = 0; VAR_5 < 512; VAR_5++, VAR_6++)
            VAR_9 += FUNC_1(VAR_8[VAR_5], VAR_2->lfe_fir_64i[VAR_6]);
        for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++, VAR_6++)
            VAR_9 += FUNC_1(VAR_8[VAR_5], VAR_2->lfe_fir_64i[VAR_6]);

        VAR_2->downsampled_lfe[VAR_7] = VAR_9;


        for (VAR_5 = 0; VAR_5 < 64; VAR_5++)
            VAR_8[VAR_5 + VAR_10] = VAR_3[(VAR_7 * 64 + VAR_5) * VAR_2->channels + VAR_4];

        VAR_10 = (VAR_10 + 64) & 511;
    }
}
