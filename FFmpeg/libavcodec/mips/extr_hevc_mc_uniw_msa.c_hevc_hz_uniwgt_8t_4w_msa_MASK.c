
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int,int,int,int ,int,int,int,int *,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_14(uint8_t *VAR_1,
                                     int32_t VAR_2,
                                     uint8_t *VAR_3,
                                     int32_t VAR_4,
                                     const int8_t *VAR_5,
                                     int32_t VAR_6,
                                     int32_t VAR_7,
                                     int32_t VAR_8,
                                     int32_t VAR_9)
{
    uint32_t VAR_10;
    v16u8 VAR_11, VAR_12;
    v8i16 VAR_13, VAR_14, VAR_15, VAR_16;
    v16i8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    v16i8 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
    v16i8 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
    v8i16 VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;
    v8i16 VAR_50, VAR_51, VAR_52, VAR_53, VAR_54, VAR_55, VAR_56;
    v4i32 VAR_57, VAR_58;

    VAR_1 -= 3;
    VAR_7 = VAR_7 & 0x0000FFFF;

    VAR_57 = FUNC_12(VAR_7);
    VAR_58 = FUNC_12(VAR_9);

    VAR_7 *= 128;
    VAR_9 -= 6;

    VAR_54 = FUNC_11(VAR_7);
    VAR_55 = FUNC_11(VAR_8);
    VAR_56 = FUNC_11(VAR_9);

    VAR_54 = FUNC_13(VAR_54, VAR_56);
    VAR_55 = FUNC_10(VAR_55, VAR_54);

    VAR_45 = FUNC_4(VAR_5);
    FUNC_6(VAR_45, 0, 1, 2, 3, VAR_13, VAR_14, VAR_15, VAR_16);

    VAR_36 = FUNC_2(&VAR_0[16]);
    VAR_37 = VAR_36 + 2;
    VAR_38 = VAR_36 + 4;
    VAR_39 = VAR_36 + 6;

    for (VAR_10 = (VAR_6 >> 3); VAR_10--;) {
        FUNC_3(VAR_1, VAR_2, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);
        VAR_1 += (8 * VAR_2);
        FUNC_9(VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);

        FUNC_8(VAR_17, VAR_18, VAR_36, VAR_37, VAR_38, VAR_39,
                   VAR_25, VAR_26, VAR_27, VAR_28);
        FUNC_8(VAR_19, VAR_20, VAR_36, VAR_37, VAR_38, VAR_39,
                   VAR_29, VAR_30, VAR_31, VAR_32);
        FUNC_8(VAR_21, VAR_22, VAR_36, VAR_37, VAR_38, VAR_39,
                   VAR_33, VAR_34, VAR_35, VAR_40);
        FUNC_8(VAR_23, VAR_24, VAR_36, VAR_37, VAR_38, VAR_39,
                   VAR_41, VAR_42, VAR_43, VAR_44);
        VAR_46 = FUNC_0(VAR_25, VAR_26, VAR_27, VAR_28, VAR_13, VAR_14, VAR_15,
                                  VAR_16);
        VAR_47 = FUNC_0(VAR_29, VAR_30, VAR_31, VAR_32, VAR_13, VAR_14, VAR_15,
                                  VAR_16);
        VAR_48 = FUNC_0(VAR_33, VAR_34, VAR_35, VAR_40, VAR_13, VAR_14, VAR_15,
                                  VAR_16);
        VAR_49 = FUNC_0(VAR_41, VAR_42, VAR_43, VAR_44, VAR_13, VAR_14,
                                  VAR_15, VAR_16);

        FUNC_1(VAR_46, VAR_47, VAR_48, VAR_49, VAR_57,
                                       VAR_55, VAR_58, VAR_50, VAR_51, VAR_52,
                                       VAR_53);

        FUNC_5(VAR_51, VAR_50, VAR_53, VAR_52, VAR_11, VAR_12);
        FUNC_7(VAR_11, VAR_12, 0, 1, 2, 3, 0, 1, 2, 3, VAR_3, VAR_4);
        VAR_3 += (8 * VAR_4);
    }
}
