
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


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *,int,int,int) ;
 int FUNC_7 (int,int ,int,int,int) ;
 int FUNC_8 (int,int ,int,int *,int) ;
 int FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (int,int) ;
 scalar_t__ FUNC_14 (int ,int) ;

__attribute__((used)) static void FUNC_15(uint8_t *VAR_0,
                                  int32_t VAR_1,
                                  int16_t *VAR_2,
                                  int32_t VAR_3,
                                  uint8_t *VAR_4,
                                  int32_t VAR_5,
                                  const int8_t *VAR_6,
                                  int32_t VAR_7)
{
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v8i16 VAR_13, VAR_14;
    v16i8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v8i16 VAR_21;
    v8i16 VAR_22, VAR_23;
    v8i16 VAR_24, VAR_25;

    VAR_0 -= VAR_1;

    VAR_25 = FUNC_11(128);
    VAR_25 <<= 6;

    VAR_24 = FUNC_5(VAR_6);
    FUNC_7(VAR_24, 0, 1, VAR_22, VAR_23);

    FUNC_4(VAR_0, VAR_1, VAR_8, VAR_9, VAR_10);
    VAR_0 += (3 * VAR_1);

    FUNC_2(VAR_9, VAR_8, VAR_10, VAR_9, VAR_15, VAR_17);
    VAR_19 = (v16i8) FUNC_10((v2i64) VAR_17, (v2i64) VAR_15);
    VAR_19 = (v16i8) FUNC_14((v16u8) VAR_19, 128);

    FUNC_3(VAR_0, VAR_1, VAR_11, VAR_12);
    FUNC_6(VAR_2, VAR_3, VAR_13, VAR_14);
    VAR_13 = (v8i16) FUNC_10((v2i64) VAR_14, (v2i64) VAR_13);
    FUNC_2(VAR_11, VAR_10, VAR_12, VAR_11, VAR_16, VAR_18);
    VAR_20 = (v16i8) FUNC_10((v2i64) VAR_18, (v2i64) VAR_16);
    VAR_20 = (v16i8) FUNC_14((v16u8) VAR_20, 128);

    VAR_21 = VAR_25;
    FUNC_1(VAR_19, VAR_20, VAR_22, VAR_23, VAR_21, VAR_21);
    VAR_21 = FUNC_9(VAR_21, VAR_13);
    VAR_21 = FUNC_13(VAR_21, 7);
    FUNC_0(VAR_21);

    VAR_21 = (v8i16) FUNC_12((v16i8) VAR_21, (v16i8) VAR_21);
    FUNC_8(VAR_21, 0, 1, VAR_4, VAR_5);
}
