
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_5(const uint8_t *VAR_1, const uint8_t *VAR_2,
                  uint8_t *VAR_3, int VAR_4, int VAR_5)
{
    uint8_t *VAR_6 = VAR_3 + VAR_4*VAR_5;
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    uint8_t *VAR_12 = VAR_3;

    if (VAR_1[0] & 0x01)
        VAR_1 += 5;
    else
        VAR_1 += 2;

    if (VAR_2 - VAR_1 < 3)
        return VAR_0;
    VAR_7 = FUNC_1(VAR_1);
    VAR_1 += 3;

    while (VAR_7 > 0 && VAR_1 < VAR_2) {


        VAR_8 = (VAR_1[0] & 3);
        if (VAR_1[0] & 0x80) {
            if (VAR_1[0] & 0x40 ) {
                if (VAR_1[0] & 0x20) {
                    if (VAR_1[0] < 0xFC)
                        VAR_8 = (((VAR_1[0] & 31) + 1) << 2);
                    VAR_1++;
                    VAR_9 = 0;
                } else {
                    VAR_10 = ((VAR_1[0] & 0x10) << 12) + FUNC_0(&VAR_1[1]) + 1;
                    VAR_9 = ((VAR_1[0] & 0xC) << 6) + VAR_1[3] + 5;
                    VAR_1 += 4;
                }
            } else {
                VAR_8 = ((VAR_1[1] & 0xC0) >> 6);
                VAR_10 = (FUNC_0(&VAR_1[1]) & 0x3FFF) + 1;
                VAR_9 = (VAR_1[0] & 0x3F) + 4;
                VAR_1 += 3;
            }
        } else {
            VAR_10 = ((VAR_1[0] & 0x60) << 3) + VAR_1[1] + 1;
            VAR_9 = ((VAR_1[0] & 0x1C) >> 2) + 3;
            VAR_1 += 2;
        }



        if (VAR_8 > VAR_2 - VAR_1)
            break;

        if (VAR_8 > 0) {
            VAR_7 -= VAR_8;
            VAR_11 = FUNC_2(VAR_8, VAR_6 - VAR_3);
            FUNC_4(VAR_3, VAR_1, VAR_11);
            VAR_3 += VAR_11;
            VAR_1 += VAR_11;
        }

        if (VAR_9 > 0) {
            if (VAR_3 - VAR_12 < VAR_10)
                return 0;
            VAR_7 -= VAR_9;
            VAR_11 = FUNC_2(VAR_9, VAR_6 - VAR_3);
            FUNC_3(VAR_3, VAR_10, VAR_11);
            VAR_3 += VAR_11;
        }
    }

    return 0;
}
