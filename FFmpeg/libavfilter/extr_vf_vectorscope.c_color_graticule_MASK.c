
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {float opacity; int flags; } ;
typedef TYPE_1__ VectorscopeContext ;
struct TYPE_7__ {int* linesize; scalar_t__ height; scalar_t__ width; scalar_t__* data; } ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int,int,float const) ;
 int FUNC_2 (TYPE_2__*,int,int,float const,int,int ,int*) ;
 int*** VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(VectorscopeContext *VAR_2, AVFrame *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    const float VAR_8 = VAR_2->opacity;
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < 12; VAR_9++) {
        int VAR_10 = VAR_0[VAR_7][VAR_9][VAR_4];
        int VAR_11 = VAR_0[VAR_7][VAR_9][VAR_5];
        int VAR_12 = VAR_0[VAR_7][VAR_9][VAR_6];

        FUNC_1(VAR_3->data[VAR_6] + VAR_11 * VAR_3->linesize[VAR_6] + VAR_10, VAR_3->linesize[VAR_6], VAR_12, VAR_8);
        FUNC_1(VAR_3->data[VAR_4] + VAR_11 * VAR_3->linesize[VAR_4] + VAR_10, VAR_3->linesize[VAR_4], VAR_10, VAR_8);
        FUNC_1(VAR_3->data[VAR_5] + VAR_11 * VAR_3->linesize[VAR_5] + VAR_10, VAR_3->linesize[VAR_5], VAR_11, VAR_8);
        if (VAR_3->data[3])
            FUNC_1(VAR_3->data[3] + VAR_11 * VAR_3->linesize[3] + VAR_10, VAR_3->linesize[3], 255, VAR_8);
    }

    if (VAR_2->flags & 1) {
        int VAR_13 = VAR_0[VAR_7][12][VAR_4];
        int VAR_14 = VAR_0[VAR_7][12][VAR_5];
        int VAR_15 = VAR_0[VAR_7][12][VAR_6];

        FUNC_1(VAR_3->data[VAR_6] + VAR_14 * VAR_3->linesize[VAR_6] + VAR_13, VAR_3->linesize[VAR_6], VAR_15, VAR_8);
        FUNC_1(VAR_3->data[VAR_4] + VAR_14 * VAR_3->linesize[VAR_4] + VAR_13, VAR_3->linesize[VAR_4], VAR_13, VAR_8);
        FUNC_1(VAR_3->data[VAR_5] + VAR_14 * VAR_3->linesize[VAR_5] + VAR_13, VAR_3->linesize[VAR_5], VAR_14, VAR_8);
        if (VAR_3->data[3])
            FUNC_1(VAR_3->data[3] + VAR_14 * VAR_3->linesize[3] + VAR_13, VAR_3->linesize[3], 255, VAR_8);
    }

    if (VAR_2->flags & 2) {
        int VAR_16 = VAR_0[VAR_7][13][VAR_4];
        int VAR_17 = VAR_0[VAR_7][13][VAR_5];
        int VAR_18 = VAR_0[VAR_7][12][VAR_6];

        FUNC_1(VAR_3->data[VAR_6] + VAR_17 * VAR_3->linesize[VAR_6] + VAR_16, VAR_3->linesize[VAR_6], VAR_18, VAR_8);
        FUNC_1(VAR_3->data[VAR_4] + VAR_17 * VAR_3->linesize[VAR_4] + VAR_16, VAR_3->linesize[VAR_4], VAR_16, VAR_8);
        FUNC_1(VAR_3->data[VAR_5] + VAR_17 * VAR_3->linesize[VAR_5] + VAR_16, VAR_3->linesize[VAR_5], VAR_17, VAR_8);
        if (VAR_3->data[3])
            FUNC_1(VAR_3->data[3] + VAR_17 * VAR_3->linesize[3] + VAR_16, VAR_3->linesize[3], 255, VAR_8);
    }

    for (VAR_9 = 0; VAR_9 < 6 && VAR_2->flags & 4; VAR_9++) {
        uint8_t VAR_19[4] = { 0, 0, 0, 255 };
        int VAR_20 = VAR_0[VAR_7][VAR_9][VAR_4];
        int VAR_21 = VAR_0[VAR_7][VAR_9][VAR_5];
        int VAR_22 = VAR_0[VAR_7][VAR_9][VAR_6];

        VAR_19[VAR_6] = VAR_22;
        VAR_19[VAR_4] = VAR_20;
        VAR_19[VAR_5] = VAR_21;

        if (VAR_20 > 128)
            VAR_20 += 8;
        else
            VAR_20 -= 14;
        if (VAR_21 > 128)
            VAR_21 += 8;
        else
            VAR_21 -= 14;

        VAR_20 = FUNC_0(VAR_20, 0, VAR_3->width - 9);
        VAR_21 = FUNC_0(VAR_21, 0, VAR_3->height - 9);
        FUNC_2(VAR_3, VAR_20, VAR_21, VAR_8, 1. - VAR_8, VAR_1[VAR_9], VAR_19);
    }
}
