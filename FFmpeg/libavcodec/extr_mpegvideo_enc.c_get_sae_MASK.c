
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3,VAR_4;
    int VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
            VAR_5 += FUNC_0(VAR_0[VAR_3 + VAR_4 * VAR_2] - VAR_1);
        }
    }

    return VAR_5;
}
