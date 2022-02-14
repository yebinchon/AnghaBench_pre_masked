
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef scalar_t__ v8i16 ;
typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int,int,int,int *,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_11(uint8_t *VAR_0, uint8_t *VAR_1, int32_t VAR_2,
                                  uint32_t VAR_3, uint32_t VAR_4)
{
    v16u8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    v16u8 VAR_10, VAR_11, VAR_12, VAR_13;
    v8i16 VAR_14;
    v8u16 VAR_15;
    v16i8 VAR_16 = FUNC_5(VAR_3);
    v16i8 VAR_17 = FUNC_5(VAR_4);
    v16u8 VAR_18 = (v16u8) FUNC_6(VAR_16, VAR_17);

    FUNC_2(VAR_0, VAR_2, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_0(VAR_6, VAR_5, VAR_7, VAR_6, VAR_8, VAR_7, VAR_9, VAR_8,
               VAR_10, VAR_11, VAR_12, VAR_13);
    FUNC_1(VAR_11, VAR_10, VAR_13, VAR_12, VAR_10, VAR_12);

    VAR_10 = (v16u8) FUNC_7((v2i64) VAR_12, (v2i64) VAR_10);

    VAR_15 = FUNC_4(VAR_10, VAR_18);
    VAR_15 <<= 3;
    VAR_15 = (v8u16) FUNC_10((v8i16) VAR_15, 6);
    VAR_15 = FUNC_9(VAR_15, 7);

    VAR_14 = (v8i16) FUNC_8((v16i8) VAR_15, (v16i8) VAR_15);

    FUNC_3(VAR_14, 0, 1, 2, 3, VAR_1, VAR_2);
}
