
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
typedef int uint16_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int) ;
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
    uint16_t VAR_8, VAR_9;
    v16u8 VAR_10, VAR_11, VAR_12;
    v8u16 VAR_13, VAR_14, VAR_15, VAR_16;
    v8i16 VAR_17;
    v16i8 VAR_18;
    v16i8 VAR_19 = FUNC_7(VAR_4);
    v16i8 VAR_20 = FUNC_7(VAR_5);
    v16u8 VAR_21 = (v16u8) FUNC_9(VAR_19, VAR_20);
    v8u16 VAR_22 = (v8u16) FUNC_8(VAR_6);
    v8u16 VAR_23 = (v8u16) FUNC_8(VAR_7);

    VAR_18 = FUNC_1(&VAR_0[48]);

    FUNC_2(VAR_1, VAR_3, VAR_10, VAR_11, VAR_12);
    FUNC_5(VAR_10, VAR_11, VAR_11, VAR_12, VAR_18, VAR_18, VAR_10, VAR_11);
    FUNC_0(VAR_10, VAR_11, VAR_21, VAR_21, VAR_13, VAR_14);
    FUNC_3(VAR_13, VAR_23, VAR_14, VAR_22, VAR_15, VAR_16);

    VAR_15 += VAR_16;
    VAR_15 = (v8u16) FUNC_12((v8i16) VAR_15, 6);
    VAR_15 = FUNC_11(VAR_15, 7);
    VAR_17 = (v8i16) FUNC_10((v16i8) VAR_15, (v16i8) VAR_15);

    VAR_8 = FUNC_6(VAR_17, 0);
    VAR_9 = FUNC_6(VAR_17, 1);

    FUNC_4(VAR_8, VAR_2);
    VAR_2 += VAR_3;
    FUNC_4(VAR_9, VAR_2);
}
