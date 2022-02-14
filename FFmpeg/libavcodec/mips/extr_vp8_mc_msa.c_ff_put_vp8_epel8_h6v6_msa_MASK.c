
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int ,int,int,int ,int ,int ) ;
 int FUNC_10 (scalar_t__,int ,int,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_12 (scalar_t__,scalar_t__,int ,int,int ,int,int *,int) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int * VAR_0 ;
 int ** VAR_1 ;

void FUNC_16(uint8_t *VAR_2, ptrdiff_t VAR_3,
                               uint8_t *VAR_4, ptrdiff_t VAR_5,
                               int VAR_6, int VAR_7, int VAR_8)
{
    uint32_t VAR_9;
    const int8_t *VAR_10 = VAR_1[VAR_7 - 1];
    const int8_t *VAR_11 = VAR_1[VAR_8 - 1];
    v16i8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16i8 VAR_21, VAR_22, VAR_23;
    v16u8 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    v8i16 VAR_29, VAR_30, VAR_31, VAR_32;
    v8i16 VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v8i16 VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;
    v8i16 VAR_50, VAR_51, VAR_52, VAR_53;

    VAR_24 = FUNC_6(&VAR_0[0]);
    VAR_4 -= (2 + 2 * VAR_5);


    VAR_29 = FUNC_5(VAR_10);
    FUNC_9(VAR_29, 0, 1, 2, VAR_21, VAR_22, VAR_23);

    VAR_25 = VAR_24 + 2;
    VAR_26 = VAR_24 + 4;

    FUNC_4(VAR_4, VAR_5, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
    VAR_4 += (5 * VAR_5);

    FUNC_14(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
    VAR_33 = FUNC_1(VAR_12, VAR_12, VAR_24, VAR_25, VAR_26, VAR_21,
                              VAR_22, VAR_23);
    VAR_34 = FUNC_1(VAR_13, VAR_13, VAR_24, VAR_25, VAR_26, VAR_21,
                              VAR_22, VAR_23);
    VAR_35 = FUNC_1(VAR_14, VAR_14, VAR_24, VAR_25, VAR_26, VAR_21,
                              VAR_22, VAR_23);
    VAR_36 = FUNC_1(VAR_15, VAR_15, VAR_24, VAR_25, VAR_26, VAR_21,
                              VAR_22, VAR_23);
    VAR_37 = FUNC_1(VAR_16, VAR_16, VAR_24, VAR_25, VAR_26, VAR_21,
                              VAR_22, VAR_23);

    VAR_29 = FUNC_5(VAR_11);
    FUNC_10(VAR_29, 0, 1, 2, VAR_30, VAR_31, VAR_32);

    FUNC_2(VAR_33, VAR_34, VAR_35, VAR_36, VAR_42, VAR_43);
    FUNC_2(VAR_34, VAR_35, VAR_36, VAR_37, VAR_45, VAR_46);

    for (VAR_9 = (VAR_6 >> 2); VAR_9--;) {
        FUNC_3(VAR_4, VAR_5, VAR_17, VAR_18, VAR_19, VAR_20);
        VAR_4 += (4 * VAR_5);

        FUNC_13(VAR_17, VAR_18, VAR_19, VAR_20);
        VAR_38 = FUNC_1(VAR_17, VAR_17, VAR_24, VAR_25, VAR_26, VAR_21,
                                  VAR_22, VAR_23);
        VAR_44 = (v8i16) FUNC_15((v16i8) VAR_38, (v16i8) VAR_37);
        VAR_50 = FUNC_0(VAR_42, VAR_43, VAR_44, VAR_30, VAR_31, VAR_32);

        VAR_39 = FUNC_1(VAR_18, VAR_18, VAR_24, VAR_25, VAR_26, VAR_21,
                                  VAR_22, VAR_23);
        VAR_47 = (v8i16) FUNC_15((v16i8) VAR_39, (v16i8) VAR_38);
        VAR_51 = FUNC_0(VAR_45, VAR_46, VAR_47, VAR_30, VAR_31, VAR_32);

        VAR_40 = FUNC_1(VAR_19, VAR_19, VAR_24, VAR_25, VAR_26, VAR_21,
                                  VAR_22, VAR_23);
        VAR_49 = (v8i16) FUNC_15((v16i8) VAR_40, (v16i8) VAR_39);
        VAR_52 = FUNC_0(VAR_43, VAR_44, VAR_49, VAR_30, VAR_31, VAR_32);

        VAR_41 = FUNC_1(VAR_20, VAR_20, VAR_24, VAR_25, VAR_26, VAR_21,
                                  VAR_22, VAR_23);
        VAR_48 = (v8i16) FUNC_15((v16i8) VAR_41, (v16i8) VAR_40);
        VAR_53 = FUNC_0(VAR_46, VAR_47, VAR_48, VAR_30, VAR_31, VAR_32);

        FUNC_11(VAR_50, VAR_51, VAR_52, VAR_53, 7);
        FUNC_8(VAR_50, VAR_51, VAR_52, VAR_53, 7);
        VAR_27 = FUNC_7(VAR_50, VAR_51);
        VAR_28 = FUNC_7(VAR_52, VAR_53);
        FUNC_12(VAR_27, VAR_28, 0, 1, 0, 1, VAR_2, VAR_3);
        VAR_2 += (4 * VAR_3);

        VAR_37 = VAR_41;
        VAR_42 = VAR_44;
        VAR_43 = VAR_49;
        VAR_45 = VAR_47;
        VAR_46 = VAR_48;
    }
}
