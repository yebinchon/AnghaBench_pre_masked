
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef scalar_t__ v8i16 ;
typedef int v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,int,int,int,int *,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_1, uint8_t *VAR_2, int32_t VAR_3,
                                  uint32_t VAR_4, uint32_t VAR_5,
                                  uint32_t VAR_6, uint32_t VAR_7)
{
    v16u8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v16u8 VAR_13, VAR_14, VAR_15, VAR_16;
    v8u16 VAR_17, VAR_18, VAR_19, VAR_20;
    v8i16 VAR_21;
    v16i8 VAR_22;
    v16i8 VAR_23 = FUNC_7(VAR_4);
    v16i8 VAR_24 = FUNC_7(VAR_5);
    v16u8 VAR_25 = (v16u8) FUNC_9(VAR_23, VAR_24);
    v8u16 VAR_26 = (v8u16) FUNC_8(VAR_6);
    v8u16 VAR_27 = (v8u16) FUNC_8(VAR_7);

    VAR_22 = FUNC_2(&VAR_0[48]);

    FUNC_3(VAR_1, VAR_3, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

    FUNC_6(VAR_8, VAR_9, VAR_10, VAR_11, VAR_22, VAR_22, VAR_13, VAR_14);
    FUNC_6(VAR_9, VAR_10, VAR_11, VAR_12, VAR_22, VAR_22, VAR_15, VAR_16);
    FUNC_1(VAR_14, VAR_13, VAR_16, VAR_15, VAR_8, VAR_9);
    FUNC_0(VAR_8, VAR_9, VAR_25, VAR_25, VAR_17, VAR_18);
    FUNC_4(VAR_17, VAR_27, VAR_18, VAR_26, VAR_19, VAR_20);

    VAR_19 += VAR_20;
    VAR_19 = (v8u16) FUNC_12((v8i16) VAR_19, 6);
    VAR_19 = FUNC_11(VAR_19, 7);

    VAR_21 = (v8i16) FUNC_10((v16i8) VAR_19, (v16i8) VAR_19);

    FUNC_5(VAR_21, 0, 1, 2, 3, VAR_2, VAR_3);
}
