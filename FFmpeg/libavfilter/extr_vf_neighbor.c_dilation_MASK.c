
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, const uint8_t *VAR_1, int VAR_2,
                     int VAR_3, const uint8_t *VAR_4[], int VAR_5,
                     int VAR_6)
{
    int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        int VAR_9 = VAR_1[VAR_7];
        int VAR_10 = FUNC_1(VAR_9 + VAR_3, 255);

        for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
            if (VAR_5 & (1 << VAR_8)) {
                VAR_9 = FUNC_0(VAR_9, *(VAR_4[VAR_8] + VAR_7));
            }
            VAR_9 = FUNC_1(VAR_9, VAR_10);
        }

        VAR_0[VAR_7] = VAR_9;
    }
}
