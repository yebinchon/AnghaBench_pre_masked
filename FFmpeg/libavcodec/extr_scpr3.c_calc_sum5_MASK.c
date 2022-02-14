
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int size; int* freqs; int cntsum; } ;
typedef TYPE_1__ PixelModel3 ;



__attribute__((used)) static void FUNC_0(PixelModel3 *VAR_0)
{
    uint32_t VAR_1;

    VAR_1 = 256 - VAR_0->size;
    for (int VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++)
        VAR_1 += VAR_0->freqs[VAR_2];
    VAR_0->cntsum = VAR_1;
}
