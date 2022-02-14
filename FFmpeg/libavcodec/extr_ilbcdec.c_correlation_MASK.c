
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef size_t int16_t ;


 int FUNC_0 (size_t*,size_t*,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(int32_t *VAR_0, int32_t *VAR_1, int16_t *VAR_2,
                        int16_t VAR_3, int16_t VAR_4, int16_t VAR_5, int16_t VAR_6)
{
    int16_t *VAR_7;

    VAR_7 = &VAR_2[VAR_4 - VAR_5 - VAR_3];

    *VAR_0 = FUNC_0(&VAR_2[VAR_4 - VAR_5], VAR_7, VAR_5, VAR_6);
    *VAR_1 = FUNC_0(VAR_7, VAR_7, VAR_5, VAR_6);

    if (*VAR_1 == 0) {
        *VAR_0 = 0;
        *VAR_1 = 1;
    }
}
