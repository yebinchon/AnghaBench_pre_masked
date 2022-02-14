
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetByteContext ;


 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(uint8_t *VAR_0, int VAR_1,
                       const uint8_t *VAR_2, int VAR_3)
{
    uint8_t VAR_4;
    int VAR_5;
    uint8_t *VAR_6 = VAR_0;
    uint8_t *VAR_7 = VAR_0 + VAR_1;
    GetByteContext VAR_8;

    FUNC_5(&VAR_8, VAR_2, VAR_3);
    while (VAR_0 < VAR_7 && FUNC_4(&VAR_8)) {
        VAR_4 = FUNC_3(&VAR_8);

        if (VAR_4 < 0xe0) {
            int VAR_9, VAR_10;
            if ((VAR_4 & 0x80) == 0) {
                VAR_5 = VAR_4 & 3;

                VAR_10 = ((VAR_4 & 0x60) << 3) + FUNC_3(&VAR_8) + 1;
                VAR_9 = ((VAR_4 & 0x1c) >> 2) + 3;
            } else if ((VAR_4 & 0x40) == 0) {
                VAR_5 = FUNC_6(&VAR_8) >> 6;

                VAR_10 = (FUNC_1(&VAR_8) & 0x3fff) + 1;
                VAR_9 = (VAR_4 & 0x3f) + 4;
            } else {
                VAR_5 = VAR_4 & 3;

                VAR_10 = ((VAR_4 & 0x10) << 12) + FUNC_1(&VAR_8) + 1;
                VAR_9 = ((VAR_4 & 0x0c) << 6) + FUNC_3(&VAR_8) + 5;
            }

            if (VAR_7 - VAR_0 < VAR_5 + VAR_9 ||
                VAR_0 + VAR_5 - VAR_6 < VAR_10 ||
                FUNC_4(&VAR_8) < VAR_5)
                return;
            FUNC_2(&VAR_8, VAR_0, VAR_5);
            VAR_0 += VAR_5;
            FUNC_0(VAR_0, VAR_10, VAR_9);
            VAR_0 += VAR_9;
        } else {
            int VAR_11 = VAR_4 >= 0xfc;
            VAR_5 = VAR_11 ? VAR_4 & 3 : ((VAR_4 & 0x1f) << 2) + 4;

            if (VAR_7 - VAR_0 < VAR_5 || FUNC_4(&VAR_8) < VAR_5)
                return;
            FUNC_2(&VAR_8, VAR_0, VAR_5);
            VAR_0 += VAR_5;
            if (VAR_11)
                return;
        }
    }
}
