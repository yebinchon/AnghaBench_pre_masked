
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_5 (int,int,int,int,scalar_t__,scalar_t__) ;
 int FUNC_6 (int,int,int,int,int) ;
 int FUNC_7 (int,int,int,int,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,int ,int,int ,int,int *,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_15(uint8_t *VAR_1, uint8_t *VAR_2, int32_t VAR_3,
                                  uint32_t VAR_4, uint32_t VAR_5,
                                  uint32_t VAR_6, uint32_t VAR_7)
{
    v16u8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v8u16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v8u16 VAR_20, VAR_21, VAR_22, VAR_23;
    v16i8 VAR_24;
    v16i8 VAR_25 = FUNC_11(VAR_4);
    v16i8 VAR_26 = FUNC_11(VAR_5);
    v16u8 VAR_27 = (v16u8) FUNC_13(VAR_25, VAR_26);
    v8u16 VAR_28 = (v8u16) FUNC_12(VAR_6);
    v8u16 VAR_29 = (v8u16) FUNC_12(VAR_7);

    VAR_24 = FUNC_1(&VAR_0[32]);

    VAR_8 = FUNC_2(VAR_1);
    VAR_1 += VAR_3;

    VAR_8 = (v16u8) FUNC_14(VAR_24, (v16i8) VAR_8, (v16i8) VAR_8);
    VAR_15 = FUNC_10(VAR_8, VAR_27);

    FUNC_3(VAR_1, VAR_3, VAR_9, VAR_10, VAR_11, VAR_12);
    VAR_1 += (4 * VAR_3);

    FUNC_9(VAR_9, VAR_9, VAR_10, VAR_10, VAR_24, VAR_24, VAR_9, VAR_10);
    FUNC_9(VAR_11, VAR_11, VAR_12, VAR_12, VAR_24, VAR_24, VAR_11, VAR_12);
    FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_27, VAR_27,
                VAR_27, VAR_27, VAR_16, VAR_17, VAR_18, VAR_19);
    FUNC_4(VAR_16, VAR_28, VAR_17, VAR_28, VAR_18, VAR_28,
         VAR_19, VAR_28, VAR_20, VAR_21, VAR_22, VAR_23);

    VAR_20 += (VAR_15 * VAR_29);
    VAR_21 += (VAR_16 * VAR_29);
    VAR_22 += (VAR_17 * VAR_29);
    VAR_23 += (VAR_18 * VAR_29);

    FUNC_7(VAR_20, VAR_21, VAR_22, VAR_23, 6);
    FUNC_6(VAR_20, VAR_21, VAR_22, VAR_23, 7);
    FUNC_5(VAR_21, VAR_20, VAR_23, VAR_22, VAR_13, VAR_14);
    FUNC_8(VAR_13, VAR_14, 0, 1, 0, 1, VAR_2, VAR_3);
}
