
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_bands; int num_windows; int* band_type; int* band_run_end; int avctx; scalar_t__ is_long; } ;
typedef TYPE_1__ On2AVCContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(On2AVCContext *VAR_2, GetBitContext *VAR_3)
{
    int VAR_4 = VAR_2->is_long ? 5 : 3;
    int VAR_5 = (1 << VAR_4) - 1;
    int VAR_6 = VAR_2->num_bands * VAR_2->num_windows;
    int VAR_7 = 0, VAR_8, VAR_9, VAR_10, VAR_11;

    while (VAR_7 < VAR_6) {
        VAR_9 = FUNC_1(VAR_3, 4);
        VAR_10 = 1;
        do {
            VAR_11 = FUNC_1(VAR_3, VAR_4);
            if (VAR_11 > VAR_6 - VAR_7 - VAR_10) {
                FUNC_0(VAR_2->avctx, VAR_1, "Invalid band type run\n");
                return VAR_0;
            }
            VAR_10 += VAR_11;
        } while (VAR_11 == VAR_5);
        for (VAR_8 = VAR_7; VAR_8 < VAR_7 + VAR_10; VAR_8++) {
            VAR_2->band_type[VAR_8] = VAR_9;
            VAR_2->band_run_end[VAR_8] = VAR_7 + VAR_10;
        }
        VAR_7 += VAR_10;
    }

    return 0;
}
