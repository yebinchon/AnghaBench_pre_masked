
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int,int *,int) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_12(uint8_t *VAR_1, int32_t VAR_2,
                                     uint8_t *VAR_3, int32_t VAR_4,
                                     const int8_t *VAR_5, int32_t VAR_6)
{
    uint32_t VAR_7;
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14;
    v8i16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

    VAR_12 = FUNC_2(&VAR_0[0]);
    VAR_1 -= 1;

    VAR_15 = FUNC_4(VAR_5);
    FUNC_7(VAR_15, 0, 1, VAR_10, VAR_11);

    VAR_13 = VAR_12 + 2;

    for (VAR_7 = (VAR_6 >> 1); VAR_7--;) {
        FUNC_3(VAR_1, VAR_2, VAR_8, VAR_9);
        VAR_1 += (2 * VAR_2);

        FUNC_11(VAR_8, VAR_9);
        FUNC_10(VAR_8, VAR_8, VAR_9, VAR_9, VAR_12, VAR_12, VAR_16, VAR_17);
        FUNC_0(VAR_16, VAR_17, VAR_10, VAR_10, VAR_16, VAR_17);
        FUNC_10(VAR_8, VAR_8, VAR_9, VAR_9, VAR_13, VAR_13, VAR_18, VAR_19);
        FUNC_1(VAR_18, VAR_19, VAR_11, VAR_11, VAR_16, VAR_17);
        FUNC_8(VAR_16, VAR_17, 6);
        FUNC_6(VAR_16, VAR_17, 7);
        VAR_14 = FUNC_5(VAR_16, VAR_17);
        FUNC_9(VAR_14, 0, 1, VAR_3, VAR_4);
        VAR_3 += (2 * VAR_4);
    }
}
