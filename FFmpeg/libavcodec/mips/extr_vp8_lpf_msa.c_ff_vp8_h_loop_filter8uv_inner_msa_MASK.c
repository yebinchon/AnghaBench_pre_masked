
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4i32 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ,int,int,int,int ,int,int,int,int *,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int ) ;

void FUNC_9(uint8_t *VAR_0, uint8_t *VAR_1,
                                       ptrdiff_t VAR_2, int VAR_3,
                                       int VAR_4, int VAR_5)
{
    v16u8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v16u8 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    v16u8 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
    v4i32 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;

    VAR_17 = (v16u8) FUNC_7(VAR_5);
    VAR_18 = (v16u8) FUNC_7(VAR_4);
    VAR_19 = (v16u8) FUNC_7(VAR_3);

    FUNC_2(VAR_0 - 4, VAR_2, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27);
    FUNC_2(VAR_1 - 4, VAR_2,
           VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35);
    FUNC_5(VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27,
                        VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35,
                        VAR_6, VAR_7, VAR_8, VAR_9, VAR_13, VAR_12, VAR_11, VAR_10);

    FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_13, VAR_12, VAR_11, VAR_10, VAR_18, VAR_19, VAR_17,
                 VAR_15, VAR_14, VAR_16);
    FUNC_6(VAR_8, VAR_9, VAR_13, VAR_12, VAR_14, VAR_15);
    FUNC_1(VAR_9, VAR_8, VAR_12, VAR_13, VAR_36, VAR_37);
    FUNC_0(VAR_37, VAR_36, VAR_38, VAR_39);
    VAR_36 = (v4i32) FUNC_8((v16i8) VAR_9, (v16i8) VAR_8);
    VAR_37 = (v4i32) FUNC_8((v16i8) VAR_12, (v16i8) VAR_13);
    FUNC_0(VAR_37, VAR_36, VAR_40, VAR_41);

    FUNC_4(VAR_38, VAR_39, 0, 1, 2, 3, 0, 1, 2, 3, VAR_0 - 2, VAR_2);
    FUNC_4(VAR_40, VAR_41, 0, 1, 2, 3, 0, 1, 2, 3, VAR_1 - 2, VAR_2);
}
