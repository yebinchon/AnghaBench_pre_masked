
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ,int ) ;
 int FUNC_4 (int *,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int,int ,int,int ,int,int ,int,int *,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void FUNC_15(uint8_t *VAR_0,
                                          int32_t VAR_1,
                                          uint8_t *VAR_2,
                                          int32_t VAR_3,
                                          const int8_t *VAR_4,
                                          int32_t VAR_5,
                                          int32_t VAR_6,
                                          int32_t VAR_7,
                                          int32_t VAR_8)
{
    int32_t VAR_9;
    v16u8 VAR_10, VAR_11, VAR_12, VAR_13;
    v16i8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    v16i8 VAR_25, VAR_26, VAR_27, VAR_28;
    v16i8 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
    v8i16 VAR_35, VAR_36;
    v8i16 VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
    v8i16 VAR_45, VAR_46, VAR_47, VAR_48;
    v4i32 VAR_49, VAR_50;

    VAR_0 -= VAR_1;

    VAR_6 = VAR_6 & 0x0000FFFF;

    VAR_49 = FUNC_13(VAR_6);
    VAR_50 = FUNC_13(VAR_8);

    VAR_6 *= 128;
    VAR_8 -= 6;

    VAR_46 = FUNC_12(VAR_6);
    VAR_47 = FUNC_12(VAR_7);
    VAR_48 = FUNC_12(VAR_8);

    VAR_46 = FUNC_14(VAR_46, VAR_48);
    VAR_47 = FUNC_11(VAR_47, VAR_46);

    VAR_45 = FUNC_5(VAR_4);
    FUNC_7(VAR_45, 0, 1, VAR_35, VAR_36);

    FUNC_3(VAR_0, VAR_1, VAR_14, VAR_15, VAR_16);
    VAR_0 += (3 * VAR_1);
    FUNC_9(VAR_14, VAR_15, VAR_16);
    FUNC_2(VAR_15, VAR_14, VAR_16, VAR_15, VAR_25, VAR_27);

    for (VAR_9 = (VAR_5 >> 3); VAR_9--;) {
        FUNC_4(VAR_0, VAR_1,
               VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);
        VAR_0 += (8 * VAR_1);
        FUNC_10(VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);
        FUNC_2(VAR_17, VAR_16, VAR_18, VAR_17, VAR_26, VAR_28);
        FUNC_2(VAR_19, VAR_18, VAR_20, VAR_19, VAR_29, VAR_30);
        FUNC_2(VAR_21, VAR_20, VAR_22, VAR_21, VAR_31, VAR_32);
        FUNC_2(VAR_23, VAR_22, VAR_24, VAR_23, VAR_33, VAR_34);
        VAR_37 = FUNC_0(VAR_25, VAR_26, VAR_35, VAR_36);
        VAR_38 = FUNC_0(VAR_27, VAR_28, VAR_35, VAR_36);
        VAR_39 = FUNC_0(VAR_26, VAR_29, VAR_35, VAR_36);
        VAR_40 = FUNC_0(VAR_28, VAR_30, VAR_35, VAR_36);
        VAR_41 = FUNC_0(VAR_29, VAR_31, VAR_35, VAR_36);
        VAR_42 = FUNC_0(VAR_30, VAR_32, VAR_35, VAR_36);
        VAR_43 = FUNC_0(VAR_31, VAR_33, VAR_35, VAR_36);
        VAR_44 = FUNC_0(VAR_32, VAR_34, VAR_35, VAR_36);
        FUNC_1(VAR_37, VAR_38, VAR_39, VAR_40, VAR_49,
                                       VAR_47, VAR_50, VAR_37, VAR_38, VAR_39,
                                       VAR_40);
        FUNC_1(VAR_41, VAR_42, VAR_43, VAR_44, VAR_49,
                                       VAR_47, VAR_50, VAR_41, VAR_42, VAR_43,
                                       VAR_44);
        FUNC_6(VAR_38, VAR_37, VAR_40, VAR_39, VAR_10, VAR_11);
        FUNC_6(VAR_42, VAR_41, VAR_44, VAR_43, VAR_12, VAR_13);
        FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13, 0, 1, 0, 1, 0, 1, 0, 1, VAR_2, VAR_3);
        VAR_2 += (8 * VAR_3);

        VAR_16 = VAR_24;
        VAR_25 = VAR_33;
        VAR_27 = VAR_34;
    }
}
