
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v2i64 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int,int,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *,int ,int,int) ;
 int FUNC_6 (int,int ,int,int,int) ;
 int FUNC_7 (scalar_t__,int ,int,int *,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int,int) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (int,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_15(uint8_t *VAR_1,
                                  int32_t VAR_2,
                                  int16_t *VAR_3,
                                  int32_t VAR_4,
                                  uint8_t *VAR_5,
                                  int32_t VAR_6,
                                  const int8_t *VAR_7,
                                  int32_t VAR_8)
{
    v8i16 VAR_9, VAR_10;
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v8i16 VAR_16, VAR_17;
    v16i8 VAR_18 = FUNC_2(&VAR_0[16]);
    v16i8 VAR_19;
    v8i16 VAR_20;
    v8i16 VAR_21, VAR_22;

    VAR_1 -= 1;

    VAR_22 = FUNC_12(128);
    VAR_22 <<= 6;

    VAR_21 = FUNC_4(VAR_7);
    FUNC_6(VAR_21, 0, 1, VAR_9, VAR_10);

    VAR_19 = VAR_18 + 2;

    FUNC_3(VAR_1, VAR_2, VAR_11, VAR_12);
    FUNC_5(VAR_3, VAR_4, VAR_16, VAR_17);
    VAR_16 = (v8i16) FUNC_11((v2i64) VAR_17, (v2i64) VAR_16);
    FUNC_9(VAR_11, VAR_12);
    FUNC_8(VAR_11, VAR_12, VAR_11, VAR_12, VAR_18, VAR_19, VAR_14, VAR_15);
    VAR_20 = VAR_22;
    FUNC_1(VAR_14, VAR_15, VAR_9, VAR_10, VAR_20, VAR_20);

    VAR_20 = FUNC_10(VAR_20, VAR_16);
    VAR_20 = FUNC_14(VAR_20, 7);
    FUNC_0(VAR_20);
    VAR_13 = FUNC_13((v16i8) VAR_20, (v16i8) VAR_20);

    FUNC_7(VAR_13, 0, 1, VAR_5, VAR_6);
}
