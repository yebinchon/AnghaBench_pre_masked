
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int,int,int,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int,int,int,int,int) ;
 int FUNC_6 (int,int,int,int,int) ;
 int FUNC_7 (int,int,int,int,int) ;
 int FUNC_8 (int,int ,int *) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ,int,int ,int,int *,int) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int,int) ;
 scalar_t__ FUNC_16 (int ,int) ;
 scalar_t__ FUNC_17 (int ,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_18(uint8_t *VAR_1, uint8_t *VAR_2,
                                      int32_t VAR_3, uint32_t VAR_4,
                                      uint32_t VAR_5, int32_t VAR_6)
{
    uint32_t VAR_7;
    v16u8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v8u16 VAR_14, VAR_15, VAR_16, VAR_17;
    v16i8 VAR_18;
    v16i8 VAR_19 = FUNC_12(VAR_4);
    v16i8 VAR_20 = FUNC_12(VAR_5);
    v16u8 VAR_21 = (v16u8) FUNC_13(VAR_19, VAR_20);

    VAR_18 = FUNC_1(&VAR_0[32]);

    for (VAR_7 = VAR_6 >> 2; VAR_7--;) {
        FUNC_3(VAR_1, VAR_3, VAR_8, VAR_9, VAR_10, VAR_11);
        VAR_1 += (4 * VAR_3);

        FUNC_10(VAR_8, VAR_8, VAR_9, VAR_9, VAR_18, VAR_18, VAR_8, VAR_9);
        FUNC_10(VAR_10, VAR_10, VAR_11, VAR_11, VAR_18, VAR_18, VAR_10, VAR_11);
        FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11, VAR_21, VAR_21, VAR_21,
                    VAR_21, VAR_14, VAR_15, VAR_16, VAR_17);
        FUNC_6(VAR_14, VAR_15, VAR_16, VAR_17, 3);
        FUNC_7(VAR_14, VAR_15, VAR_16, VAR_17, 6);
        FUNC_5(VAR_14, VAR_15, VAR_16, VAR_17, 7);
        FUNC_4(VAR_15, VAR_14, VAR_17, VAR_16, VAR_12, VAR_13);
        FUNC_9(VAR_12, VAR_13, 0, 1, 0, 1, VAR_2, VAR_3);
        VAR_2 += (4 * VAR_3);
    }

    if (0 != (VAR_6 % 4)) {
        for (VAR_7 = (VAR_6 % 4); VAR_7--;) {
            VAR_8 = FUNC_2(VAR_1);
            VAR_1 += VAR_3;

            VAR_8 = (v16u8) FUNC_17(VAR_18, (v16i8) VAR_8, (v16i8) VAR_8);

            VAR_14 = FUNC_11(VAR_8, VAR_21);
            VAR_14 <<= 3;
            VAR_14 = (v8u16) FUNC_16((v8i16) VAR_14, 6);
            VAR_14 = FUNC_15(VAR_14, 7);
            VAR_14 = (v8u16) FUNC_14((v16i8) VAR_14, (v16i8) VAR_14);

            FUNC_8(VAR_14, 0, VAR_2);
            VAR_2 += VAR_3;
        }
    }
}
