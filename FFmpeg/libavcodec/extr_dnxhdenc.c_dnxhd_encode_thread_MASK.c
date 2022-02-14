
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_10__ {int* last_dc; int mb_width; int (* dct_quantize ) (TYPE_3__*,int *,int,int,int*) ;int pb; } ;
struct TYPE_9__ {scalar_t__ pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int data_offset; int* slice_offs; int bit_depth; int* mb_qscale; int is_444; TYPE_3__ m; int ** blocks; int * slice_size; struct TYPE_8__** thread; } ;
typedef TYPE_1__ DNXHDEncContext ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int *,int,int,int*) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_1, void *VAR_2,
                               int VAR_3, int VAR_4)
{
    DNXHDEncContext *VAR_5 = VAR_1->priv_data;
    int VAR_6 = VAR_3, VAR_7;
    VAR_5 = VAR_5->thread[VAR_4];
    FUNC_4(&VAR_5->m.pb, (uint8_t *)VAR_2 + VAR_5->data_offset + VAR_5->slice_offs[VAR_3],
                  VAR_5->slice_size[VAR_3]);

    VAR_5->m.last_dc[0] =
    VAR_5->m.last_dc[1] =
    VAR_5->m.last_dc[2] = 1 << (VAR_5->bit_depth + 2);
    for (VAR_7 = 0; VAR_7 < VAR_5->m.mb_width; VAR_7++) {
        unsigned VAR_8 = VAR_6 * VAR_5->m.mb_width + VAR_7;
        int VAR_9 = VAR_5->mb_qscale[VAR_8];
        int VAR_10;

        FUNC_5(&VAR_5->m.pb, 11, VAR_9);
        FUNC_5(&VAR_5->m.pb, 1, VAR_1->pix_fmt == VAR_0);

        FUNC_1(VAR_5, VAR_7, VAR_6);

        for (VAR_10 = 0; VAR_10 < 8 + 4 * VAR_5->is_444; VAR_10++) {
            int16_t *VAR_11 = VAR_5->blocks[VAR_10];
            int VAR_12, VAR_13 = FUNC_2(VAR_5, VAR_10);
            int VAR_14 = VAR_5->m.dct_quantize(&VAR_5->m, VAR_11,
                                                 VAR_5->is_444 ? (((VAR_10 >> 1) % 3) < 1 ? 0 : 4): 4 & (2*VAR_10),
                                                 VAR_9, &VAR_12);

            FUNC_0(VAR_5, VAR_11, VAR_14, VAR_13);

        }
    }
    if (FUNC_6(&VAR_5->m.pb) & 31)
        FUNC_5(&VAR_5->m.pb, 32 - (FUNC_6(&VAR_5->m.pb) & 31), 0);
    FUNC_3(&VAR_5->m.pb);
    return 0;
}
