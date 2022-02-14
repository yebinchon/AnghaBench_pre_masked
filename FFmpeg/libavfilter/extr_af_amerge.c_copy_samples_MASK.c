
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct amerge_input {int nb_ch; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_1(int VAR_0, struct amerge_input VAR_1[],
                                int *VAR_2, uint8_t *VAR_3[],
                                uint8_t **VAR_4, int VAR_5, int VAR_6)
{
    int *VAR_7;
    int VAR_8, VAR_9, VAR_10 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
        VAR_10 += VAR_1[VAR_8].nb_ch;
    while (VAR_5--) {
        VAR_7 = VAR_2;
        for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
            for (VAR_9 = 0; VAR_9 < VAR_1[VAR_8].nb_ch; VAR_9++) {
                FUNC_0((*VAR_4) + VAR_6 * *(VAR_7++), VAR_3[VAR_8], VAR_6);
                VAR_3[VAR_8] += VAR_6;
            }
        }
        *VAR_4 += VAR_10 * VAR_6;
    }
}
