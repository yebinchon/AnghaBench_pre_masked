
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int v8u16 ;
typedef scalar_t__ v8i16 ;
typedef scalar_t__ v16u8 ;
struct TYPE_14__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__,scalar_t__,TYPE_1__,scalar_t__,TYPE_1__,scalar_t__,TYPE_1__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__,scalar_t__,TYPE_1__,scalar_t__,TYPE_1__,scalar_t__,TYPE_1__,scalar_t__,TYPE_1__,scalar_t__,TYPE_1__,scalar_t__,TYPE_1__,scalar_t__,TYPE_1__,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,int *) ;
 int FUNC_10 (scalar_t__,scalar_t__,int *,int) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int) ;
 int FUNC_12 (scalar_t__,scalar_t__,int ,int,int,int,int ,int,int,int,int *,int) ;
 int FUNC_13 (int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (int) ;
 scalar_t__ FUNC_18 (scalar_t__) ;

__attribute__((used)) static int32_t FUNC_19(uint8_t *VAR_0, uint8_t *VAR_1,
                                        uint8_t *VAR_2, ptrdiff_t VAR_3,
                                        int32_t VAR_4,
                                        int32_t VAR_5,
                                        int32_t VAR_6)
{
    v16u8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v16u8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16u8 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    v8u16 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
    v8u16 VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;
    v8i16 VAR_43, VAR_44, VAR_45;
    v8i16 VAR_46, VAR_47, VAR_48;
    v8i16 VAR_49, VAR_50, VAR_51;
    v8i16 VAR_52, VAR_53, VAR_54;
    v16i8 VAR_55 = { 0 };
    v8i16 VAR_56, VAR_57, VAR_58, VAR_59, VAR_60, VAR_61;


    FUNC_5(VAR_0 - (4 * 16), 16, VAR_7, VAR_8, VAR_9, VAR_10, VAR_14, VAR_13, VAR_12, VAR_11);

    VAR_24 = (v16u8) FUNC_17(VAR_6);
    VAR_25 = (v16u8) FUNC_17(VAR_4);
    VAR_26 = (v16u8) FUNC_17(VAR_5);


    FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, VAR_14, VAR_13, VAR_12, VAR_11, VAR_26, VAR_25, VAR_24,
                 VAR_23, VAR_22, VAR_21);

    FUNC_14(VAR_7, VAR_8, VAR_10, VAR_14, VAR_12, VAR_11, VAR_21);

    FUNC_15(VAR_9, VAR_10, VAR_14, VAR_13, VAR_22, VAR_23, VAR_16, VAR_17, VAR_18,
                       VAR_19);


    if (FUNC_18(VAR_21)) {
        FUNC_3(VAR_17, VAR_16, VAR_19, VAR_18, VAR_56, VAR_57);
        FUNC_2(VAR_57, VAR_56, VAR_58, VAR_59);
        FUNC_0(VAR_17, VAR_16, VAR_19, VAR_18, VAR_56, VAR_57);
        FUNC_2(VAR_57, VAR_56, VAR_60, VAR_61);

        VAR_2 -= 2;
        FUNC_12(VAR_58, VAR_59, 0, 1, 2, 3, 0, 1, 2, 3, VAR_2, VAR_3);
        FUNC_12(VAR_60, VAR_61, 0, 1, 2, 3, 0, 1, 2, 3, VAR_2 + 8 * VAR_3, VAR_3);

        return 1;
    } else {
        FUNC_4(VAR_55, VAR_7, VAR_55, VAR_8, VAR_55, VAR_9, VAR_55, VAR_10, VAR_55, VAR_14, VAR_55, VAR_13,
                   VAR_55, VAR_12, VAR_55, VAR_11, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33,
                   VAR_34);
        FUNC_13(VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_43,
                    VAR_44, VAR_45, VAR_46, VAR_47, VAR_48);
        FUNC_1(VAR_55, VAR_7, VAR_55, VAR_8, VAR_55, VAR_9, VAR_55, VAR_10, VAR_35, VAR_36, VAR_37,
                   VAR_38);
        FUNC_1(VAR_55, VAR_14, VAR_55, VAR_13, VAR_55, VAR_12, VAR_55, VAR_11, VAR_39, VAR_40, VAR_41,
                   VAR_42);
        FUNC_13(VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_49,
                    VAR_50, VAR_51, VAR_52, VAR_53, VAR_54);


        FUNC_8(VAR_49, VAR_43, VAR_50, VAR_44, VAR_51,
                    VAR_45, VAR_52, VAR_46, VAR_43, VAR_44,
                    VAR_45, VAR_46);
        FUNC_7(VAR_53, VAR_47, VAR_54, VAR_48, VAR_47,
                    VAR_48);


        VAR_15 = FUNC_16(VAR_8, (v16u8) VAR_43, VAR_21);
        VAR_16 = FUNC_16(VAR_16, (v16u8) VAR_44, VAR_21);
        VAR_17 = FUNC_16(VAR_17, (v16u8) VAR_45, VAR_21);
        VAR_18 = FUNC_16(VAR_18, (v16u8) VAR_46, VAR_21);
        VAR_19 = FUNC_16(VAR_19, (v16u8) VAR_47, VAR_21);
        VAR_20 = FUNC_16(VAR_12, (v16u8) VAR_48, VAR_21);

        FUNC_11(VAR_15, VAR_16, VAR_17, VAR_18, VAR_1, 16);
        VAR_1 += (4 * 16);
        FUNC_10(VAR_19, VAR_20, VAR_1, 16);
        VAR_1 += (2 * 16);
        FUNC_9(VAR_21, VAR_1);

        return 0;
    }
}
