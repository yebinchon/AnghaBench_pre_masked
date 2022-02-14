
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
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int) ;
 int FUNC_7 (int ,int ,int ,int ,int) ;
 int FUNC_8 (int ,int ,int ,int,int ,int,int *,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(uint8_t *VAR_0, int32_t VAR_1,
                                     uint8_t *VAR_2, int32_t VAR_3,
                                     const int8_t *VAR_4, int32_t VAR_5)
{
    uint32_t VAR_6;
    v16u8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v16u8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    v16i8 VAR_25, VAR_26;
    v8u16 VAR_27, VAR_28, VAR_29, VAR_30;
    v8i16 VAR_31;


    VAR_31 = FUNC_2(VAR_4);
    VAR_24 = (v16u8) FUNC_9(VAR_31, 0);

    VAR_7 = FUNC_3(VAR_0);
    VAR_0 += VAR_1;

    for (VAR_6 = (VAR_5 >> 3); VAR_6--;) {
        FUNC_4(VAR_0, VAR_1, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
        VAR_0 += (8 * VAR_1);

        FUNC_1(VAR_8, VAR_7, VAR_9, VAR_8, VAR_10, VAR_9, VAR_11, VAR_10,
                   VAR_16, VAR_17, VAR_18, VAR_19);
        FUNC_1(VAR_12, VAR_11, VAR_13, VAR_12, VAR_14, VAR_13, VAR_15, VAR_14,
                   VAR_20, VAR_21, VAR_22, VAR_23);
        FUNC_0(VAR_16, VAR_17, VAR_18, VAR_19, VAR_24, VAR_24, VAR_24, VAR_24,
                    VAR_27, VAR_28, VAR_29, VAR_30);
        FUNC_7(VAR_27, VAR_28, VAR_29, VAR_30, 7);
        FUNC_6(VAR_27, VAR_28, VAR_29, VAR_30, 7);
        FUNC_5(VAR_28, VAR_27, VAR_30, VAR_29, VAR_25, VAR_26);
        FUNC_8(VAR_25, VAR_26, 0, 1, 0, 1, VAR_2, VAR_3);

        FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_24, VAR_24, VAR_24,
                    VAR_27, VAR_28, VAR_29, VAR_30);
        FUNC_7(VAR_27, VAR_28, VAR_29, VAR_30, 7);
        FUNC_6(VAR_27, VAR_28, VAR_29, VAR_30, 7);
        FUNC_5(VAR_28, VAR_27, VAR_30, VAR_29, VAR_25, VAR_26);
        FUNC_8(VAR_25, VAR_26, 0, 1, 0, 1, VAR_2 + 4 * VAR_3, VAR_3);
        VAR_2 += (8 * VAR_3);

        VAR_7 = VAR_15;
    }
}
