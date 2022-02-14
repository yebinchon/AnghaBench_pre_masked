
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int nb_words; int* words; } ;
typedef TYPE_1__ BigInt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

void FUNC_1(BigInt *VAR_3, uint8_t VAR_4)
{
    int VAR_5;
    uint8_t *VAR_6;
    uint16_t VAR_7;

    VAR_4 &= VAR_2;
    if (VAR_4 == 1 || VAR_3->nb_words == 0)
        return;
    if (VAR_4 == 0) {

        FUNC_0(VAR_3->nb_words < VAR_1);
        VAR_5 = VAR_3->nb_words++;
        VAR_6 = VAR_3->words + VAR_5;
        while (VAR_5--) {
            *VAR_6 = *(VAR_6 - 1);
            VAR_6--;
        }
        *VAR_6 = 0;
        return;
    }
    VAR_5 = VAR_3->nb_words;
    VAR_6 = VAR_3->words;
    VAR_7 = 0;
    while (VAR_5--) {
        VAR_7 += (uint16_t)*VAR_6 * (uint16_t)VAR_4;
        *(VAR_6++) = VAR_7 & VAR_2;
        VAR_7 >>= VAR_0;
    }
    if (VAR_7) {
        FUNC_0(VAR_3->nb_words < VAR_1);
        VAR_3->nb_words++;
        *VAR_6 = VAR_7 & VAR_2;
    }
}
