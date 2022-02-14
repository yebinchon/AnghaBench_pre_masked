
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fshift; int length; scalar_t__* cnts; int* freqs; scalar_t__* symbols; } ;
typedef TYPE_1__ PixelModel3 ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(PixelModel3 *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_4 = 25 << VAR_2->fshift;
    VAR_5 = VAR_2->length;
    VAR_2->cnts[VAR_3] += VAR_4;
    VAR_2->cnts[VAR_5] += VAR_4;
    if (VAR_3 > 0 && VAR_2->cnts[VAR_3] > VAR_2->cnts[VAR_3 - 1]) {
        FUNC_0(VAR_0, VAR_2->cnts[VAR_3], VAR_2->cnts[VAR_3 - 1]);
        VAR_6 = VAR_2->freqs[2 * VAR_3];
        VAR_7 = VAR_2->freqs[2 * VAR_3 + 1];
        VAR_8 = VAR_2->freqs[2 * (VAR_3 - 1) + 1];
        VAR_2->freqs[2 * VAR_3] = VAR_2->freqs[2 * (VAR_3 - 1)];
        VAR_2->freqs[2 * VAR_3 + 1] = VAR_8;
        VAR_8 = VAR_3 - 1;
        VAR_2->freqs[2 * VAR_8] = VAR_6;
        VAR_2->freqs[2 * VAR_8 + 1] = VAR_7;
        FUNC_0(VAR_1, VAR_2->symbols[VAR_3], VAR_2->symbols[VAR_3 - 1]);
    }

    if (VAR_2->cnts[VAR_5] + VAR_4 > 4096)
        FUNC_1(VAR_2);
}
