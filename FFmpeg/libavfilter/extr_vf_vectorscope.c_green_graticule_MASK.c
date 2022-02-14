
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
 int FUNC_2 (TYPE_2__*,int,int,float const,int,int ,int const*) ;
 int*** VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(VectorscopeContext *VAR_2, AVFrame *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    const float VAR_8 = VAR_2->opacity;
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < 12; VAR_9++) {
        int VAR_10 = VAR_0[VAR_7][VAR_9][VAR_4];
        int VAR_11 = VAR_0[VAR_7][VAR_9][VAR_5];

        FUNC_1(VAR_3->data[0] + VAR_11 * VAR_3->linesize[0] + VAR_10, VAR_3->linesize[0], 128, VAR_8);
        FUNC_1(VAR_3->data[1] + VAR_11 * VAR_3->linesize[1] + VAR_10, VAR_3->linesize[1], 0, VAR_8);
        FUNC_1(VAR_3->data[2] + VAR_11 * VAR_3->linesize[2] + VAR_10, VAR_3->linesize[2], 0, VAR_8);
        if (VAR_3->data[3])
            FUNC_1(VAR_3->data[3] + VAR_11 * VAR_3->linesize[3] + VAR_10, VAR_3->linesize[3], 255, VAR_8);
    }

    if (VAR_2->flags & 1) {
        int VAR_12 = VAR_0[VAR_7][12][VAR_4];
        int VAR_13 = VAR_0[VAR_7][12][VAR_5];

        FUNC_1(VAR_3->data[0] + VAR_13 * VAR_3->linesize[0] + VAR_12, VAR_3->linesize[0], 128, VAR_8);
        FUNC_1(VAR_3->data[1] + VAR_13 * VAR_3->linesize[1] + VAR_12, VAR_3->linesize[1], 0, VAR_8);
        FUNC_1(VAR_3->data[2] + VAR_13 * VAR_3->linesize[2] + VAR_12, VAR_3->linesize[2], 0, VAR_8);
        if (VAR_3->data[3])
            FUNC_1(VAR_3->data[3] + VAR_13 * VAR_3->linesize[3] + VAR_12, VAR_3->linesize[3], 255, VAR_8);
    }

    if (VAR_2->flags & 2) {
        int VAR_14 = VAR_0[VAR_7][13][VAR_4];
        int VAR_15 = VAR_0[VAR_7][13][VAR_5];

        FUNC_1(VAR_3->data[0] + VAR_15 * VAR_3->linesize[0] + VAR_14, VAR_3->linesize[0], 128, VAR_8);
        FUNC_1(VAR_3->data[1] + VAR_15 * VAR_3->linesize[1] + VAR_14, VAR_3->linesize[1], 0, VAR_8);
        FUNC_1(VAR_3->data[2] + VAR_15 * VAR_3->linesize[2] + VAR_14, VAR_3->linesize[2], 0, VAR_8);
        if (VAR_3->data[3])
            FUNC_1(VAR_3->data[3] + VAR_15 * VAR_3->linesize[3] + VAR_14, VAR_3->linesize[3], 255, VAR_8);
    }

    for (VAR_9 = 0; VAR_9 < 6 && VAR_2->flags & 4; VAR_9++) {
        const uint8_t VAR_16[4] = { 128, 0, 0, 255 };
        int VAR_17 = VAR_0[VAR_7][VAR_9][VAR_4];
        int VAR_18 = VAR_0[VAR_7][VAR_9][VAR_5];

        if (VAR_17 > 128)
            VAR_17 += 8;
        else
            VAR_17 -= 14;
        if (VAR_18 > 128)
            VAR_18 += 8;
        else
            VAR_18 -= 14;

        VAR_17 = FUNC_0(VAR_17, 0, VAR_3->width - 9);
        VAR_18 = FUNC_0(VAR_18, 0, VAR_3->height - 9);
        FUNC_2(VAR_3, VAR_17, VAR_18, VAR_8, 1. - VAR_8, VAR_1[VAR_9], VAR_16);
    }
}
