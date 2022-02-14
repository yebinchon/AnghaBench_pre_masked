
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16u8 ;
typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(int16_t *VAR_2, uint8_t *VAR_3,
                                    int32_t VAR_4)
{
    int32_t VAR_5;
    int16_t VAR_6;
    v16u8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v8i16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

    VAR_6 = FUNC_4((VAR_2[0] * VAR_1), VAR_0);
    VAR_6 = FUNC_4((VAR_6 * VAR_1), VAR_0);
    VAR_6 = FUNC_4(VAR_6, 6);
    VAR_2[0] = 0;

    VAR_23 = FUNC_7(VAR_6);

    for (VAR_5 = 16; VAR_5--;) {
        FUNC_2(VAR_3, 16, VAR_7, VAR_8);
        FUNC_2(VAR_3 + VAR_4, 16, VAR_9, VAR_10);

        FUNC_6(VAR_7, VAR_15, VAR_19);
        FUNC_6(VAR_8, VAR_16, VAR_20);
        FUNC_6(VAR_9, VAR_17, VAR_21);
        FUNC_6(VAR_10, VAR_18, VAR_22);
        FUNC_0(VAR_15, VAR_23, VAR_16, VAR_23, VAR_17, VAR_23, VAR_18, VAR_23, VAR_15, VAR_16, VAR_17,
             VAR_18);
        FUNC_0(VAR_19, VAR_23, VAR_20, VAR_23, VAR_21, VAR_23, VAR_22, VAR_23, VAR_19, VAR_20, VAR_21,
             VAR_22);
        FUNC_1(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);
        FUNC_3(VAR_19, VAR_15, VAR_20, VAR_16, VAR_21, VAR_17, VAR_22, VAR_18,
                    VAR_11, VAR_12, VAR_13, VAR_14);

        FUNC_5(VAR_11, VAR_12, VAR_3, 16);
        VAR_3 += VAR_4;
        FUNC_5(VAR_13, VAR_14, VAR_3, 16);
        VAR_3 += VAR_4;
    }
}
