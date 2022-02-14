
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int coded_width; int coded_height; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int* linesize; int ** data; } ;
struct TYPE_5__ {int slice_count; int uncompress_pix_size; int tex_rat; int tex_rat2; int (* tex_fun2 ) (int *,int,int const*) ;int (* tex_fun ) (int *,int,int const*) ;int * tex_data; } ;
typedef TYPE_1__ HapContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int const*) ;
 int FUNC_2 (int *,int,int const*) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, void *VAR_3,
                                              int VAR_4, int VAR_5, int VAR_6)
{
    HapContext *VAR_7 = VAR_2->priv_data;
    AVFrame *VAR_8 = VAR_3;
    const uint8_t *VAR_9 = VAR_7->tex_data;
    int VAR_10 = VAR_2->coded_width / VAR_1;
    int VAR_11 = VAR_2->coded_height / VAR_0;
    int VAR_12, VAR_13;
    int VAR_14, VAR_15;
    int VAR_16 = VAR_11 / VAR_7->slice_count;
    int VAR_17 = VAR_11 % VAR_7->slice_count;




    VAR_14 = VAR_4 * VAR_16;

    VAR_14 += FUNC_0(VAR_4, VAR_17);

    VAR_15 = VAR_14 + VAR_16;

    if (VAR_4 < VAR_17)
        VAR_15++;

    for (VAR_13 = VAR_14; VAR_13 < VAR_15; VAR_13++) {
        uint8_t *VAR_18 = VAR_8->data[0] + VAR_13 * VAR_8->linesize[0] * VAR_0;
        int VAR_19 = VAR_13 * VAR_10;
        for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
            if (VAR_6 == 0) {
                VAR_7->tex_fun(VAR_18 + VAR_12 * 4 * VAR_7->uncompress_pix_size, VAR_8->linesize[0],
                             VAR_9 + (VAR_19 + VAR_12) * VAR_7->tex_rat);
            } else {
                VAR_7->tex_fun2(VAR_18 + VAR_12 * 4 * VAR_7->uncompress_pix_size, VAR_8->linesize[0],
                              VAR_9 + (VAR_19 + VAR_12) * VAR_7->tex_rat2);
            }
        }
    }

    return 0;
}
