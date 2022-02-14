
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (scalar_t__,scalar_t__,int *) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;

void FUNC_9(uint8_t *VAR_0, ptrdiff_t VAR_1,
                     const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    uint8_t VAR_4 = VAR_3[-1];
    uint32_t VAR_5, VAR_6;
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    v8u16 VAR_12, VAR_13, VAR_14;

    VAR_7 = FUNC_3(VAR_3);
    VAR_12 = (v8u16) FUNC_8(VAR_4);

    VAR_2 += 12;
    for (VAR_5 = 4; VAR_5--;) {
        VAR_6 = FUNC_4(VAR_2);
        VAR_8 = FUNC_7(VAR_6 >> 24);
        VAR_9 = FUNC_7(VAR_6 >> 16);
        VAR_10 = FUNC_7(VAR_6 >> 8);
        VAR_11 = FUNC_7(VAR_6);
        VAR_2 -= 4;

        FUNC_1(VAR_8, VAR_7, VAR_13, VAR_14);
        FUNC_0(VAR_13, VAR_14, VAR_13, VAR_14);
        FUNC_2(VAR_12, VAR_12, VAR_13, VAR_14);

        FUNC_6(VAR_13, VAR_14, 7);
        FUNC_5(VAR_13, VAR_14, VAR_0);
        VAR_0 += VAR_1;

        FUNC_1(VAR_9, VAR_7, VAR_13, VAR_14);
        FUNC_0(VAR_13, VAR_14, VAR_13, VAR_14);
        FUNC_2(VAR_12, VAR_12, VAR_13, VAR_14);
        FUNC_6(VAR_13, VAR_14, 7);
        FUNC_5(VAR_13, VAR_14, VAR_0);
        VAR_0 += VAR_1;

        FUNC_1(VAR_10, VAR_7, VAR_13, VAR_14);
        FUNC_0(VAR_13, VAR_14, VAR_13, VAR_14);
        FUNC_2(VAR_12, VAR_12, VAR_13, VAR_14);
        FUNC_6(VAR_13, VAR_14, 7);
        FUNC_5(VAR_13, VAR_14, VAR_0);
        VAR_0 += VAR_1;

        FUNC_1(VAR_11, VAR_7, VAR_13, VAR_14);
        FUNC_0(VAR_13, VAR_14, VAR_13, VAR_14);
        FUNC_2(VAR_12, VAR_12, VAR_13, VAR_14);
        FUNC_6(VAR_13, VAR_14, 7);
        FUNC_5(VAR_13, VAR_14, VAR_0);
        VAR_0 += VAR_1;
    }
}
