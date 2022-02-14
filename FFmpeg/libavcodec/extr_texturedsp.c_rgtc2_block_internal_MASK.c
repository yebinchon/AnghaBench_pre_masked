
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int,int const*,int,int ,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(uint8_t *VAR_0, ptrdiff_t VAR_1,
                                        const uint8_t *VAR_2, int VAR_3)
{

    uint8_t VAR_4[4 * 4 * 4];
    uint8_t VAR_5[4 * 4 * 4];
    int VAR_6, VAR_7;


    FUNC_1(VAR_4, 16, VAR_2, VAR_3, 0, 0, 4);
    FUNC_1(VAR_5, 16, VAR_2 + 8, VAR_3, 0, 0, 4);


    for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
        for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
            uint8_t *VAR_8 = VAR_0 + VAR_6 * 4 + VAR_7 * VAR_1;
            int VAR_9 = VAR_4[VAR_6 * 4 + VAR_7 * 16];
            int VAR_10 = VAR_5[VAR_6 * 4 + VAR_7 * 16];
            int VAR_11 = 127;

            int VAR_12 = (255 * 255 - VAR_9 * VAR_9 - VAR_10 * VAR_10) / 2;
            if (VAR_12 > 0)
                VAR_11 = FUNC_0(FUNC_2(VAR_12));

            VAR_8[0] = VAR_9;
            VAR_8[1] = VAR_10;
            VAR_8[2] = VAR_11;
            VAR_8[3] = 255;
        }
    }
}
