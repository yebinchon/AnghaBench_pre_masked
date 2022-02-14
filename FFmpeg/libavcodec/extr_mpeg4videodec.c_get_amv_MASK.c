
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int f_code; int sprite_warping_accuracy; int workaround_bugs; int quarter_sample; int real_sprite_warping_points; int** sprite_offset; int** sprite_delta; int mb_x; int mb_y; } ;
struct TYPE_5__ {int divx_version; int divx_build; int* sprite_shift; TYPE_1__ m; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg4DecContext ;


 int VAR_0 ;
 int FUNC_0 (int,int const) ;

__attribute__((used)) static inline int FUNC_1(Mpeg4DecContext *VAR_1, int VAR_2)
{
    MpegEncContext *VAR_3 = &VAR_1->m;
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11 = 1 << (VAR_3->f_code + 4);
    const int VAR_12 = VAR_3->sprite_warping_accuracy;

    if (VAR_3->workaround_bugs & VAR_0)
        VAR_11 >>= VAR_3->quarter_sample;

    if (VAR_3->real_sprite_warping_points == 1) {
        if (VAR_1->divx_version == 500 && VAR_1->divx_build == 413 && VAR_12 >= VAR_3->quarter_sample)
            VAR_7 = VAR_3->sprite_offset[0][VAR_2] / (1 << (VAR_12 - VAR_3->quarter_sample));
        else
            VAR_7 = FUNC_0(VAR_3->sprite_offset[0][VAR_2] * (1 << VAR_3->quarter_sample), VAR_12);
    } else {
        VAR_8 = VAR_3->sprite_delta[VAR_2][0];
        VAR_9 = VAR_3->sprite_delta[VAR_2][1];
        VAR_10 = VAR_1->sprite_shift[0];
        if (VAR_2)
            VAR_9 -= 1 << (VAR_10 + VAR_12 + 1);
        else
            VAR_8 -= 1 << (VAR_10 + VAR_12 + 1);
        VAR_6 = VAR_3->sprite_offset[0][VAR_2] + VAR_8 * VAR_3->mb_x * 16 + VAR_9 * VAR_3->mb_y * 16;

        VAR_7 = 0;
        for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
            int VAR_13;

            VAR_13 = VAR_6 + VAR_9 * VAR_5;

            for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
                VAR_7 += VAR_13 >> VAR_10;
                VAR_13 += VAR_8;
            }
        }
        VAR_7 = FUNC_0(VAR_7, VAR_12 + 8 - VAR_3->quarter_sample);
    }

    if (VAR_7 < -VAR_11)
        VAR_7 = -VAR_11;
    else if (VAR_7 >= VAR_11)
        VAR_7 = VAR_11 - 1;

    return VAR_7;
}
