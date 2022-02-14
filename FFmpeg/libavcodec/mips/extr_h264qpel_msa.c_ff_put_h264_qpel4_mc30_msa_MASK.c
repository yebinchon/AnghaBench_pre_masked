
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef int v2i64 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int ,int,int,int,int *,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int,int ) ;
 scalar_t__ FUNC_12 (int ,int,int ) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,int) ;
 int * VAR_0 ;

void FUNC_16(uint8_t *VAR_1, const uint8_t *VAR_2,
                                ptrdiff_t VAR_3)
{
    v16i8 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    v16i8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    v8i16 VAR_18, VAR_19;
    v16i8 VAR_20 = FUNC_13(-5);
    v16i8 VAR_21 = FUNC_13(20);

    FUNC_2(&VAR_0[48], 16, VAR_9, VAR_10, VAR_11);
    FUNC_3(VAR_2 - 2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7);
    FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9, VAR_9, VAR_12, VAR_13);
    FUNC_1(VAR_12, VAR_13, VAR_18, VAR_19);
    FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_10, VAR_10, VAR_14, VAR_15);
    FUNC_0(VAR_14, VAR_15, VAR_20, VAR_20, VAR_18, VAR_19);
    FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_11, VAR_11, VAR_16, VAR_17);
    FUNC_0(VAR_16, VAR_17, VAR_21, VAR_21, VAR_18, VAR_19);
    FUNC_6(VAR_18, VAR_19, 5);
    FUNC_4(VAR_18, VAR_19, 7);
    VAR_8 = FUNC_14((v16i8) VAR_19, (v16i8) VAR_18);
    FUNC_5(VAR_4, VAR_4, VAR_5, VAR_5, VAR_6, VAR_6, VAR_7, VAR_7, 3,
               VAR_4, VAR_5, VAR_6, VAR_7);
    VAR_4 = (v16i8) FUNC_12((v4i32) VAR_4, 1, (v4i32) VAR_5);
    VAR_5 = (v16i8) FUNC_12((v4i32) VAR_6, 1, (v4i32) VAR_7);
    VAR_4 = (v16i8) FUNC_11((v2i64) VAR_4, 1, (v2i64) VAR_5);
    VAR_8 = FUNC_10(VAR_8, VAR_4);
    VAR_8 = (v16i8) FUNC_15((v16u8) VAR_8, 128);
    FUNC_7(VAR_8, 0, 1, 2, 3, VAR_1, VAR_3);
}
