
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_1(uint8_t *VAR_0, int VAR_1, int VAR_2,
                                   int VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += 4) {
        VAR_6 = FUNC_0(VAR_0 + 2 * VAR_1, VAR_2, VAR_4);
        if (VAR_6) {
            FUNC_0(VAR_0 + 0 * VAR_1, VAR_2, VAR_4);
            FUNC_0(VAR_0 + 1 * VAR_1, VAR_2, VAR_4);
            FUNC_0(VAR_0 + 3 * VAR_1, VAR_2, VAR_4);
        }
        VAR_0 += VAR_1 * 4;
    }
}
