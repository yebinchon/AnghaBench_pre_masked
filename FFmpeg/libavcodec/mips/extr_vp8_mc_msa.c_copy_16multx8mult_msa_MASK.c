
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v16u8 ;
typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, int32_t VAR_1,
                                  uint8_t *VAR_2, int32_t VAR_3,
                                  int32_t VAR_4, int32_t VAR_5)
{
    int32_t VAR_6, VAR_7;
    uint8_t *VAR_8, *VAR_9;
    v16u8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

    for (VAR_6 = (VAR_5 >> 4); VAR_6--;) {
        VAR_8 = VAR_0;
        VAR_9 = VAR_2;

        for (VAR_7 = (VAR_4 >> 3); VAR_7--;) {
            FUNC_0(VAR_8, VAR_1,
                   VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);
            VAR_8 += (8 * VAR_1);

            FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17,
                   VAR_9, VAR_3);
            VAR_9 += (8 * VAR_3);
        }

        VAR_0 += 16;
        VAR_2 += 16;
    }
}
