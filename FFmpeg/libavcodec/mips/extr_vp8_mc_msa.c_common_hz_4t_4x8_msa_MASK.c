
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;
 int FUNC_6 (int ,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int,int,int *,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_10(uint8_t *VAR_1, int32_t VAR_2,
                                 uint8_t *VAR_3, int32_t VAR_4,
                                 const int8_t *VAR_5)
{
    v16i8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14;
    v8i16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

    VAR_12 = FUNC_1(&VAR_0[16]);
    VAR_1 -= 1;


    VAR_15 = FUNC_3(VAR_5);
    FUNC_6(VAR_15, 0, 1, VAR_10, VAR_11);

    VAR_13 = VAR_12 + 2;

    FUNC_2(VAR_1, VAR_2, VAR_6, VAR_7, VAR_8, VAR_9);
    VAR_1 += (4 * VAR_2);

    FUNC_9(VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_12, VAR_13,
                               VAR_10, VAR_11, VAR_16, VAR_17);
    FUNC_2(VAR_1, VAR_2, VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_9(VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_12, VAR_13,
                               VAR_10, VAR_11, VAR_18, VAR_19);
    FUNC_7(VAR_16, VAR_17, VAR_18, VAR_19, 7);
    FUNC_5(VAR_16, VAR_17, VAR_18, VAR_19, 7);
    VAR_14 = FUNC_4(VAR_16, VAR_17);
    FUNC_8(VAR_14, 0, 1, 2, 3, VAR_3, VAR_4);
    VAR_14 = FUNC_4(VAR_18, VAR_19);
    FUNC_8(VAR_14, 0, 1, 2, 3, VAR_3 + 4 * VAR_4, VAR_4);
}
