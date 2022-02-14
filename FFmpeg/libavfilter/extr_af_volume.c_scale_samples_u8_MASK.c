
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int int64_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(uint8_t *VAR_0, const uint8_t *VAR_1,
                                    int VAR_2, int VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        VAR_0[VAR_4] = FUNC_0(((((int64_t)VAR_1[VAR_4] - 128) * VAR_3 + 128) >> 8) + 128);
}
