
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
typedef int Wmv2Context ;
struct TYPE_5__ {int linesize; int uvlinesize; TYPE_1__* avctx; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_2__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (int * const,int *,int *,int,int) ;

void FUNC_1(MpegEncContext *VAR_1, int16_t VAR_2[6][64],
                    uint8_t *VAR_3, uint8_t *VAR_4, uint8_t *VAR_5)
{
    Wmv2Context *const VAR_6 = (Wmv2Context *) VAR_1;

    FUNC_0(VAR_6, VAR_2[0], VAR_3, VAR_1->linesize, 0);
    FUNC_0(VAR_6, VAR_2[1], VAR_3 + 8, VAR_1->linesize, 1);
    FUNC_0(VAR_6, VAR_2[2], VAR_3 + 8 * VAR_1->linesize, VAR_1->linesize, 2);
    FUNC_0(VAR_6, VAR_2[3], VAR_3 + 8 + 8 * VAR_1->linesize, VAR_1->linesize, 3);

    if (VAR_1->avctx->flags & VAR_0)
        return;

    FUNC_0(VAR_6, VAR_2[4], VAR_4, VAR_1->uvlinesize, 4);
    FUNC_0(VAR_6, VAR_2[5], VAR_5, VAR_1->uvlinesize, 5);
}
