
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int q_unit_cnt; TYPE_1__* channel; scalar_t__ has_band_ext; int has_band_ext_data; } ;
struct TYPE_4__ {int band_ext; void** band_ext_data; } ;
typedef int GetBitContext ;
typedef int ATRAC9Context ;
typedef TYPE_1__ ATRAC9ChannelData ;
typedef TYPE_2__ ATRAC9BlockData ;


 int VAR_0 ;
 int** VAR_1 ;
 int** VAR_2 ;
 int*** VAR_3 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void*) ;

__attribute__((used)) static inline int FUNC_5(ATRAC9Context *VAR_4, ATRAC9BlockData *VAR_5,
                                 GetBitContext *VAR_6, int VAR_7)
{
    int VAR_8 = 0;

    if (VAR_5->has_band_ext) {
        if (VAR_5->q_unit_cnt < 13)
            return VAR_0;
        VAR_8 = VAR_2[VAR_5->q_unit_cnt - 13][2];
        if (VAR_7) {
            VAR_5->channel[1].band_ext = FUNC_0(VAR_6, 2);
            VAR_5->channel[1].band_ext = VAR_8 > 2 ? VAR_5->channel[1].band_ext : 4;
        } else {
            FUNC_3(VAR_6);
        }
    }

    VAR_5->has_band_ext_data = FUNC_1(VAR_6);
    if (!VAR_5->has_band_ext_data)
        return 0;

    if (!VAR_5->has_band_ext) {
        FUNC_2(VAR_6, 2);
        FUNC_4(VAR_6, FUNC_0(VAR_6, 5));
        return 0;
    }

    VAR_5->channel[0].band_ext = FUNC_0(VAR_6, 2);
    VAR_5->channel[0].band_ext = VAR_8 > 2 ? VAR_5->channel[0].band_ext : 4;

    if (!FUNC_0(VAR_6, 5))
        return 0;

    for (int VAR_9 = 0; VAR_9 <= VAR_7; VAR_9++) {
        ATRAC9ChannelData *VAR_10 = &VAR_5->channel[VAR_9];
        const int VAR_11 = VAR_1[VAR_10->band_ext][VAR_8];
        for (int VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
            int VAR_13 = VAR_3[VAR_10->band_ext][VAR_8][VAR_12];
            VAR_10->band_ext_data[VAR_12] = FUNC_0(VAR_6, VAR_13);
        }
    }

    return 0;
}
