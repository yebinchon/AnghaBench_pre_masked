
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_1(
    uint8_t *VAR_0, const uint8_t *VAR_1, const uint8_t *VAR_2,
    int VAR_3, int VAR_4, int VAR_5) {
    int VAR_6, VAR_7;
    for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
        for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
            const size_t VAR_8 = VAR_5 * (VAR_3 * VAR_6 + VAR_7);
            const size_t VAR_9 = VAR_5 * (VAR_3 * VAR_6 + VAR_2[VAR_7]);

            FUNC_0(&VAR_0[VAR_9], &VAR_1[VAR_8], VAR_5);
        }
    }
}
