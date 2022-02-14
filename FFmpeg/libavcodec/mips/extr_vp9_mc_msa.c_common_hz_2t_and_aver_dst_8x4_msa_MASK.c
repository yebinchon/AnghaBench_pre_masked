
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_10(const uint8_t *VAR_1,
                                              int32_t VAR_2,
                                              uint8_t *VAR_3, int32_t VAR_4,
                                              const int8_t *VAR_5)
{
    int64_t VAR_6, VAR_7, VAR_8, VAR_9;
    v16i8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v16u8 VAR_15, VAR_16, VAR_17;
    v8u16 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

    VAR_14 = FUNC_3(&VAR_0[0]);


    VAR_22 = FUNC_5(VAR_5);
    VAR_15 = (v16u8) FUNC_9((v8i16) VAR_22, 0);

    FUNC_4(VAR_1, VAR_2, VAR_10, VAR_11, VAR_12, VAR_13);
    FUNC_8(VAR_10, VAR_10, VAR_11, VAR_11, VAR_14, VAR_14, VAR_18, VAR_19);
    FUNC_8(VAR_12, VAR_12, VAR_13, VAR_13, VAR_14, VAR_14, VAR_20, VAR_21);
    FUNC_0(VAR_18, VAR_19, VAR_20, VAR_21, VAR_15, VAR_15, VAR_15, VAR_15,
                VAR_18, VAR_19, VAR_20, VAR_21);
    FUNC_7(VAR_18, VAR_19, VAR_20, VAR_21, 7);
    FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_1(VAR_6, VAR_7, VAR_16);
    FUNC_1(VAR_8, VAR_9, VAR_17);
    FUNC_6(VAR_18, VAR_19, VAR_20, VAR_21, VAR_16, VAR_17, VAR_3, VAR_4);
}
