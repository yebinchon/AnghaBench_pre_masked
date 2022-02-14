
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_6__ {int flags2; scalar_t__ debug_mv; } ;
struct TYPE_5__ {int alloc_mb_width; int alloc_mb_height; void** ref_index_buf; void** motion_val_buf; void* mb_mean_buf; void* mc_mb_var_buf; void* mb_var_buf; void* mb_type_buf; void* qscale_table_buf; void* mbskip_table_buf; } ;
typedef TYPE_1__ Picture ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int const) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_3, Picture *VAR_4, int VAR_5, int VAR_6,
                                int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    const int VAR_11 = VAR_7 * (VAR_9 + 1) + 1;
    const int VAR_12 = VAR_7 * VAR_9;
    const int VAR_13 = VAR_10 * VAR_9 * 2;
    int VAR_14;


    VAR_4->mbskip_table_buf = FUNC_1(VAR_12 + 2);
    VAR_4->qscale_table_buf = FUNC_1(VAR_11 + VAR_7);
    VAR_4->mb_type_buf = FUNC_1((VAR_11 + VAR_7) *
                                             sizeof(uint32_t));
    if (!VAR_4->mbskip_table_buf || !VAR_4->qscale_table_buf || !VAR_4->mb_type_buf)
        return FUNC_0(VAR_1);

    if (VAR_5) {
        VAR_4->mb_var_buf = FUNC_1(VAR_12 * sizeof(int16_t));
        VAR_4->mc_mb_var_buf = FUNC_1(VAR_12 * sizeof(int16_t));
        VAR_4->mb_mean_buf = FUNC_1(VAR_12);
        if (!VAR_4->mb_var_buf || !VAR_4->mc_mb_var_buf || !VAR_4->mb_mean_buf)
            return FUNC_0(VAR_1);
    }

    if (VAR_6 == VAR_2 || VAR_5 ||



        (VAR_3->flags2 & VAR_0)) {
        int VAR_15 = 2 * (VAR_13 + 4) * sizeof(int16_t);
        int VAR_16 = 4 * VAR_12;

        for (VAR_14 = 0; VAR_15 && VAR_14 < 2; VAR_14++) {
            VAR_4->motion_val_buf[VAR_14] = FUNC_1(VAR_15);
            VAR_4->ref_index_buf[VAR_14] = FUNC_1(VAR_16);
            if (!VAR_4->motion_val_buf[VAR_14] || !VAR_4->ref_index_buf[VAR_14])
                return FUNC_0(VAR_1);
        }
    }

    VAR_4->alloc_mb_width = VAR_8;
    VAR_4->alloc_mb_height = VAR_9;

    return 0;
}
