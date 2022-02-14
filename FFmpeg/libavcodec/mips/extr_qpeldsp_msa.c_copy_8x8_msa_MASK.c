
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int int32_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(const uint8_t *VAR_0, int32_t VAR_1,
                         uint8_t *VAR_2, int32_t VAR_3)
{
    uint64_t VAR_4, VAR_5;
    int32_t VAR_6;

    for (VAR_6 = 4; VAR_6--;) {
        VAR_4 = FUNC_0(VAR_0);
        VAR_0 += VAR_1;
        VAR_5 = FUNC_0(VAR_0);
        VAR_0 += VAR_1;

        FUNC_1(VAR_4, VAR_2);
        VAR_2 += VAR_3;
        FUNC_1(VAR_5, VAR_2);
        VAR_2 += VAR_3;
    }
}
