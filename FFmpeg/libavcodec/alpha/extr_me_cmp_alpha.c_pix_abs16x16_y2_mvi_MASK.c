
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 0;

    if ((size_t) VAR_2 & 0x7) {
        uint64_t VAR_6, VAR_7, VAR_8;
        VAR_6 = FUNC_4(VAR_2 + 8);
        VAR_7 = FUNC_2(FUNC_4(VAR_2), VAR_2) | FUNC_1(VAR_6, VAR_2);
        VAR_8 = FUNC_2(VAR_6, VAR_2) | FUNC_1(FUNC_4(VAR_2 + 16), VAR_2);

        do {
            uint64_t VAR_9, VAR_10, VAR_11, VAR_12;
            uint64_t VAR_13;

            VAR_9 = FUNC_3(VAR_1);
            VAR_10 = FUNC_3(VAR_1 + 8);
            VAR_2 += VAR_3;
            VAR_13 = FUNC_4(VAR_2 + 8);
            VAR_11 = FUNC_2(FUNC_4(VAR_2), VAR_2) | FUNC_1(VAR_13, VAR_2);
            VAR_12 = FUNC_2(VAR_13, VAR_2) | FUNC_1(FUNC_4(VAR_2 + 16), VAR_2);

            VAR_5 += FUNC_5(VAR_9, FUNC_0(VAR_7, VAR_11))
                    + FUNC_5(VAR_10, FUNC_0(VAR_8, VAR_12));

            VAR_1 += VAR_3;
            VAR_7 = VAR_11;
            VAR_8 = VAR_12;

        } while (--VAR_4);
    } else {
        uint64_t VAR_14, VAR_15;
        VAR_14 = FUNC_3(VAR_2);
        VAR_15 = FUNC_3(VAR_2 + 8);
        do {
            uint64_t VAR_16, VAR_17, VAR_18, VAR_19;

            VAR_16 = FUNC_3(VAR_1);
            VAR_17 = FUNC_3(VAR_1 + 8);
            VAR_2 += VAR_3;
            VAR_18 = FUNC_3(VAR_2);
            VAR_19 = FUNC_3(VAR_2 + 8);

            VAR_5 += FUNC_5(VAR_16, FUNC_0(VAR_14, VAR_18))
                    + FUNC_5(VAR_17, FUNC_0(VAR_15, VAR_19));

            VAR_1 += VAR_3;
            VAR_14 = VAR_18;
            VAR_15 = VAR_19;
        } while (--VAR_4);
    }
    return VAR_5;
}
