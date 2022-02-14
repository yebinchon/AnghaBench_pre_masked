
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int table; } ;
struct TYPE_5__ {int num_windows; int num_bands; scalar_t__* scale_tab; scalar_t__* band_scales; int avctx; TYPE_1__ scale_diff; scalar_t__* band_type; scalar_t__* grouping; } ;
typedef TYPE_2__ On2AVCContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_4(On2AVCContext *VAR_2, GetBitContext *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 = 1;
    int VAR_9 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_2->num_windows; VAR_4++) {
        if (!VAR_2->grouping[VAR_4]) {
            FUNC_3(VAR_2->band_scales + VAR_9,
                   VAR_2->band_scales + VAR_9 - VAR_2->num_bands,
                   VAR_2->num_bands * sizeof(*VAR_2->band_scales));
            VAR_9 += VAR_2->num_bands;
            continue;
        }
        for (VAR_6 = 0; VAR_6 < VAR_2->num_bands; VAR_6++) {
            if (!VAR_2->band_type[VAR_9]) {
                int VAR_10 = 1;
                for (VAR_5 = VAR_4 + 1; VAR_5 < VAR_2->num_windows; VAR_5++) {
                    if (VAR_2->grouping[VAR_5])
                        break;
                    if (VAR_2->band_type[VAR_5 * VAR_2->num_bands + VAR_6]) {
                        VAR_10 = 0;
                        break;
                    }
                }
                if (VAR_10) {
                    VAR_2->band_scales[VAR_9++] = 0;
                    continue;
                }
            }
            if (VAR_8) {
                VAR_7 = FUNC_1(VAR_3, 7);
                VAR_8 = 0;
            } else {
                VAR_7 += FUNC_2(VAR_3, VAR_2->scale_diff.table, 9, 3) - 60;
            }
            if (VAR_7 < 0 || VAR_7 > 127) {
                FUNC_0(VAR_2->avctx, VAR_1, "Invalid scale value %d\n",
                       VAR_7);
                return VAR_0;
            }
            VAR_2->band_scales[VAR_9++] = VAR_2->scale_tab[VAR_7];
        }
    }

    return 0;
}
