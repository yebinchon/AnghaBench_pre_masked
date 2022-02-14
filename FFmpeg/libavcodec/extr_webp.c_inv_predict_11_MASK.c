
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (scalar_t__*,scalar_t__ const*) ;
 int FUNC_1 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, const uint8_t *VAR_1, const uint8_t *VAR_2,
                           const uint8_t *VAR_3, const uint8_t *VAR_4)
{
    int VAR_5 = (FUNC_1(VAR_1[0] - VAR_2[0]) - FUNC_1(VAR_3[0] - VAR_2[0])) +
               (FUNC_1(VAR_1[1] - VAR_2[1]) - FUNC_1(VAR_3[1] - VAR_2[1])) +
               (FUNC_1(VAR_1[2] - VAR_2[2]) - FUNC_1(VAR_3[2] - VAR_2[2])) +
               (FUNC_1(VAR_1[3] - VAR_2[3]) - FUNC_1(VAR_3[3] - VAR_2[3]));
    if (VAR_5 <= 0)
        FUNC_0(VAR_0, VAR_3);
    else
        FUNC_0(VAR_0, VAR_1);
}
