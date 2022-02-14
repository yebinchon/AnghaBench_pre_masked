
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


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 int FUNC_7 (int ,int ,int,int,int,int *,int) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(uint8_t *VAR_0, int32_t VAR_1,
                                 uint8_t *VAR_2, int32_t VAR_3,
                                 const int8_t *VAR_4)
{
    v16i8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    v16i8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v16u8 VAR_16;
    v8i16 VAR_17;
    v8u16 VAR_18, VAR_19;

    VAR_17 = FUNC_4(VAR_4);
    VAR_16 = (v16u8) FUNC_9(VAR_17, 0);

    FUNC_3(VAR_0, VAR_1, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    VAR_0 += (5 * VAR_1);

    FUNC_1(VAR_6, VAR_5, VAR_7, VAR_6, VAR_8, VAR_7, VAR_9, VAR_8,
               VAR_10, VAR_12, VAR_11, VAR_13);
    FUNC_2(VAR_12, VAR_10, VAR_13, VAR_11, VAR_14, VAR_15);
    FUNC_0(VAR_14, VAR_15, VAR_16, VAR_16, VAR_18, VAR_19);
    FUNC_6(VAR_18, VAR_19, 7);
    FUNC_5(VAR_18, VAR_19, 7);
    VAR_14 = FUNC_8((v16i8) VAR_19, (v16i8) VAR_18);
    FUNC_7(VAR_14, 0, 1, 2, 3, VAR_2, VAR_3);
}
