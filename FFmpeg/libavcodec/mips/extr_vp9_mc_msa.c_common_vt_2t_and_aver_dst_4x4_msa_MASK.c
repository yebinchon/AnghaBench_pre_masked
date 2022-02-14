
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*,int,int ,int ,int ,int ) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int *,int,int ,int ,int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int ,int,int,int,int *,int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;

__attribute__((used)) static void FUNC_14(const uint8_t *VAR_0,
                                              int32_t VAR_1,
                                              uint8_t *VAR_2, int32_t VAR_3,
                                              const int8_t *VAR_4)
{
    uint32_t VAR_5, VAR_6, VAR_7, VAR_8;
    v16i8 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    v16i8 VAR_19, VAR_20, VAR_21, VAR_22;
    v8i16 VAR_23;
    v8u16 VAR_24, VAR_25;

    VAR_23 = FUNC_6(VAR_4);
    VAR_16 = (v16u8) FUNC_13(VAR_23, 0);

    FUNC_5(VAR_0, VAR_1, VAR_9, VAR_10, VAR_11, VAR_12);
    VAR_0 += (4 * VAR_1);

    VAR_13 = FUNC_4(VAR_0);
    VAR_0 += VAR_1;

    FUNC_7(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
    FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_14);
    FUNC_1(VAR_10, VAR_9, VAR_11, VAR_10, VAR_12, VAR_11, VAR_13, VAR_12,
               VAR_19, VAR_21, VAR_20, VAR_22);
    FUNC_2(VAR_21, VAR_19, VAR_22, VAR_20, VAR_17, VAR_18);
    FUNC_0(VAR_17, VAR_18, VAR_16, VAR_16, VAR_24, VAR_25);
    FUNC_9(VAR_24, VAR_25, 7);
    FUNC_8(VAR_24, VAR_25, 7);

    VAR_15 = (v16u8) FUNC_12((v16i8) VAR_25, (v16i8) VAR_24);
    VAR_15 = FUNC_11(VAR_15, VAR_14);

    FUNC_10(VAR_15, 0, 1, 2, 3, VAR_2, VAR_3);
}
