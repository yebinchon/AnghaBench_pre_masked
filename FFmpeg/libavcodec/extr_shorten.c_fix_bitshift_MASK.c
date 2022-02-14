
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int int32_t ;
struct TYPE_3__ {int bitshift; int blocksize; } ;
typedef TYPE_1__ ShortenContext ;



__attribute__((used)) static void FUNC_0(ShortenContext *VAR_0, int32_t *VAR_1)
{
    int VAR_2;

    if (VAR_0->bitshift == 32) {
        for (VAR_2 = 0; VAR_2 < VAR_0->blocksize; VAR_2++)
            VAR_1[VAR_2] = 0;
    } else if (VAR_0->bitshift != 0) {
        for (VAR_2 = 0; VAR_2 < VAR_0->blocksize; VAR_2++)
            VAR_1[VAR_2] *= 1U << VAR_0->bitshift;
    }
}
