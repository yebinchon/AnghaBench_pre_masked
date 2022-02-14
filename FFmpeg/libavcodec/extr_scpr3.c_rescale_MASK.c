
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int size; int* freqs; } ;
typedef TYPE_1__ PixelModel3 ;



__attribute__((used)) static void FUNC_0(PixelModel3 *VAR_0, int *VAR_1)
{
    uint32_t VAR_2;

    VAR_2 = 256 - VAR_0->size;
    for (int VAR_3 = 0; VAR_3 < VAR_0->size; VAR_3++) {
        VAR_0->freqs[VAR_3] -= VAR_0->freqs[VAR_3] >> 1;
        VAR_2 += VAR_0->freqs[VAR_3];
    }

    *VAR_1 = VAR_2;
}
