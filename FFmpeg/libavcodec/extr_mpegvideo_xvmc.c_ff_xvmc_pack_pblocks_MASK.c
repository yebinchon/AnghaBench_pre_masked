
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chroma_format; scalar_t__ swap_uv; int ** pblocks; int * block; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(MpegEncContext *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3 = 0;
    const int VAR_4 = 4 + (1 << VAR_0->chroma_format);

    VAR_1 <<= 12-VAR_4;
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
        if (VAR_1 & (1 << 11))
            VAR_0->pblocks[VAR_2] = &VAR_0->block[VAR_3++];
        else
            VAR_0->pblocks[VAR_2] = ((void*)0);
        VAR_1 += VAR_1;
    }
    if (VAR_0->swap_uv) {
        FUNC_0(VAR_0);
    }
}
