
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (int,int,int,int,int,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *,int ,int,int) ;
 int FUNC_6 (int,int ,int,int,int) ;
 int FUNC_7 (int,int ,int,int *,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_12(uint8_t *VAR_1,
                                  int32_t VAR_2,
                                  int16_t *VAR_3,
                                  int32_t VAR_4,
                                  uint8_t *VAR_5,
                                  int32_t VAR_6,
                                  const int8_t *VAR_7,
                                  int32_t VAR_8)
{
    v8i16 VAR_9, VAR_10;
    v16i8 VAR_11, VAR_12;
    v8i16 VAR_13, VAR_14;
    v16i8 VAR_15 = FUNC_2(&VAR_0[0]);
    v16i8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v8i16 VAR_21, VAR_22;
    v8i16 VAR_23, VAR_24;

    VAR_1 -= 1;

    VAR_24 = FUNC_10(128);
    VAR_24 <<= 6;

    VAR_23 = FUNC_4(VAR_7);
    FUNC_6(VAR_23, 0, 1, VAR_9, VAR_10);

    VAR_16 = VAR_15 + 2;

    FUNC_3(VAR_1, VAR_2, VAR_11, VAR_12);
    FUNC_5(VAR_3, VAR_4, VAR_13, VAR_14);
    FUNC_9(VAR_11, VAR_12);

    VAR_21 = VAR_24;
    VAR_22 = VAR_24;
    FUNC_8(VAR_11, VAR_11, VAR_12, VAR_12, VAR_15, VAR_15, VAR_17, VAR_18);
    FUNC_8(VAR_11, VAR_11, VAR_12, VAR_12, VAR_16, VAR_16, VAR_19, VAR_20);
    FUNC_0(VAR_17, VAR_18, VAR_19, VAR_20, VAR_9, VAR_9, VAR_10, VAR_10, VAR_21, VAR_22,
                 VAR_21, VAR_22);
    FUNC_1(VAR_13, VAR_14, VAR_21, VAR_22, 7, VAR_21, VAR_22);

    VAR_21 = (v8i16) FUNC_11((v16i8) VAR_22, (v16i8) VAR_21);
    FUNC_7(VAR_21, 0, 1, VAR_5, VAR_6);
}
