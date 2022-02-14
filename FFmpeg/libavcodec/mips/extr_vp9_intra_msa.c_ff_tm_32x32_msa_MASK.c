
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (scalar_t__,scalar_t__,int *) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;

void FUNC_10(uint8_t *VAR_0, ptrdiff_t VAR_1,
                     const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    uint8_t VAR_4 = VAR_3[-1];
    uint32_t VAR_5, VAR_6;
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v8u16 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

    VAR_7 = FUNC_4(VAR_3);
    VAR_8 = FUNC_4(VAR_3 + 16);
    VAR_13 = (v8u16) FUNC_9(VAR_4);

    VAR_2 += 28;
    for (VAR_5 = 8; VAR_5--;) {
        VAR_6 = FUNC_5(VAR_2);
        VAR_9 = FUNC_8(VAR_6 >> 24);
        VAR_10 = FUNC_8(VAR_6 >> 16);
        VAR_11 = FUNC_8(VAR_6 >> 8);
        VAR_12 = FUNC_8(VAR_6);
        VAR_2 -= 4;

        FUNC_2(VAR_9, VAR_7, VAR_9, VAR_8, VAR_14, VAR_15);
        FUNC_1(VAR_9, VAR_7, VAR_9, VAR_8, VAR_16, VAR_17);
        FUNC_0(VAR_14, VAR_16, VAR_15, VAR_17, VAR_14, VAR_16, VAR_15,
                    VAR_17);
        FUNC_3(VAR_13, VAR_13, VAR_14, VAR_16);
        FUNC_3(VAR_13, VAR_13, VAR_15, VAR_17);
        FUNC_7(VAR_14, VAR_16, VAR_15, VAR_17, 7);
        FUNC_6(VAR_14, VAR_16, VAR_0);
        FUNC_6(VAR_15, VAR_17, VAR_0 + 16);
        VAR_0 += VAR_1;

        FUNC_2(VAR_10, VAR_7, VAR_10, VAR_8, VAR_14, VAR_15);
        FUNC_1(VAR_10, VAR_7, VAR_10, VAR_8, VAR_16, VAR_17);
        FUNC_0(VAR_14, VAR_16, VAR_15, VAR_17, VAR_14, VAR_16, VAR_15,
                    VAR_17);
        FUNC_3(VAR_13, VAR_13, VAR_14, VAR_16);
        FUNC_3(VAR_13, VAR_13, VAR_15, VAR_17);
        FUNC_7(VAR_14, VAR_16, VAR_15, VAR_17, 7);
        FUNC_6(VAR_14, VAR_16, VAR_0);
        FUNC_6(VAR_15, VAR_17, VAR_0 + 16);
        VAR_0 += VAR_1;

        FUNC_2(VAR_11, VAR_7, VAR_11, VAR_8, VAR_14, VAR_15);
        FUNC_1(VAR_11, VAR_7, VAR_11, VAR_8, VAR_16, VAR_17);
        FUNC_0(VAR_14, VAR_16, VAR_15, VAR_17, VAR_14, VAR_16, VAR_15,
                    VAR_17);
        FUNC_3(VAR_13, VAR_13, VAR_14, VAR_16);
        FUNC_3(VAR_13, VAR_13, VAR_15, VAR_17);
        FUNC_7(VAR_14, VAR_16, VAR_15, VAR_17, 7);
        FUNC_6(VAR_14, VAR_16, VAR_0);
        FUNC_6(VAR_15, VAR_17, VAR_0 + 16);
        VAR_0 += VAR_1;

        FUNC_2(VAR_12, VAR_7, VAR_12, VAR_8, VAR_14, VAR_15);
        FUNC_1(VAR_12, VAR_7, VAR_12, VAR_8, VAR_16, VAR_17);
        FUNC_0(VAR_14, VAR_16, VAR_15, VAR_17, VAR_14, VAR_16, VAR_15,
                    VAR_17);
        FUNC_3(VAR_13, VAR_13, VAR_14, VAR_16);
        FUNC_3(VAR_13, VAR_13, VAR_15, VAR_17);
        FUNC_7(VAR_14, VAR_16, VAR_15, VAR_17, 7);
        FUNC_6(VAR_14, VAR_16, VAR_0);
        FUNC_6(VAR_15, VAR_17, VAR_0 + 16);
        VAR_0 += VAR_1;
    }
}
