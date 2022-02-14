
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
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int,int ,int ,int ) ;
 int FUNC_6 (int *,int,int ,int ,int ,int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int *,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static void FUNC_17(uint8_t *VAR_0,
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
    v16i8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v16i8 VAR_20, VAR_21, VAR_22, VAR_23;
    v16i8 VAR_24, VAR_25, VAR_26, VAR_27;
    v16i8 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    v8i16 VAR_33, VAR_34;
    v8i16 VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;
    v8i16 VAR_43, VAR_44, VAR_45, VAR_46;
    v4i32 VAR_47, VAR_48;

    VAR_0 -= VAR_1;

    VAR_6 = VAR_6 & 0x0000FFFF;

    VAR_47 = FUNC_15(VAR_6);
    VAR_48 = FUNC_15(VAR_8);

    VAR_6 *= 128;
    VAR_8 -= 6;

    VAR_44 = FUNC_14(VAR_6);
    VAR_45 = FUNC_14(VAR_7);
    VAR_46 = FUNC_14(VAR_8);

    VAR_44 = FUNC_16(VAR_44, VAR_46);
    VAR_45 = FUNC_13(VAR_45, VAR_44);

    VAR_43 = FUNC_7(VAR_4);
    FUNC_9(VAR_43, 0, 1, VAR_33, VAR_34);

    FUNC_5(VAR_0, VAR_1, VAR_14, VAR_15, VAR_16);
    VAR_0 += (3 * VAR_1);
    FUNC_11(VAR_14, VAR_15, VAR_16);
    FUNC_4(VAR_15, VAR_14, VAR_16, VAR_15, VAR_20, VAR_22);
    FUNC_2(VAR_15, VAR_14, VAR_16, VAR_15, VAR_24, VAR_26);

    for (VAR_9 = (VAR_5 >> 2); VAR_9--;) {
        FUNC_6(VAR_0, VAR_1, VAR_17, VAR_18, VAR_19, VAR_32);
        VAR_0 += (4 * VAR_1);
        FUNC_12(VAR_17, VAR_18, VAR_19, VAR_32);
        FUNC_3(VAR_17, VAR_16, VAR_21, VAR_25);
        FUNC_3(VAR_18, VAR_17, VAR_23, VAR_27);
        FUNC_3(VAR_19, VAR_18, VAR_28, VAR_29);
        FUNC_3(VAR_32, VAR_19, VAR_30, VAR_31);
        VAR_35 = FUNC_0(VAR_20, VAR_21, VAR_33, VAR_34);
        VAR_36 = FUNC_0(VAR_22, VAR_23, VAR_33, VAR_34);
        VAR_37 = FUNC_0(VAR_21, VAR_28, VAR_33, VAR_34);
        VAR_38 = FUNC_0(VAR_23, VAR_30, VAR_33, VAR_34);
        VAR_39 = FUNC_0(VAR_24, VAR_25, VAR_33, VAR_34);
        VAR_40 = FUNC_0(VAR_26, VAR_27, VAR_33, VAR_34);
        VAR_41 = FUNC_0(VAR_25, VAR_29, VAR_33, VAR_34);
        VAR_42 = FUNC_0(VAR_27, VAR_31, VAR_33, VAR_34);
        FUNC_1(VAR_35, VAR_36, VAR_37, VAR_38, VAR_47,
                                       VAR_45, VAR_48, VAR_35, VAR_36, VAR_37,
                                       VAR_38);
        FUNC_1(VAR_39, VAR_40, VAR_41, VAR_42, VAR_47,
                                       VAR_45, VAR_48, VAR_39, VAR_40, VAR_41,
                                       VAR_42);
        FUNC_8(VAR_39, VAR_35, VAR_40, VAR_36, VAR_41, VAR_37, VAR_42, VAR_38, VAR_10, VAR_11,
                    VAR_12, VAR_13);
        FUNC_10(VAR_10, VAR_11, VAR_12, VAR_13, VAR_2, VAR_3);
        VAR_2 += (4 * VAR_3);

        VAR_16 = VAR_32;
        VAR_20 = VAR_28;
        VAR_22 = VAR_30;
        VAR_24 = VAR_29;
        VAR_26 = VAR_31;
    }
}
