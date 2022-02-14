
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
struct TYPE_7__ {TYPE_1__* avctx; } ;
typedef TYPE_2__ TgqContext ;
struct TYPE_8__ {int* linesize; int ** data; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *) ;

__attribute__((used)) static void FUNC_1(TgqContext *VAR_1, int16_t (*VAR_2)[64], AVFrame *VAR_3,
                            int VAR_4, int VAR_5)
{
    ptrdiff_t VAR_6 = VAR_3->linesize[0];
    uint8_t *VAR_7 = VAR_3->data[0] + (VAR_5 * 16 * VAR_6) + VAR_4 * 16;
    uint8_t *VAR_8 = VAR_3->data[1] + (VAR_5 * 8 * VAR_3->linesize[1]) + VAR_4 * 8;
    uint8_t *VAR_9 = VAR_3->data[2] + (VAR_5 * 8 * VAR_3->linesize[2]) + VAR_4 * 8;

    FUNC_0(VAR_7 , VAR_6, VAR_2[0]);
    FUNC_0(VAR_7 + 8, VAR_6, VAR_2[1]);
    FUNC_0(VAR_7 + 8 * VAR_6 , VAR_6, VAR_2[2]);
    FUNC_0(VAR_7 + 8 * VAR_6 + 8, VAR_6, VAR_2[3]);
    if (!(VAR_1->avctx->flags & VAR_0)) {
         FUNC_0(VAR_8, VAR_3->linesize[1], VAR_2[4]);
         FUNC_0(VAR_9, VAR_3->linesize[2], VAR_2[5]);
    }
}
