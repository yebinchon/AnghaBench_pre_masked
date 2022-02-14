
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;
struct TYPE_8__ {TYPE_1__* avctx; } ;
typedef TYPE_2__ TgqContext ;
struct TYPE_9__ {int* linesize; int ** data; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int,int const) ;

__attribute__((used)) static void FUNC_1(TgqContext *VAR_1, AVFrame *VAR_2,
                                   int VAR_3, int VAR_4, const int8_t *VAR_5)
{
    ptrdiff_t VAR_6 = VAR_2->linesize[0];
    uint8_t *VAR_7 = VAR_2->data[0] + (VAR_4 * 16 * VAR_6) + VAR_3 * 16;
    uint8_t *VAR_8 = VAR_2->data[1] + (VAR_4 * 8 * VAR_2->linesize[1]) + VAR_3 * 8;
    uint8_t *VAR_9 = VAR_2->data[2] + (VAR_4 * 8 * VAR_2->linesize[2]) + VAR_3 * 8;
    FUNC_0(VAR_1, VAR_7, VAR_6, VAR_5[0]);
    FUNC_0(VAR_1, VAR_7 + 8, VAR_6, VAR_5[1]);
    FUNC_0(VAR_1, VAR_7 + 8 * VAR_6, VAR_6, VAR_5[2]);
    FUNC_0(VAR_1, VAR_7 + 8 * VAR_6 + 8, VAR_6, VAR_5[3]);
    if (!(VAR_1->avctx->flags & VAR_0)) {
        FUNC_0(VAR_1, VAR_8, VAR_2->linesize[1], VAR_5[4]);
        FUNC_0(VAR_1, VAR_9, VAR_2->linesize[2], VAR_5[5]);
    }
}
