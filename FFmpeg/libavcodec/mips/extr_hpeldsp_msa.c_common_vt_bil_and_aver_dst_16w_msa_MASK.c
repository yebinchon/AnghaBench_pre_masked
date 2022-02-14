
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v16u8 ;
typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int*,int) ;

__attribute__((used)) static void FUNC_4(const uint8_t *VAR_0,
                                               int32_t VAR_1,
                                               uint8_t *VAR_2, int32_t VAR_3,
                                               uint8_t VAR_4)
{
    uint8_t VAR_5;
    v16u8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v16u8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    v16u8 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;

    VAR_6 = FUNC_1(VAR_0);
    VAR_0 += VAR_1;

    for (VAR_5 = (VAR_4 >> 3); VAR_5--;) {
        FUNC_2(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
        VAR_0 += (8 * VAR_1);
        FUNC_0(VAR_6, VAR_7, VAR_7, VAR_8, VAR_8, VAR_9, VAR_9, VAR_10,
                    VAR_15, VAR_16, VAR_17, VAR_18);
        FUNC_0(VAR_10, VAR_11, VAR_11, VAR_12, VAR_12, VAR_13, VAR_13, VAR_14,
                    VAR_19, VAR_20, VAR_21, VAR_22);

        FUNC_2(VAR_2, VAR_3, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30);
        FUNC_0(VAR_23, VAR_15, VAR_24, VAR_16, VAR_25, VAR_17, VAR_26, VAR_18,
                    VAR_15, VAR_16, VAR_17, VAR_18);
        FUNC_0(VAR_27, VAR_19, VAR_28, VAR_20, VAR_29, VAR_21, VAR_30, VAR_22,
                    VAR_19, VAR_20, VAR_21, VAR_22);
        FUNC_3(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_2, VAR_3);
        VAR_2 += (8 * VAR_3);

        VAR_6 = VAR_14;
    }
}
