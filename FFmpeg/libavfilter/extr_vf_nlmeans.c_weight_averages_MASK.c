
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float uint8_t ;
struct weighted_avg {float total_weight; float sum; } ;
typedef int ptrdiff_t ;


 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, ptrdiff_t VAR_1,
                            const uint8_t *VAR_2, ptrdiff_t VAR_3,
                            struct weighted_avg *VAR_4, ptrdiff_t VAR_5,
                            int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {

            VAR_4[VAR_8].total_weight += 1.f;
            VAR_4[VAR_8].sum += 1.f * VAR_2[VAR_8];
            VAR_0[VAR_8] = FUNC_0(VAR_4[VAR_8].sum / VAR_4[VAR_8].total_weight + 0.5f);
        }
        VAR_0 += VAR_1;
        VAR_2 += VAR_3;
        VAR_4 += VAR_5;
    }
}
