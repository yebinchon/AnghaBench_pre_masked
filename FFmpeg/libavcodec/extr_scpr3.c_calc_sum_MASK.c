
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int length; int size; int fshift; int* cnts; } ;
typedef TYPE_1__ PixelModel3 ;



__attribute__((used)) static void FUNC_0(PixelModel3 *VAR_0)
{
    uint32_t VAR_1;
    int VAR_2;

    VAR_2 = VAR_0->length;
    VAR_1 = (256 - VAR_0->size) << (VAR_0->fshift > 0 ? VAR_0->fshift - 1 : 0);
    for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        VAR_1 += VAR_0->cnts[VAR_3];
    VAR_0->cnts[VAR_2] = VAR_1;
}
