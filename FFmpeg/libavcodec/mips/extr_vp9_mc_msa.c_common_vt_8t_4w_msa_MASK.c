
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int const*,int,int ,int ,int ,int ) ;
 int FUNC_6 (int const*,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int,int,int,int *,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_15(const uint8_t *VAR_0, int32_t VAR_1,
                                uint8_t *VAR_2, int32_t VAR_3,
                                const int8_t *VAR_4, int32_t VAR_5)
{
    uint32_t VAR_6;
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    v16i8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    v16i8 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    v16i8 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
    v16u8 VAR_37;
    v8i16 VAR_38, VAR_39, VAR_40;

    VAR_0 -= (3 * VAR_1);

    VAR_38 = FUNC_7(VAR_4);
    FUNC_10(VAR_38, 0, 1, 2, 3, VAR_33, VAR_34, VAR_35, VAR_36);

    FUNC_6(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
    VAR_0 += (7 * VAR_1);

    FUNC_2(VAR_8, VAR_7, VAR_10, VAR_9, VAR_12, VAR_11, VAR_9, VAR_8, VAR_18, VAR_19,
               VAR_20, VAR_23);
    FUNC_1(VAR_11, VAR_10, VAR_13, VAR_12, VAR_24, VAR_25);
    FUNC_4(VAR_23, VAR_18, VAR_24, VAR_19, VAR_25, VAR_20, VAR_28,
               VAR_29, VAR_30);
    FUNC_14(VAR_28, VAR_29, VAR_30);

    for (VAR_6 = (VAR_5 >> 2); VAR_6--;) {
        FUNC_5(VAR_0, VAR_1, VAR_14, VAR_15, VAR_16, VAR_17);
        VAR_0 += (4 * VAR_1);

        FUNC_2(VAR_14, VAR_13, VAR_15, VAR_14, VAR_16, VAR_15, VAR_17, VAR_16, VAR_21,
                   VAR_26, VAR_22, VAR_27);
        FUNC_3(VAR_26, VAR_21, VAR_27, VAR_22, VAR_31, VAR_32);
        FUNC_13(VAR_31, VAR_32);
        VAR_39 = FUNC_0(VAR_28, VAR_29, VAR_30, VAR_31, VAR_33,
                                    VAR_34, VAR_35, VAR_36);
        VAR_40 = FUNC_0(VAR_29, VAR_30, VAR_31, VAR_32, VAR_33,
                                    VAR_34, VAR_35, VAR_36);
        FUNC_11(VAR_39, VAR_40, 7);
        FUNC_9(VAR_39, VAR_40, 7);
        VAR_37 = FUNC_8(VAR_39, VAR_40);
        FUNC_12(VAR_37, 0, 1, 2, 3, VAR_2, VAR_3);
        VAR_2 += (4 * VAR_3);

        VAR_28 = VAR_30;
        VAR_29 = VAR_31;
        VAR_30 = VAR_32;
        VAR_13 = VAR_17;
    }
}
