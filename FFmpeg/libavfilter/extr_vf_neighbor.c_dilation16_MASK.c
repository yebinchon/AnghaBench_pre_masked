
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, const uint8_t *VAR_1, int VAR_2,
                       int VAR_3, const uint8_t *VAR_4[], int VAR_5,
                       int VAR_6)
{
    uint16_t *VAR_7 = (uint16_t *)VAR_0;
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
        int VAR_10 = FUNC_0(&VAR_1[VAR_8 * 2]);
        int VAR_11 = FUNC_2(VAR_10 + VAR_3, VAR_6);

        for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
            if (VAR_5 & (1 << VAR_9)) {
                VAR_10 = FUNC_1(VAR_10, FUNC_0(VAR_4[VAR_9] + VAR_8 * 2));
            }
            VAR_10 = FUNC_2(VAR_10, VAR_11);
        }

        VAR_7[VAR_8] = VAR_10;
    }
}
