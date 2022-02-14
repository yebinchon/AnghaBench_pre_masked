
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fbw_channels; scalar_t__ channel_mode; int* channel_uses_spx; int spx_dst_end_freq; int spx_dst_start_freq; int spx_src_start_freq; int spx_band_struct; int spx_band_sizes; int num_spx_bands; int eac3; int avctx; int gbc; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AC3DecodeContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,int,int) ;
 int FUNC_1 (int *,int,int ,int ,int,int,int ,int *,int ,int ,int) ;
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline int FUNC_4(AC3DecodeContext *VAR_6, int VAR_7)
{
    GetBitContext *VAR_8 = &VAR_6->gbc;
    int VAR_9 = VAR_6->fbw_channels;
    int VAR_10, VAR_11, VAR_12,
        VAR_13, VAR_14, VAR_15;


    if (VAR_6->channel_mode == VAR_0) {
        VAR_6->channel_uses_spx[1] = 1;
    } else {
        for (VAR_15 = 1; VAR_15 <= VAR_9; VAR_15++)
            VAR_6->channel_uses_spx[VAR_15] = FUNC_3(VAR_8);
    }



    VAR_10 = FUNC_2(VAR_8, 2);
    VAR_13 = FUNC_2(VAR_8, 3) + 2;
    if (VAR_13 > 7)
        VAR_13 += VAR_13 - 7;
    VAR_14 = FUNC_2(VAR_8, 3) + 5;



    if (VAR_14 > 7)
        VAR_14 += VAR_14 - 7;
    VAR_10 = VAR_10 * 12 + 25;
    VAR_12 = VAR_13 * 12 + 25;
    VAR_11 = VAR_14 * 12 + 25;


    if (VAR_13 >= VAR_14) {
        FUNC_0(VAR_6->avctx, VAR_2, "invalid spectral extension "
               "range (%d >= %d)\n", VAR_13, VAR_14);
        return VAR_1;
    }
    if (VAR_10 >= VAR_12) {
        FUNC_0(VAR_6->avctx, VAR_2, "invalid spectral extension "
               "copy start bin (%d >= %d)\n", VAR_10, VAR_12);
        return VAR_1;
    }

    VAR_6->spx_dst_start_freq = VAR_10;
    VAR_6->spx_src_start_freq = VAR_12;
    if (!VAR_3)
        VAR_6->spx_dst_end_freq = VAR_11;

    FUNC_1(VAR_8, VAR_7, VAR_6->eac3, 0,
                          VAR_13, VAR_14,
                          VAR_5,
                          &VAR_6->num_spx_bands,
                          VAR_6->spx_band_sizes,
                          VAR_6->spx_band_struct, sizeof(VAR_6->spx_band_struct));
    return 0;
}
