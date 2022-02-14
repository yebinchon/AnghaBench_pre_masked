
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
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int ,int,int *,int) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_9(uint8_t *VAR_1, int32_t VAR_2,
                                 uint8_t *VAR_3, int32_t VAR_4,
                                 const int8_t *VAR_5)
{
    v16i8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    v16u8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v8u16 VAR_16, VAR_17, VAR_18;

    VAR_10 = FUNC_1(&VAR_0[16]);


    VAR_18 = FUNC_3(VAR_5);
    VAR_11 = (v16u8) FUNC_8((v8i16) VAR_18, 0);

    FUNC_2(VAR_1, VAR_2, VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_10, VAR_12, VAR_13);
    FUNC_0(VAR_12, VAR_13, VAR_11, VAR_11, VAR_16, VAR_17);
    FUNC_5(VAR_16, VAR_17, 7);
    FUNC_4(VAR_16, VAR_16, VAR_17, VAR_17, VAR_14, VAR_15);
    FUNC_6(VAR_14, 0, 1, VAR_3, VAR_4);
    FUNC_6(VAR_15, 0, 1, VAR_3 + 2 * VAR_4, VAR_4);
}
