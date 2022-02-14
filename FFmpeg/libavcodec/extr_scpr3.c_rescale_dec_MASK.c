
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int fshift; int size; size_t* symbols; int* cnts; int* freqs; size_t length; } ;
typedef TYPE_1__ PixelModel3 ;



__attribute__((used)) static void FUNC_0(PixelModel3 *VAR_0)
{
    uint16_t VAR_1[256] = {0};
    uint16_t VAR_2[512] = {0};
    int VAR_3, VAR_4, VAR_5, VAR_6;
    uint32_t VAR_7;

    for (VAR_7 = 1 << (0 < VAR_0->fshift ? VAR_0->fshift - 1 : 0), VAR_3 = 0; VAR_3 < 256; VAR_3++)
        VAR_1[VAR_3] = VAR_7;

    for (VAR_7 = 0, VAR_3 = VAR_0->size; VAR_7 < VAR_3; VAR_7++)
        VAR_1[VAR_0->symbols[VAR_7]] = VAR_0->cnts[VAR_7];

    for (VAR_3 = VAR_7 = 0; VAR_3 < 256; VAR_3++) {
        VAR_2[2 * VAR_3] = VAR_1[VAR_3];
        VAR_2[2 * VAR_3 + 1] = VAR_7;
        VAR_7 += VAR_1[VAR_3];
    }

    if (VAR_0->fshift > 0)
        VAR_0->fshift--;

    VAR_7 = (256 - VAR_0->size) << (0 < VAR_0->fshift ? VAR_0->fshift - 1 : 0);
    for (VAR_3 = 0, VAR_4 = VAR_0->size; VAR_3 < VAR_4; VAR_3++) {
        VAR_0->cnts[VAR_3] -= VAR_0->cnts[VAR_3] >> 1;
        VAR_7 = VAR_7 + VAR_0->cnts[VAR_3];
        VAR_5 = VAR_0->symbols[VAR_3];
        VAR_6 = VAR_2[2 * VAR_5 + 1];
        VAR_0->freqs[2 * VAR_3] = VAR_2[2 * VAR_5];
        VAR_0->freqs[2 * VAR_3 + 1] = VAR_6;
    }
    VAR_0->cnts[VAR_0->length] = VAR_7;
}
