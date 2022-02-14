
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*,int,int ,int ,int ,int ) ;
 int FUNC_4 (int const*,int,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_11 (scalar_t__,int ,int,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,int) ;
 int FUNC_13 (scalar_t__,int ,int,int,int,int *,int) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int ,int ,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_18(const uint8_t *VAR_1, int32_t VAR_2,
                                     uint8_t *VAR_3, int32_t VAR_4,
                                     const int8_t *VAR_5,
                                     const int8_t *VAR_6,
                                     int32_t VAR_7)
{
    uint32_t VAR_8;
    v16i8 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v16i8 VAR_20, VAR_21, VAR_22, VAR_23;
    v16u8 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    v8i16 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
    v8i16 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
    v8i16 VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;

    VAR_24 = FUNC_6(&VAR_0[16]);
    VAR_1 -= (3 + 3 * VAR_2);


    VAR_46 = FUNC_5(VAR_5);
    FUNC_10(VAR_46, 0, 1, 2, 3, VAR_20, VAR_21, VAR_22, VAR_23);

    VAR_25 = VAR_24 + 2;
    VAR_26 = VAR_24 + 4;
    VAR_27 = VAR_24 + 6;

    FUNC_4(VAR_1, VAR_2, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
    FUNC_15(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
    VAR_1 += (7 * VAR_2);

    VAR_29 = FUNC_1(VAR_9, VAR_10, VAR_24, VAR_25, VAR_26, VAR_27, VAR_20,
                              VAR_21, VAR_22, VAR_23);
    VAR_31 = FUNC_1(VAR_11, VAR_12, VAR_24, VAR_25, VAR_26, VAR_27, VAR_20,
                              VAR_21, VAR_22, VAR_23);
    VAR_33 = FUNC_1(VAR_13, VAR_14, VAR_24, VAR_25, VAR_26, VAR_27, VAR_20,
                              VAR_21, VAR_22, VAR_23);
    VAR_34 = FUNC_1(VAR_14, VAR_15, VAR_24, VAR_25, VAR_26, VAR_27, VAR_20,
                              VAR_21, VAR_22, VAR_23);
    FUNC_9(VAR_31, VAR_29, VAR_33, VAR_31, 8, VAR_30, VAR_32);

    VAR_46 = FUNC_5(VAR_6);
    FUNC_11(VAR_46, 0, 1, 2, 3, VAR_47, VAR_48, VAR_49, VAR_50);

    FUNC_2(VAR_29, VAR_30, VAR_31, VAR_32, VAR_41, VAR_42);
    VAR_43 = (v8i16) FUNC_16((v16i8) VAR_34, (v16i8) VAR_33);

    for (VAR_8 = (VAR_7 >> 2); VAR_8--;) {
        FUNC_3(VAR_1, VAR_2, VAR_16, VAR_17, VAR_18, VAR_19);
        FUNC_14(VAR_16, VAR_17, VAR_18, VAR_19);
        VAR_1 += (4 * VAR_2);

        VAR_36 = FUNC_1(VAR_16, VAR_17, VAR_24, VAR_25, VAR_26, VAR_27,
                                  VAR_20, VAR_21, VAR_22, VAR_23);
        VAR_35 = (v8i16) FUNC_17((v16i8) VAR_36, (v16i8) VAR_34, 8);
        VAR_44 = (v8i16) FUNC_16((v16i8) VAR_36, (v16i8) VAR_35);
        VAR_39 = FUNC_0(VAR_41, VAR_42, VAR_43, VAR_44, VAR_47, VAR_48,
                                   VAR_49, VAR_50);

        VAR_38 = FUNC_1(VAR_18, VAR_19, VAR_24, VAR_25, VAR_26, VAR_27,
                                  VAR_20, VAR_21, VAR_22, VAR_23);
        VAR_37 = (v8i16) FUNC_17((v16i8) VAR_38, (v16i8) VAR_36, 8);
        VAR_45 = (v8i16) FUNC_16((v16i8) VAR_38, (v16i8) VAR_37);
        VAR_40 = FUNC_0(VAR_42, VAR_43, VAR_44, VAR_45, VAR_47, VAR_48,
                                   VAR_49, VAR_50);
        FUNC_12(VAR_39, VAR_40, 7);
        FUNC_8(VAR_39, VAR_40, 7);
        VAR_28 = FUNC_7(VAR_39, VAR_40);
        FUNC_13(VAR_28, 0, 1, 2, 3, VAR_3, VAR_4);
        VAR_3 += (4 * VAR_4);

        VAR_34 = VAR_38;
        VAR_41 = VAR_43;
        VAR_42 = VAR_44;
        VAR_43 = VAR_45;
    }
}
