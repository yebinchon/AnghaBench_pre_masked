
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;
struct TYPE_6__ {int mb_y; int mb_x; } ;
typedef TYPE_1__ TqiContext ;
struct TYPE_8__ {int flags; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int* linesize; int ** data; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *) ;

__attribute__((used)) static inline void FUNC_1(AVCodecContext *VAR_1, AVFrame *VAR_2,
                                int16_t (*VAR_3)[64])
{
    TqiContext *VAR_4 = VAR_1->priv_data;
    ptrdiff_t VAR_5 = VAR_2->linesize[0];
    uint8_t *VAR_6 = VAR_2->data[0] + VAR_4->mb_y * 16 * VAR_5 + VAR_4->mb_x * 16;
    uint8_t *VAR_7 = VAR_2->data[1] + VAR_4->mb_y * 8 * VAR_2->linesize[1] + VAR_4->mb_x * 8;
    uint8_t *VAR_8 = VAR_2->data[2] + VAR_4->mb_y * 8 * VAR_2->linesize[2] + VAR_4->mb_x * 8;

    FUNC_0(VAR_6 , VAR_5, VAR_3[0]);
    FUNC_0(VAR_6 + 8, VAR_5, VAR_3[1]);
    FUNC_0(VAR_6 + 8*VAR_5 , VAR_5, VAR_3[2]);
    FUNC_0(VAR_6 + 8*VAR_5 + 8, VAR_5, VAR_3[3]);

    if (!(VAR_1->flags & VAR_0)) {
        FUNC_0(VAR_7, VAR_2->linesize[1], VAR_3[4]);
        FUNC_0(VAR_8, VAR_2->linesize[2], VAR_3[5]);
    }
}
