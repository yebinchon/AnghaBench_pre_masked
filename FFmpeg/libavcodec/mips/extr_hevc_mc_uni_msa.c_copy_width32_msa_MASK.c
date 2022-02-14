
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v16u8 ;
typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, int32_t VAR_1,
                             uint8_t *VAR_2, int32_t VAR_3,
                             int32_t VAR_4)
{
    int32_t VAR_5;
    v16u8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    for (VAR_5 = (VAR_4 >> 2); VAR_5--;) {
        FUNC_0(VAR_0, VAR_1, VAR_6, VAR_7, VAR_8, VAR_9);
        FUNC_0(VAR_0 + 16, VAR_1, VAR_10, VAR_11, VAR_12, VAR_13);
        VAR_0 += (4 * VAR_1);
        FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_2, VAR_3);
        FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_2 + 16, VAR_3);
        VAR_2 += (4 * VAR_3);
    }
}
