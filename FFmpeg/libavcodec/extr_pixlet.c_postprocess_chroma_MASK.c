
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint16_t ;
typedef int ptrdiff_t ;
typedef scalar_t__ int16_t ;
struct TYPE_3__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 unsigned int const FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(AVFrame *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    uint16_t *VAR_4 = (uint16_t *)VAR_0->data[1];
    uint16_t *VAR_5 = (uint16_t *)VAR_0->data[2];
    int16_t *VAR_6 = (int16_t *)VAR_0->data[1];
    int16_t *VAR_7 = (int16_t *)VAR_0->data[2];
    ptrdiff_t VAR_8 = VAR_0->linesize[1] / 2;
    ptrdiff_t VAR_9 = VAR_0->linesize[2] / 2;
    const unsigned VAR_10 = 1 << (VAR_3 - 1);
    const unsigned VAR_11 = 16 - VAR_3;
    int VAR_12, VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
        for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
            VAR_4[VAR_12] = FUNC_0(VAR_10 + VAR_6[VAR_12], VAR_3) << VAR_11;
            VAR_5[VAR_12] = FUNC_0(VAR_10 + VAR_7[VAR_12], VAR_3) << VAR_11;
        }
        VAR_4 += VAR_8;
        VAR_5 += VAR_9;
        VAR_6 += VAR_8;
        VAR_7 += VAR_9;
    }
}
