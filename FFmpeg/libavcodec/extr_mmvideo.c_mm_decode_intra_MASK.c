
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* avctx; TYPE_1__* frame; int gb; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_5__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_3__ MmContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_3(MmContext * VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = 0, VAR_5 = 0;

    while (FUNC_1(&VAR_1->gb) > 0) {
        int VAR_6, VAR_7;

        if (VAR_5 >= VAR_1->avctx->height)
            return 0;

        VAR_7 = FUNC_0(&VAR_1->gb);
        if (VAR_7 & 0x80) {
            VAR_6 = 1;
        }else{
            VAR_6 = (VAR_7 & 0x7f) + 2;
            VAR_7 = FUNC_0(&VAR_1->gb);
        }

        if (VAR_2)
            VAR_6 *=2;

        if (VAR_6 > VAR_1->avctx->width - VAR_4)
            return VAR_0;

        if (VAR_7) {
            FUNC_2(VAR_1->frame->data[0] + VAR_5*VAR_1->frame->linesize[0] + VAR_4, VAR_7, VAR_6);
            if (VAR_3 && VAR_5 + VAR_3 < VAR_1->avctx->height)
                FUNC_2(VAR_1->frame->data[0] + (VAR_5+1)*VAR_1->frame->linesize[0] + VAR_4, VAR_7, VAR_6);
        }
        VAR_4+= VAR_6;

        if (VAR_4 >= VAR_1->avctx->width) {
            VAR_4=0;
            VAR_5 += 1 + VAR_3;
        }
    }

    return 0;
}
