
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char const*,int*) ;

__attribute__((used)) static void FUNC_1(const uint8_t *VAR_2, int VAR_3,
                        int *VAR_4, int *VAR_5, int *VAR_6) {
    uint32_t VAR_7;
    const uint8_t *VAR_8 = VAR_2 + VAR_3, *VAR_9 = VAR_2;

    while (VAR_9 < VAR_8) {
        VAR_7 = -1;
        VAR_9 = FUNC_0(VAR_9, VAR_8, &VAR_7);

        if (VAR_7 == VAR_0 && VAR_4) {

            for (int VAR_10 = 0; VAR_10 < 255 && VAR_9 + VAR_10 + 1 < VAR_8; VAR_10++) {
                if (VAR_9[VAR_10] == 'p' && VAR_9[VAR_10 + 1] == '\0') {
                    *VAR_4 = VAR_9 + VAR_10 - VAR_2;
                    break;
                }
            }
        } else if (VAR_7 == VAR_1 && VAR_5) {
            *VAR_5 += 1;
            if (*VAR_5 == 2 && VAR_6) {
                *VAR_6 = VAR_9 - VAR_2 - 4;
            }
        }
    }
}
