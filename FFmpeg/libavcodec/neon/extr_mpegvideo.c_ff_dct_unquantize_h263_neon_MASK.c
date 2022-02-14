
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16x8_t ;
typedef int uint16x4_t ;
typedef int int16x8_t ;
typedef int int16x4_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int ) ;

__attribute__((used)) static void inline FUNC_22(int VAR_0, int VAR_1, int VAR_2,
                                               int16_t *VAR_3)
{
    int16x8_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    int16x8_t VAR_11, VAR_12, VAR_13;
    int16x4_t VAR_14, VAR_15, VAR_16, VAR_17;
    uint16x8_t VAR_18, VAR_19;
    uint16x4_t VAR_20;

    VAR_17 = FUNC_8(0);
    VAR_13 = FUNC_9(0);

    VAR_12 = FUNC_9(VAR_0 << 1);
    VAR_11 = FUNC_9(VAR_1);
    VAR_10 = FUNC_15(VAR_11);

    if (VAR_2 > 4) {
        for (; VAR_2 > 8; VAR_2 -= 16, VAR_3 += 16) {
            VAR_4 = FUNC_12(VAR_3);
            VAR_6 = FUNC_18(FUNC_7(VAR_4, VAR_13));
            VAR_7 = FUNC_12(VAR_3 + 8);
            VAR_18 = FUNC_5(VAR_4, VAR_13);
            VAR_5 = FUNC_14(VAR_4, VAR_12);
            VAR_9 = FUNC_18(FUNC_7(VAR_7, VAR_13));
            VAR_8 = FUNC_14(VAR_7, VAR_12);
            VAR_6 = FUNC_3(FUNC_19(VAR_6), VAR_10, VAR_11);
            VAR_9 = FUNC_3(FUNC_19(VAR_9), VAR_10, VAR_11);
            VAR_5 = FUNC_1(VAR_5, VAR_6);
            VAR_19 = FUNC_5(VAR_7, VAR_13);
            VAR_8 = FUNC_1(VAR_8, VAR_9);
            VAR_4 = FUNC_3(VAR_18, VAR_4, VAR_5);
            VAR_7 = FUNC_3(VAR_19, VAR_7, VAR_8);
            FUNC_21(VAR_3, VAR_4);
            FUNC_21(VAR_3 + 8, VAR_7);
        }
    }
    if (VAR_2 <= 0)
        return;

    VAR_14 = FUNC_11(VAR_3);
    VAR_16 = FUNC_16(FUNC_6(VAR_14, VAR_17));
    VAR_20 = FUNC_4(VAR_14, VAR_17);
    VAR_15 = FUNC_13(VAR_14, FUNC_10(VAR_12));
    VAR_16 = FUNC_2(FUNC_17(VAR_16),
                     FUNC_10(VAR_10), FUNC_10(VAR_11));
    VAR_15 = FUNC_0(VAR_15, VAR_16);
    VAR_14 = FUNC_2(VAR_20, VAR_14, VAR_15);
    FUNC_20(VAR_3, VAR_14);
}
