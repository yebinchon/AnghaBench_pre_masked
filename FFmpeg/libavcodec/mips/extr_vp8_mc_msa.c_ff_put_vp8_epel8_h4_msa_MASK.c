
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;
 int FUNC_6 (int ,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,int ,int) ;
 int FUNC_8 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int * VAR_0 ;
 int ** VAR_1 ;

void FUNC_10(uint8_t *VAR_2, ptrdiff_t VAR_3,
                             uint8_t *VAR_4, ptrdiff_t VAR_5,
                             int VAR_6, int VAR_7, int VAR_8)
{
    uint32_t VAR_9;
    const int8_t *VAR_10 = VAR_1[VAR_7 - 1];
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    v16u8 VAR_19, VAR_20;
    v8i16 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

    VAR_17 = FUNC_1(&VAR_0[0]);
    VAR_4 -= 1;


    VAR_21 = FUNC_3(VAR_10);
    FUNC_6(VAR_21, 0, 1, VAR_15, VAR_16);

    VAR_18 = VAR_17 + 2;

    for (VAR_9 = (VAR_6 >> 2); VAR_9--;) {
        FUNC_2(VAR_4, VAR_5, VAR_11, VAR_12, VAR_13, VAR_14);
        VAR_4 += (4 * VAR_5);

        FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14);
        FUNC_0(VAR_11, VAR_12, VAR_13, VAR_14, VAR_17, VAR_18, VAR_15,
                                   VAR_16, VAR_22, VAR_23, VAR_24, VAR_25);
        FUNC_7(VAR_22, VAR_23, VAR_24, VAR_25, 7);
        FUNC_5(VAR_22, VAR_23, VAR_24, VAR_25, 7);
        VAR_19 = FUNC_4(VAR_22, VAR_23);
        VAR_20 = FUNC_4(VAR_24, VAR_25);
        FUNC_8(VAR_19, VAR_20, 0, 1, 0, 1, VAR_2, VAR_3);
        VAR_2 += (4 * VAR_3);
    }
}
