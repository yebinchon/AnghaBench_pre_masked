
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
 int FUNC_1 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int ,int,int,int,int *,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_12(const uint8_t *VAR_1,
                                              int32_t VAR_2,
                                              uint8_t *VAR_3, int32_t VAR_4,
                                              const int8_t *VAR_5)
{
    uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
    v16i8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v16u8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v8u16 VAR_20, VAR_21, VAR_22;

    VAR_14 = FUNC_2(&VAR_0[16]);


    VAR_22 = FUNC_4(VAR_5);
    VAR_15 = (v16u8) FUNC_11((v8i16) VAR_22, 0);

    FUNC_3(VAR_1, VAR_2, VAR_10, VAR_11, VAR_12, VAR_13);
    FUNC_5(VAR_3, VAR_4, VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_16);
    FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_14, VAR_17, VAR_18);
    FUNC_0(VAR_17, VAR_18, VAR_15, VAR_15, VAR_20, VAR_21);
    FUNC_6(VAR_20, VAR_21, 7);

    VAR_19 = (v16u8) FUNC_10((v16i8) VAR_21, (v16i8) VAR_20);
    VAR_19 = (v16u8) FUNC_9(VAR_19, VAR_16);

    FUNC_7(VAR_19, 0, 1, 2, 3, VAR_3, VAR_4);
}
