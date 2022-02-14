
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum FilterMode { ____Placeholder_FilterMode } FilterMode ;





 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2, int VAR_3,
                       int VAR_4, int VAR_5,
                       enum FilterMode VAR_6, int VAR_7)
{
    const int VAR_8 = VAR_7;
    const int VAR_9 = 1 - VAR_8;
    const int VAR_10 = VAR_3 >> 1;
    int VAR_11;

    switch (VAR_6) {
    case 130:
        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            FUNC_0(VAR_0 + VAR_4 * VAR_11 , VAR_1 + VAR_5 * (VAR_11 * 2 + VAR_8), VAR_2);
            FUNC_0(VAR_0 + VAR_4 * (VAR_11 + VAR_10), VAR_1 + VAR_5 * (VAR_11 * 2 + VAR_9), VAR_2);
        }
        break;
    case 128:
        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            FUNC_0(VAR_0 + VAR_4 * VAR_11 * 2 , VAR_1 + VAR_5 * (VAR_11 * 2 + VAR_8), VAR_2);
            FUNC_0(VAR_0 + VAR_4 * (VAR_11 * 2 + 1), VAR_1 + VAR_5 * (VAR_11 * 2 + VAR_9), VAR_2);
        }
        break;
    case 129:
        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            FUNC_0(VAR_0 + VAR_4 * (VAR_11 * 2 + VAR_8), VAR_1 + VAR_5 * VAR_11 , VAR_2);
            FUNC_0(VAR_0 + VAR_4 * (VAR_11 * 2 + VAR_9), VAR_1 + VAR_5 * (VAR_11 + VAR_10), VAR_2);
        }
        break;
    }
}
