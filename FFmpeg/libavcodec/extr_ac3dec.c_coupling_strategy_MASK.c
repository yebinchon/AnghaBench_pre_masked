
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int fbw_channels; int channel_mode; int* channel_in_cpl; int spx_src_start_freq; int* start_freq; int* end_freq; int* first_cpl_coords; void* phase_flags_in_use; int eac3; int first_cpl_leak; int cpl_band_struct; int cpl_band_sizes; int num_cpl_bands; int avctx; scalar_t__ spx_in_use; void** cpl_in_use; int gbc; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AC3DecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int,int ,int ,int,int,int ,int *,int ,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;

__attribute__((used)) static inline int FUNC_6(AC3DecodeContext *VAR_7, int VAR_8,
                                    uint8_t *VAR_9)
{
    GetBitContext *VAR_10 = &VAR_7->gbc;
    int VAR_11 = VAR_7->fbw_channels;
    int VAR_12 = VAR_7->channel_mode;
    int VAR_13;

    FUNC_5(VAR_9, 3, VAR_1);
    if (!VAR_7->eac3)
        VAR_7->cpl_in_use[VAR_8] = FUNC_4(VAR_10);
    if (VAR_7->cpl_in_use[VAR_8]) {

        int VAR_14, VAR_15;

        if (VAR_12 < VAR_0) {
            FUNC_0(VAR_7->avctx, VAR_4, "coupling not allowed in mono or dual-mono\n");
            return VAR_2;
        }


        if (VAR_7->eac3 && FUNC_4(VAR_10)) {

            FUNC_1(VAR_7->avctx, "Enhanced coupling");
            return VAR_3;
        }


        if (VAR_7->eac3 && VAR_7->channel_mode == VAR_0) {
            VAR_7->channel_in_cpl[1] = 1;
            VAR_7->channel_in_cpl[2] = 1;
        } else {
            for (VAR_13 = 1; VAR_13 <= VAR_11; VAR_13++)
                VAR_7->channel_in_cpl[VAR_13] = FUNC_4(VAR_10);
        }


        if (VAR_12 == VAR_0)
            VAR_7->phase_flags_in_use = FUNC_4(VAR_10);


        VAR_14 = FUNC_3(VAR_10, 4);
        VAR_15 = VAR_7->spx_in_use ? (VAR_7->spx_src_start_freq - 37) / 12 :
                                          FUNC_3(VAR_10, 4) + 3;
        if (VAR_14 >= VAR_15) {
            FUNC_0(VAR_7->avctx, VAR_4, "invalid coupling range (%d >= %d)\n",
                   VAR_14, VAR_15);
            return VAR_2;
        }
        VAR_7->start_freq[VAR_5] = VAR_14 * 12 + 37;
        VAR_7->end_freq[VAR_5] = VAR_15 * 12 + 37;

        FUNC_2(VAR_10, VAR_8, VAR_7->eac3, 0, VAR_14,
                              VAR_15,
                              VAR_6,
                              &VAR_7->num_cpl_bands, VAR_7->cpl_band_sizes,
                              VAR_7->cpl_band_struct, sizeof(VAR_7->cpl_band_struct));
    } else {

        for (VAR_13 = 1; VAR_13 <= VAR_11; VAR_13++) {
            VAR_7->channel_in_cpl[VAR_13] = 0;
            VAR_7->first_cpl_coords[VAR_13] = 1;
        }
        VAR_7->first_cpl_leak = VAR_7->eac3;
        VAR_7->phase_flags_in_use = 0;
    }

    return 0;
}
