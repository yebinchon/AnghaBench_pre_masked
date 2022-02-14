
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float uint8_t ;
typedef int ptrdiff_t ;
typedef int AVFilterContext ;


 float FUNC_0 (float const) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0,
                      const uint8_t *VAR_1, ptrdiff_t VAR_2,
                      uint8_t *VAR_3, ptrdiff_t VAR_4,
                      int VAR_5, int VAR_6, float VAR_7)
{
    int VAR_8, VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
            VAR_3[VAR_8] = FUNC_0(VAR_1[VAR_8] * VAR_7);
        }

        VAR_3 += VAR_4;
        VAR_1 += VAR_2;
    }

    return 0;
}
