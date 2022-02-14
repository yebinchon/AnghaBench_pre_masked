
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const uint8_t *VAR_0,
                                            const uint8_t *VAR_1,
                                            uint8_t *VAR_2, int32_t VAR_3)
{
    uint32_t VAR_4;
    uint8_t VAR_5, VAR_6, VAR_7, VAR_8;
    v16i8 VAR_9, VAR_10, VAR_11, VAR_12;

    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        VAR_5 = VAR_1[VAR_4 * 4];
        VAR_6 = VAR_1[VAR_4 * 4 + 1];
        VAR_7 = VAR_1[VAR_4 * 4 + 2];
        VAR_8 = VAR_1[VAR_4 * 4 + 3];

        VAR_9 = FUNC_1(VAR_5);
        VAR_10 = FUNC_1(VAR_6);
        VAR_11 = FUNC_1(VAR_7);
        VAR_12 = FUNC_1(VAR_8);

        FUNC_0(VAR_9, VAR_9, VAR_2, 16);
        VAR_2 += VAR_3;
        FUNC_0(VAR_10, VAR_10, VAR_2, 16);
        VAR_2 += VAR_3;
        FUNC_0(VAR_11, VAR_11, VAR_2, 16);
        VAR_2 += VAR_3;
        FUNC_0(VAR_12, VAR_12, VAR_2, 16);
        VAR_2 += VAR_3;
    }
}
