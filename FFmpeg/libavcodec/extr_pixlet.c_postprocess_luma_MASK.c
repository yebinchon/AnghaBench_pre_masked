
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ptrdiff_t ;
typedef int int64_t ;
typedef int int16_t ;
struct TYPE_3__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;



__attribute__((used)) static void FUNC_0(AVFrame *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    uint16_t *VAR_4 = (uint16_t *)VAR_0->data[0];
    int16_t *VAR_5 = (int16_t *)VAR_0->data[0];
    ptrdiff_t VAR_6 = VAR_0->linesize[0] / 2;
    int VAR_7, VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
        for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
            if (VAR_5[VAR_7] <= 0)
                VAR_4[VAR_7] = 0;
            else if (VAR_5[VAR_7] > ((1 << VAR_3) - 1))
                VAR_4[VAR_7] = 65535;
            else
                VAR_4[VAR_7] = ((int64_t) VAR_5[VAR_7] * VAR_5[VAR_7] * 65535) /
                          ((1 << VAR_3) - 1) / ((1 << VAR_3) - 1);
        }
        VAR_4 += VAR_6;
        VAR_5 += VAR_6;
    }
}
