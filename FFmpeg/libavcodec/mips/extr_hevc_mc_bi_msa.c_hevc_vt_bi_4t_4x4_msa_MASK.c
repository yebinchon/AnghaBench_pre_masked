
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v2i64 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_1 (int,int,int,int,int,int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int,int,int,int,int,int) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int *,int,int,int,int,int) ;
 int FUNC_10 (int,int ,int,int,int) ;
 int FUNC_11 (int,int ,int,int,int,int *,int) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int ,int) ;

__attribute__((used)) static void FUNC_17(uint8_t *VAR_0,
                                  int32_t VAR_1,
                                  int16_t *VAR_2,
                                  int32_t VAR_3,
                                  uint8_t *VAR_4,
                                  int32_t VAR_5,
                                  const int8_t *VAR_6,
                                  int32_t VAR_7)
{
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v8i16 VAR_15, VAR_16, VAR_17, VAR_18;
    v16i8 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    v16i8 VAR_25, VAR_26, VAR_27;
    v8i16 VAR_28, VAR_29;
    v8i16 VAR_30, VAR_31;
    v8i16 VAR_32, VAR_33;

    VAR_0 -= VAR_1;

    VAR_33 = FUNC_14(128);
    VAR_33 <<= 6;

    VAR_32 = FUNC_8(VAR_6);
    FUNC_10(VAR_32, 0, 1, VAR_30, VAR_31);

    FUNC_6(VAR_0, VAR_1, VAR_8, VAR_9, VAR_10);
    VAR_0 += (3 * VAR_1);
    FUNC_2(VAR_9, VAR_8, VAR_10, VAR_9, VAR_19, VAR_22);
    VAR_25 = (v16i8) FUNC_13((v2i64) VAR_22, (v2i64) VAR_19);
    VAR_25 = (v16i8) FUNC_16((v16u8) VAR_25, 128);

    FUNC_7(VAR_0, VAR_1, VAR_11, VAR_12, VAR_13, VAR_14);
    FUNC_9(VAR_2, VAR_3, VAR_15, VAR_16, VAR_17, VAR_18);
    FUNC_5(VAR_16, VAR_15, VAR_18, VAR_17, VAR_15, VAR_16);
    FUNC_3(VAR_11, VAR_10, VAR_12, VAR_11, VAR_13, VAR_12, VAR_14, VAR_13,
               VAR_20, VAR_23, VAR_21, VAR_24);
    FUNC_4(VAR_23, VAR_20, VAR_24, VAR_21, VAR_26, VAR_27);
    FUNC_12(VAR_26, VAR_27);

    VAR_28 = VAR_33;
    FUNC_0(VAR_25, VAR_26, VAR_30, VAR_31, VAR_28, VAR_28);
    VAR_29 = VAR_33;
    FUNC_0(VAR_26, VAR_27, VAR_30, VAR_31, VAR_29, VAR_29);
    FUNC_1(VAR_15, VAR_16, VAR_28, VAR_29, 7, VAR_28, VAR_29);

    VAR_28 = (v8i16) FUNC_15((v16i8) VAR_29, (v16i8) VAR_28);
    FUNC_11(VAR_28, 0, 1, 2, 3, VAR_4, VAR_5);
}
