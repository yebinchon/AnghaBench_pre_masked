
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 0;

    uint64_t VAR_6, VAR_7;
    uint64_t VAR_8, VAR_9, VAR_10;

    VAR_6 = FUNC_1(VAR_1);
    VAR_7 = FUNC_1(VAR_1 + 8);

    if ((size_t) VAR_2 & 0x7) {
        VAR_8 = FUNC_3(VAR_2);
        VAR_9 = FUNC_3(VAR_2 + 8);
        VAR_10 = (uint64_t) VAR_2[16] << 56;
    } else {
        VAR_8 = FUNC_1(VAR_2);
        VAR_9 = FUNC_1(VAR_2 + 8);
        VAR_10 = FUNC_1(VAR_2 + 16) << 56;
    }

    do {
        uint64_t VAR_11, VAR_12;
        uint64_t VAR_13, VAR_14, VAR_15;

        VAR_1 += VAR_3;
        VAR_2 += VAR_3;

        VAR_11 = FUNC_1(VAR_1);
        VAR_12 = FUNC_1(VAR_1 + 8);

        if ((size_t) VAR_2 & 0x7) {
            VAR_13 = FUNC_3(VAR_2);
            VAR_14 = FUNC_3(VAR_2 + 8);
            VAR_15 = (uint64_t) VAR_2[16] << 56;
        } else {
            VAR_13 = FUNC_1(VAR_2);
            VAR_14 = FUNC_1(VAR_2 + 8);
            VAR_15 = FUNC_1(VAR_2 + 16) << 56;
        }

        VAR_5 += FUNC_2(VAR_6,
                       FUNC_0( VAR_8, ( VAR_8 >> 8) | ((uint64_t) VAR_9 << 56),
                            VAR_13, (VAR_13 >> 8) | ((uint64_t) VAR_14 << 56)))
                + FUNC_2(VAR_7,
                       FUNC_0( VAR_9, ( VAR_9 >> 8) | ((uint64_t) VAR_10),
                            VAR_14, (VAR_14 >> 8) | ((uint64_t) VAR_15)));

        VAR_6 = VAR_11;
        VAR_7 = VAR_12;
        VAR_8 = VAR_13;
        VAR_9 = VAR_14;
        VAR_10 = VAR_15;
    } while (--VAR_4);

    return VAR_5;
}
