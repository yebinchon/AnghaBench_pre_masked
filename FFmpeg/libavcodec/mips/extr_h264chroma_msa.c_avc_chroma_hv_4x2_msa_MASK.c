
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v4i32 ;
typedef int v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int,int *,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (int ,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_12(uint8_t *VAR_1, uint8_t *VAR_2, int32_t VAR_3,
                                  uint32_t VAR_4, uint32_t VAR_5,
                                  uint32_t VAR_6, uint32_t VAR_7)
{
    v16u8 VAR_8, VAR_9, VAR_10;
    v8u16 VAR_11, VAR_12, VAR_13, VAR_14;
    v16i8 VAR_15;
    v4i32 VAR_16;
    v16i8 VAR_17 = FUNC_6(VAR_4);
    v16i8 VAR_18 = FUNC_6(VAR_5);
    v16u8 VAR_19 = (v16u8) FUNC_8(VAR_17, VAR_18);
    v8u16 VAR_20 = (v8u16) FUNC_7(VAR_6);
    v8u16 VAR_21 = (v8u16) FUNC_7(VAR_7);

    VAR_15 = FUNC_1(&VAR_0[0]);
    FUNC_2(VAR_1, VAR_3, VAR_8, VAR_9, VAR_10);
    FUNC_5(VAR_8, VAR_9, VAR_9, VAR_10, VAR_15, VAR_15, VAR_8, VAR_9);
    FUNC_0(VAR_8, VAR_9, VAR_19, VAR_19, VAR_11, VAR_12);
    FUNC_3(VAR_11, VAR_21, VAR_12, VAR_20, VAR_13, VAR_14);

    VAR_13 += VAR_14;
    VAR_13 = (v8u16) FUNC_11((v8i16) VAR_13, 6);
    VAR_13 = FUNC_10(VAR_13, 7);
    VAR_16 = (v4i32) FUNC_9((v16i8) VAR_13, (v16i8) VAR_13);

    FUNC_4(VAR_16, 0, 1, VAR_2, VAR_3);
}
