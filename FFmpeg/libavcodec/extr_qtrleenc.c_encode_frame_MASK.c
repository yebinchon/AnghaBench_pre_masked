
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int* linesize; scalar_t__* data; } ;
struct TYPE_11__ {unsigned int logical_width; unsigned int pixel_size; TYPE_2__* avctx; TYPE_1__* previous_frame; int key_frame; } ;
struct TYPE_10__ {int height; } ;
struct TYPE_9__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_3__ QtrleEncContext ;
typedef TYPE_4__ AVFrame ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int **,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__ const*,int,int **) ;

__attribute__((used)) static int FUNC_6(QtrleEncContext *VAR_0, const AVFrame *VAR_1, uint8_t *VAR_2)
{
    int VAR_3;
    int VAR_4 = 0;
    int VAR_5 = VAR_0->avctx->height;
    uint8_t *VAR_6 = VAR_2;

    if (!VAR_0->key_frame) {
        unsigned VAR_7 = VAR_0->logical_width * VAR_0->pixel_size;
        for (VAR_4 = 0; VAR_4 < VAR_0->avctx->height; VAR_4++)
            if (FUNC_4(VAR_1->data[0] + VAR_4*VAR_1->linesize[0],
                       VAR_0->previous_frame->data[0] + VAR_4 * VAR_0->previous_frame->linesize[0],
                       VAR_7))
                break;

        for (VAR_5=VAR_0->avctx->height; VAR_5 > VAR_4; VAR_5--)
            if (FUNC_4(VAR_1->data[0] + (VAR_5 - 1)*VAR_1->linesize[0],
                       VAR_0->previous_frame->data[0] + (VAR_5 - 1) * VAR_0->previous_frame->linesize[0],
                       VAR_7))
                break;
    }

    FUNC_2(&VAR_2, 0);

    if ((VAR_4 == 0 && VAR_5 == VAR_0->avctx->height) || VAR_4 == VAR_0->avctx->height)
        FUNC_1(&VAR_2, 0);
    else {
        FUNC_1(&VAR_2, 8);
        FUNC_1(&VAR_2, VAR_4);
        FUNC_1(&VAR_2, 0);
        FUNC_1(&VAR_2, VAR_5 - VAR_4);
        FUNC_1(&VAR_2, 0);
    }
    for (VAR_3 = VAR_4; VAR_3 < VAR_5; VAR_3++)
        FUNC_5(VAR_0, VAR_1, VAR_3, &VAR_2);

    FUNC_3(&VAR_2, 0);
    FUNC_0(VAR_6, VAR_2 - VAR_6);
    return VAR_2 - VAR_6;
}
