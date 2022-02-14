
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int ,int ,int) ;
 int FUNC_10 (int ,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int ,int ,int) ;
 int FUNC_13 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_14 (int ,int ,int,int,int,int *,int) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_17(uint8_t *VAR_1, int32_t VAR_2,
                                 uint8_t *VAR_3, int32_t VAR_4,
                                 const int8_t *VAR_5, int32_t VAR_6)
{
    uint32_t VAR_7;
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    v16i8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    v16i8 VAR_28, VAR_29;
    v16u8 VAR_30, VAR_31;
    v8i16 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;

    VAR_14 = FUNC_4(&VAR_0[0]);
    VAR_16 = FUNC_4(&VAR_0[32]);

    VAR_1 -= 1;


    VAR_32 = FUNC_6(VAR_5);
    FUNC_10(VAR_32, 0, 1, VAR_12, VAR_13);

    VAR_15 = VAR_14 + 2;
    VAR_17 = VAR_16 + 2;

    for (VAR_7 = 4; VAR_7--;) {
        FUNC_5(VAR_1, VAR_2, VAR_8, VAR_9, VAR_10, VAR_11);
        VAR_1 += (4 * VAR_2);

        FUNC_16(VAR_8, VAR_9, VAR_10, VAR_11);
        FUNC_15(VAR_8, VAR_9, VAR_10, VAR_11, VAR_16, VAR_16, VAR_18, VAR_19);
        FUNC_0(VAR_18, VAR_19, VAR_12, VAR_12, VAR_33, VAR_34);
        FUNC_15(VAR_8, VAR_9, VAR_10, VAR_11, VAR_17, VAR_17, VAR_20, VAR_21);
        FUNC_2(VAR_20, VAR_21, VAR_13, VAR_13, VAR_33, VAR_34);
        FUNC_11(VAR_33, VAR_34, 6);
        FUNC_8(VAR_33, VAR_34, 7);
        VAR_30 = FUNC_7(VAR_33, VAR_34);
        FUNC_14(VAR_30, 0, 1, 2, 3, VAR_3 + 8, VAR_4);

        FUNC_15(VAR_8, VAR_8, VAR_9, VAR_9, VAR_14, VAR_14, VAR_22, VAR_23);
        FUNC_15(VAR_10, VAR_10, VAR_11, VAR_11, VAR_14, VAR_14, VAR_24, VAR_25);
        FUNC_1(VAR_22, VAR_23, VAR_24, VAR_25, VAR_12, VAR_12, VAR_12, VAR_12,
                    VAR_35, VAR_36, VAR_37, VAR_38);
        FUNC_15(VAR_8, VAR_8, VAR_9, VAR_9, VAR_15, VAR_15, VAR_26, VAR_27);
        FUNC_15(VAR_10, VAR_10, VAR_11, VAR_11, VAR_15, VAR_15, VAR_28, VAR_29);
        FUNC_3(VAR_26, VAR_27, VAR_28, VAR_29, VAR_13, VAR_13, VAR_13, VAR_13,
                     VAR_35, VAR_36, VAR_37, VAR_38);
        FUNC_12(VAR_35, VAR_36, VAR_37, VAR_38, 6);
        FUNC_9(VAR_35, VAR_36, VAR_37, VAR_38, 7);
        VAR_30 = FUNC_7(VAR_35, VAR_36);
        VAR_31 = FUNC_7(VAR_37, VAR_38);
        FUNC_13(VAR_30, VAR_31, 0, 1, 0, 1, VAR_3, VAR_4);
        VAR_3 += (4 * VAR_4);
    }
}
