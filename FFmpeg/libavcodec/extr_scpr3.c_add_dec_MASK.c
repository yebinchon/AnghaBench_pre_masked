
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int length; int* symbols; int* freqs; int* cnts; } ;
typedef TYPE_1__ PixelModel3 ;



__attribute__((used)) static int FUNC_0(PixelModel3 *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_0->size >= 40 || VAR_0->size >= VAR_0->length)
        return -1;

    VAR_4 = VAR_0->size;
    VAR_0->symbols[VAR_4] = VAR_1;
    VAR_0->freqs[2 * VAR_4] = VAR_2;
    VAR_0->freqs[2 * VAR_4 + 1] = VAR_3;
    VAR_0->cnts[VAR_4] = VAR_2 - (VAR_2 >> 1);
    VAR_0->size++;

    return VAR_4;
}
