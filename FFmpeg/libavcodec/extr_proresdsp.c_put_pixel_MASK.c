
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static inline void FUNC_2(uint16_t *VAR_0, ptrdiff_t VAR_1, const int16_t *VAR_2, int VAR_3) {
    int VAR_4, VAR_5, VAR_6, VAR_7;

    for (VAR_5 = 0, VAR_7 = 0; VAR_5 < 8; VAR_5++, VAR_7 += VAR_1) {
        for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
            VAR_6 = (VAR_5 << 3) + VAR_4;

            if (VAR_3 == 10) {
                VAR_0[VAR_7 + VAR_4] = FUNC_0(VAR_2[VAR_6]);
            } else {
                VAR_0[VAR_7 + VAR_4] = FUNC_1(VAR_2[VAR_6]);
            }
        }
    }
}
