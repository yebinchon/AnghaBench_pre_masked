
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


 int FUNC_0 (scalar_t__,scalar_t__,int,int,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int,int ,int,int,int) ;
 int FUNC_5 (int,int,int ,int,int ,int,int *,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_9(uint8_t *VAR_1,
                               int32_t VAR_2,
                               int16_t *VAR_3,
                               int32_t VAR_4,
                               const int8_t *VAR_5)
{
    v8i16 VAR_6, VAR_7;
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11;
    v16i8 VAR_12, VAR_13, VAR_14;
    v8i16 VAR_15, VAR_16;
    v8i16 VAR_17, VAR_18;
    v16i8 VAR_19 = FUNC_1(VAR_0 + 16);

    VAR_1 -= 1;

    VAR_17 = FUNC_3(VAR_5);
    FUNC_4(VAR_17, 0, 1, VAR_6, VAR_7);

    VAR_12 = VAR_19 + 2;

    VAR_18 = FUNC_8(128);
    VAR_18 <<= 6;

    FUNC_2(VAR_1, VAR_2, VAR_8, VAR_9, VAR_10, VAR_11);
    FUNC_7(VAR_8, VAR_9, VAR_10, VAR_11);

    FUNC_6(VAR_8, VAR_9, VAR_8, VAR_9, VAR_19, VAR_12, VAR_13, VAR_14);
    VAR_15 = VAR_18;
    FUNC_0(VAR_13, VAR_14, VAR_6, VAR_7, VAR_15, VAR_15);

    FUNC_6(VAR_10, VAR_11, VAR_10, VAR_11, VAR_19, VAR_12, VAR_13, VAR_14);
    VAR_16 = VAR_18;
    FUNC_0(VAR_13, VAR_14, VAR_6, VAR_7, VAR_16, VAR_16);

    FUNC_5(VAR_15, VAR_16, 0, 1, 0, 1, VAR_3, VAR_4);
}
