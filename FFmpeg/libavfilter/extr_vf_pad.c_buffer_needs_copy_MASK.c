
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_13__ {int size; int * data; } ;
struct TYPE_12__ {int height; int* linesize; int width; int ** data; } ;
struct TYPE_10__ {int* hsub; int* vsub; int* pixelstep; } ;
struct TYPE_11__ {int x; int y; int w; int h; TYPE_1__ draw; } ;
typedef TYPE_2__ PadContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVBufferRef ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_3(PadContext *VAR_0, AVFrame *VAR_1, AVBufferRef *VAR_2)
{
    int VAR_3[4] = { -1, -1, -1, -1}, *VAR_4 = VAR_3;
    int VAR_5, VAR_6;


    for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_3) && VAR_1->data[VAR_5]; VAR_5++) {
        if (FUNC_2(VAR_1, VAR_5) == VAR_2)
            *VAR_4++ = VAR_5;
    }



    for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_3) && VAR_3[VAR_5] >= 0; VAR_5++) {
        int VAR_7 = VAR_0->draw.hsub[VAR_3[VAR_5]];
        int VAR_8 = VAR_0->draw.vsub[VAR_3[VAR_5]];

        uint8_t *VAR_9 = VAR_1->data[VAR_3[VAR_5]];
        uint8_t *VAR_10 = VAR_9 + (VAR_1->height >> VAR_8) *
                                 VAR_1->linesize[VAR_3[VAR_5]];



        ptrdiff_t VAR_11 = (VAR_0->x >> VAR_7) * VAR_0->draw.pixelstep[VAR_3[VAR_5]] +
                              (VAR_0->y >> VAR_8) * VAR_1->linesize[VAR_3[VAR_5]];
        ptrdiff_t VAR_12 = ((VAR_0->w - VAR_0->x - VAR_1->width) >> VAR_7) *
                              VAR_0->draw.pixelstep[VAR_3[VAR_5]] +
                              ((VAR_0->h - VAR_0->y - VAR_1->height) >> VAR_8) * VAR_1->linesize[VAR_3[VAR_5]];

        if (VAR_1->linesize[VAR_3[VAR_5]] < (VAR_0->w >> VAR_7) * VAR_0->draw.pixelstep[VAR_3[VAR_5]])
            return 1;
        if (VAR_9 - VAR_2->data < VAR_11 ||
            (VAR_2->data + VAR_2->size) - VAR_10 < VAR_12)
            return 1;

        for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_3) && VAR_3[VAR_6] >= 0; VAR_6++) {
            int VAR_13 = VAR_0->draw.vsub[VAR_3[VAR_6]];
            uint8_t *VAR_14 = VAR_1->data[VAR_3[VAR_6]];
            uint8_t *VAR_15 = VAR_14 + (VAR_1->height >> VAR_13) *
                                       VAR_1->linesize[VAR_3[VAR_6]];
            if (VAR_5 == VAR_6)
                continue;

            if (FUNC_0(VAR_9 - VAR_15) != FUNC_0(VAR_9 - VAR_15 - VAR_11) ||
                FUNC_0(VAR_10 - VAR_14) != FUNC_0(VAR_10 - VAR_14 + VAR_12))
                return 1;
        }
    }

    return 0;
}
