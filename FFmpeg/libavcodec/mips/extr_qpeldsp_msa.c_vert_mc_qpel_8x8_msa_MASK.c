
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v16u8 ;
typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int,int ,int ) ;
 int FUNC_3 (int const*,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(const uint8_t *VAR_0,
                                 int32_t VAR_1,
                                 uint8_t *VAR_2,
                                 int32_t VAR_3)
{
    v16u8 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v16u8 VAR_13, VAR_14;
    v16u8 VAR_15 = (v16u8) FUNC_5(20);
    v16u8 VAR_16 = (v16u8) FUNC_5(6);
    v16u8 VAR_17 = (v16u8) FUNC_5(3);

    FUNC_3(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6, VAR_7);
    VAR_0 += (4 * VAR_1);
    FUNC_2(VAR_0, VAR_1, VAR_8, VAR_9);
    VAR_0 += (2 * VAR_1);
    VAR_13 = FUNC_0(VAR_4, VAR_4, VAR_5, VAR_6,
                                        VAR_5, VAR_6, VAR_7, VAR_8,
                                        VAR_5, VAR_4, VAR_4, VAR_5,
                                        VAR_6, VAR_7, VAR_8, VAR_9,
                                        VAR_15, VAR_16, VAR_17);
    FUNC_2(VAR_0, VAR_1, VAR_10, VAR_11);
    VAR_0 += (2 * VAR_1);
    VAR_14 = FUNC_0(VAR_6, VAR_5, VAR_4, VAR_4,
                                        VAR_7, VAR_8, VAR_9, VAR_10,
                                        VAR_7, VAR_6, VAR_5, VAR_4,
                                        VAR_8, VAR_9, VAR_10, VAR_11,
                                        VAR_15, VAR_16, VAR_17);
    FUNC_4(VAR_13, VAR_14, 0, 1, 0, 1, VAR_2, VAR_3);

    VAR_12 = FUNC_1(VAR_0);
    VAR_13 = FUNC_0(VAR_8, VAR_7, VAR_6, VAR_5,
                                        VAR_9, VAR_10, VAR_11, VAR_12,
                                        VAR_9, VAR_8, VAR_7, VAR_6,
                                        VAR_10, VAR_11, VAR_12, VAR_12,
                                        VAR_15, VAR_16, VAR_17);
    VAR_14 = FUNC_0(VAR_10, VAR_9, VAR_8, VAR_7,
                                        VAR_11, VAR_12, VAR_12, VAR_11,
                                        VAR_11, VAR_10, VAR_9, VAR_8,
                                        VAR_12, VAR_12, VAR_11, VAR_10,
                                        VAR_15, VAR_16, VAR_17);
    FUNC_4(VAR_13, VAR_14, 0, 1, 0, 1, VAR_2 + 4 * VAR_3, VAR_3);
}
