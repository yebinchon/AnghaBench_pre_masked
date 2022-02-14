
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
 int FUNC_2 (int,int,int,int,int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *,int ,int,int,int,int) ;
 int FUNC_7 (int,int ,int,int,int) ;
 int FUNC_8 (scalar_t__,int ,int,int,int,int *,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_1,
                                  int32_t VAR_2,
                                  int16_t *VAR_3,
                                  int32_t VAR_4,
                                  uint8_t *VAR_5,
                                  int32_t VAR_6,
                                  const int8_t *VAR_7,
                                  int32_t VAR_8)
{
    v8i16 VAR_9, VAR_10;
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    v8i16 VAR_18, VAR_19, VAR_20, VAR_21;
    v16i8 VAR_22, VAR_23;
    v16i8 VAR_24 = FUNC_3(&VAR_0[16]);
    v16i8 VAR_25;
    v8i16 VAR_26, VAR_27;
    v8i16 VAR_28, VAR_29;

    VAR_1 -= 1;

    VAR_29 = FUNC_11(128);
    VAR_29 <<= 6;

    VAR_28 = FUNC_5(VAR_7);
    FUNC_7(VAR_28, 0, 1, VAR_9, VAR_10);

    VAR_25 = VAR_24 + 2;

    FUNC_4(VAR_1, VAR_2, VAR_11, VAR_12, VAR_13, VAR_14);
    FUNC_6(VAR_3, VAR_4, VAR_18, VAR_19, VAR_20, VAR_21);

    FUNC_2(VAR_19, VAR_18, VAR_21, VAR_20, VAR_18, VAR_19);
    FUNC_10(VAR_11, VAR_12, VAR_13, VAR_14);

    VAR_26 = VAR_29;
    VAR_27 = VAR_29;
    FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14, VAR_24, VAR_24, VAR_16, VAR_17);
    FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14, VAR_25, VAR_25, VAR_22, VAR_23);
    FUNC_0(VAR_16, VAR_17, VAR_22, VAR_23, VAR_9, VAR_9, VAR_10, VAR_10, VAR_26, VAR_27,
                 VAR_26, VAR_27);
    FUNC_1(VAR_18, VAR_19, VAR_26, VAR_27, 7, VAR_26, VAR_27);
    VAR_15 = FUNC_12((v16i8) VAR_27, (v16i8) VAR_26);

    FUNC_8(VAR_15, 0, 1, 2, 3, VAR_5, VAR_6);
}
