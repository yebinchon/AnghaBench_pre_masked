
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int,int,int,int) ;
 int FUNC_1 (int,int,int,int,int,int,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int,int ,int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *,int,int,int) ;
 int FUNC_7 (int,int ,int,int,int) ;
 int FUNC_8 (int,int ,int,int *,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,int ) ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_0,
                                  int32_t VAR_1,
                                  int16_t *VAR_2,
                                  int32_t VAR_3,
                                  uint8_t *VAR_4,
                                  int32_t VAR_5,
                                  const int8_t *VAR_6,
                                  int32_t VAR_7)
{
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v8i16 VAR_13, VAR_14, VAR_15, VAR_16;
    v16i8 VAR_17, VAR_18, VAR_19, VAR_20;
    v8i16 VAR_21, VAR_22;
    v8i16 VAR_23, VAR_24;

    VAR_0 -= VAR_1;

    VAR_24 = FUNC_11(128);
    VAR_24 <<= 6;

    VAR_23 = FUNC_5(VAR_6);
    FUNC_7(VAR_23, 0, 1, VAR_21, VAR_22);

    FUNC_4(VAR_0, VAR_1, VAR_8, VAR_9, VAR_10);
    VAR_0 += (3 * VAR_1);
    FUNC_10(VAR_8, VAR_9, VAR_10);
    FUNC_2(VAR_9, VAR_8, VAR_10, VAR_9, VAR_17, VAR_19);

    FUNC_3(VAR_0, VAR_1, VAR_11, VAR_12);
    FUNC_6(VAR_2, VAR_3, VAR_13, VAR_14);
    FUNC_9(VAR_11, VAR_12);
    FUNC_2(VAR_11, VAR_10, VAR_12, VAR_11, VAR_18, VAR_20);

    VAR_15 = VAR_24;
    FUNC_0(VAR_17, VAR_18, VAR_21, VAR_22, VAR_15, VAR_15);
    VAR_16 = VAR_24;
    FUNC_0(VAR_19, VAR_20, VAR_21, VAR_22, VAR_16, VAR_16);

    FUNC_1(VAR_13, VAR_14, VAR_15, VAR_16, 7, VAR_15, VAR_16);
    VAR_15 = (v8i16) FUNC_12((v16i8) VAR_16, (v16i8) VAR_15);

    FUNC_8(VAR_15, 0, 1, VAR_4, VAR_5);
}
