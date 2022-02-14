
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


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int,int ,int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_0, int32_t VAR_1,
                                 uint8_t *VAR_2, int32_t VAR_3,
                                 const int8_t *VAR_4, int32_t VAR_5)
{
    uint32_t VAR_6;
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    v16i8 VAR_17, VAR_18, VAR_19, VAR_20;
    v16i8 VAR_21, VAR_22, VAR_23, VAR_24;
    v8i16 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    v16i8 VAR_33, VAR_34, VAR_35, VAR_36;
    v16i8 VAR_37, VAR_38, VAR_39, VAR_40;
    v8i16 VAR_41;
    v16i8 VAR_42, VAR_43;
    v16u8 VAR_44;

    VAR_0 -= VAR_1;

    VAR_41 = FUNC_5(VAR_4);
    FUNC_8(VAR_41, 0, 1, VAR_42, VAR_43);


    FUNC_4(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9);
    FUNC_12(VAR_7, VAR_8, VAR_9);

    FUNC_2(VAR_8, VAR_7, VAR_9, VAR_8, VAR_17, VAR_21);
    FUNC_1(VAR_8, VAR_7, VAR_9, VAR_8, VAR_33, VAR_37);


    FUNC_4(VAR_0 + 16, VAR_1, VAR_12, VAR_13, VAR_14);
    VAR_0 += (3 * VAR_1);

    FUNC_12(VAR_12, VAR_13, VAR_14);
    FUNC_2(VAR_13, VAR_12, VAR_14, VAR_13, VAR_19, VAR_23);
    FUNC_1(VAR_13, VAR_12, VAR_14, VAR_13, VAR_35, VAR_39);

    for (VAR_6 = (VAR_5 >> 1); VAR_6--;) {

        FUNC_3(VAR_0, VAR_1, VAR_10, VAR_11);
        FUNC_11(VAR_10, VAR_11);
        FUNC_2(VAR_10, VAR_9, VAR_11, VAR_10, VAR_18, VAR_22);
        FUNC_1(VAR_10, VAR_9, VAR_11, VAR_10, VAR_34, VAR_38);


        VAR_25 = FUNC_0(VAR_17, VAR_18, VAR_42, VAR_43);
        VAR_29 = FUNC_0(VAR_33, VAR_34, VAR_42, VAR_43);
        VAR_26 = FUNC_0(VAR_21, VAR_22, VAR_42, VAR_43);
        VAR_30 = FUNC_0(VAR_37, VAR_38, VAR_42, VAR_43);


        FUNC_9(VAR_25, VAR_26, VAR_29, VAR_30, 6);
        FUNC_7(VAR_25, VAR_26, VAR_29, VAR_30, 7);
        VAR_44 = FUNC_6(VAR_25, VAR_29);
        FUNC_10(VAR_44, VAR_2);
        VAR_44 = FUNC_6(VAR_26, VAR_30);
        FUNC_10(VAR_44, VAR_2 + VAR_3);

        VAR_17 = VAR_18;
        VAR_21 = VAR_22;
        VAR_33 = VAR_34;
        VAR_37 = VAR_38;
        VAR_9 = VAR_11;


        FUNC_3(VAR_0 + 16, VAR_1, VAR_15, VAR_16);
        VAR_0 += (2 * VAR_1);
        FUNC_11(VAR_15, VAR_16);
        FUNC_2(VAR_15, VAR_14, VAR_16, VAR_15, VAR_20, VAR_24);
        FUNC_1(VAR_15, VAR_14, VAR_16, VAR_15, VAR_36, VAR_40);


        VAR_27 = FUNC_0(VAR_19, VAR_20, VAR_42, VAR_43);
        VAR_31 = FUNC_0(VAR_35, VAR_36, VAR_42, VAR_43);
        VAR_28 = FUNC_0(VAR_23, VAR_24, VAR_42, VAR_43);
        VAR_32 = FUNC_0(VAR_39, VAR_40, VAR_42, VAR_43);


        FUNC_9(VAR_27, VAR_28, VAR_31, VAR_32, 6);
        FUNC_7(VAR_27, VAR_28, VAR_31, VAR_32, 7);
        VAR_44 = FUNC_6(VAR_27, VAR_31);
        FUNC_10(VAR_44, VAR_2 + 16);
        VAR_44 = FUNC_6(VAR_28, VAR_32);
        FUNC_10(VAR_44, VAR_2 + 16 + VAR_3);

        VAR_2 += 2 * VAR_3;

        VAR_19 = VAR_20;
        VAR_23 = VAR_24;
        VAR_35 = VAR_36;
        VAR_39 = VAR_40;
        VAR_14 = VAR_16;
    }
}
