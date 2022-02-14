
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int32_t FUNC_2(const uint8_t *VAR_0, int VAR_1, uint8_t *VAR_2, const uint8_t *VAR_3, const int VAR_4, const int VAR_5, const int VAR_6)
{
    uint8_t *VAR_7 = (uint8_t *)VAR_2;
    const uint8_t *VAR_8 = (const uint8_t *)VAR_3;
    int VAR_9 = 0;
    int VAR_10 = VAR_5 - 1;
    int VAR_11 = 0, VAR_12;
    for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
        if (VAR_0[VAR_12]) {
            int VAR_13 = 19 * (VAR_8[VAR_12 + VAR_4 * 2] + VAR_8[VAR_12 + VAR_4 * 4]) - 3 * (VAR_8[VAR_12] + VAR_8[VAR_12 + VAR_4 * 6]);
            VAR_13 /= 32;
            VAR_7[VAR_12] = FUNC_0(FUNC_1(VAR_13, VAR_10), VAR_9);
        } else {
            VAR_7[VAR_12] = 255;
            VAR_11++;
        }
    }
    return VAR_11;
}
