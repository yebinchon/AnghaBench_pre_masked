
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fbw_channels; int* first_cpl_coords; int num_cpl_bands; int** cpl_coords; scalar_t__ channel_mode; scalar_t__ phase_flags_in_use; scalar_t__* phase_flags; int avctx; scalar_t__ eac3; scalar_t__* channel_in_cpl; int gbc; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AC3DecodeContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(AC3DecodeContext *VAR_3, int VAR_4)
{
    GetBitContext *VAR_5 = &VAR_3->gbc;
    int VAR_6 = VAR_3->fbw_channels;
    int VAR_7, VAR_8;
    int VAR_9 = 0;

    for (VAR_7 = 1; VAR_7 <= VAR_6; VAR_7++) {
        if (VAR_3->channel_in_cpl[VAR_7]) {
            if ((VAR_3->eac3 && VAR_3->first_cpl_coords[VAR_7]) || FUNC_2(VAR_5)) {
                int VAR_10, VAR_11, VAR_12;
                VAR_3->first_cpl_coords[VAR_7] = 0;
                VAR_9 = 1;
                VAR_10 = 3 * FUNC_1(VAR_5, 2);
                for (VAR_8 = 0; VAR_8 < VAR_3->num_cpl_bands; VAR_8++) {
                    VAR_11 = FUNC_1(VAR_5, 4);
                    VAR_12 = FUNC_1(VAR_5, 4);
                    if (VAR_11 == 15)
                        VAR_3->cpl_coords[VAR_7][VAR_8] = VAR_12 << 22;
                    else
                        VAR_3->cpl_coords[VAR_7][VAR_8] = (VAR_12 + 16) << 21;
                    VAR_3->cpl_coords[VAR_7][VAR_8] >>= (VAR_11 + VAR_10);
                }
            } else if (!VAR_4) {
                FUNC_0(VAR_3->avctx, VAR_2, "new coupling coordinates must "
                       "be present in block 0\n");
                return VAR_1;
            }
        } else {

            VAR_3->first_cpl_coords[VAR_7] = 1;
        }
    }

    if (VAR_3->channel_mode == VAR_0 && VAR_9) {
        for (VAR_8 = 0; VAR_8 < VAR_3->num_cpl_bands; VAR_8++) {
            VAR_3->phase_flags[VAR_8] = VAR_3->phase_flags_in_use ? FUNC_2(VAR_5) : 0;
        }
    }

    return 0;
}
