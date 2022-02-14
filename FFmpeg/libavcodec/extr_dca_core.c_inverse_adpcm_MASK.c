
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int8_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const,scalar_t__*) ;

__attribute__((used)) static inline void FUNC_2(int32_t **VAR_1,
                                 const int16_t *VAR_2,
                                 const int8_t *VAR_3,
                                 int VAR_4, int VAR_5,
                                 int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;

    for (VAR_8 = VAR_4; VAR_8 < VAR_5; VAR_8++) {
        if (VAR_3[VAR_8]) {
            const int VAR_10 = VAR_2[VAR_8];
            int32_t *VAR_11 = VAR_1[VAR_8] + VAR_6;
            for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
                int32_t VAR_12 = FUNC_1(VAR_10, VAR_11 + VAR_9 - VAR_0);
                VAR_11[VAR_9] = FUNC_0(VAR_11[VAR_9] + VAR_12);
            }
        }
    }
}
