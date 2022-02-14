
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

void FUNC_0(BigInt *VAR_2, uint8_t VAR_3, uint8_t *VAR_4)
{
    int VAR_5;
    uint8_t *VAR_6;
    uint16_t VAR_7, VAR_8;

    VAR_3 &= VAR_1;
    if (VAR_3 == 1 || VAR_2->nb_words == 0) {
        *VAR_4 = 0;
        return;
    }


    if (VAR_3 == 0) {
        VAR_5 = --VAR_2->nb_words;
        VAR_6 = VAR_2->words;
        *VAR_4 = *VAR_6;
        while (VAR_5--) {
            *VAR_6 = *(VAR_6 + 1);
            VAR_6++;
        }
        *VAR_6 = 0;
        return;
    }
    VAR_5 = VAR_2->nb_words;
    VAR_6 = VAR_2->words + VAR_5;
    VAR_7 = 0;
    while (VAR_5--) {
        VAR_7 <<= VAR_0;
        VAR_7 += *--VAR_6;
        VAR_8 = VAR_7 / (uint16_t)VAR_3;
        VAR_7 = VAR_7 % (uint16_t)VAR_3;
        *VAR_6 = VAR_8 & VAR_1;
    }
    *VAR_4 = VAR_7;
    if (VAR_2->words[VAR_2->nb_words - 1] == 0)
        VAR_2->nb_words--;
}
