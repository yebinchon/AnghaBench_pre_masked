
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int bypp; scalar_t__* score_tab; } ;
typedef TYPE_1__ ZmbvEncContext ;



__attribute__((used)) static inline int FUNC_0(ZmbvEncContext *VAR_0, uint8_t *VAR_1, int VAR_2,
                            uint8_t *VAR_3, int VAR_4, int VAR_5, int VAR_6,
                            int *VAR_7)
{
    int VAR_8 = 0;
    int VAR_9, VAR_10;
    uint16_t VAR_11[256] = {0};
    int VAR_12 = VAR_5 * VAR_0->bypp;


    for(VAR_10 = 0; VAR_10 < VAR_6; VAR_10++){
        for(VAR_9 = 0; VAR_9 < VAR_12; VAR_9++){
            int VAR_13 = VAR_1[VAR_9] ^ VAR_3[VAR_9];
            VAR_11[VAR_13]++;
        }
        VAR_1 += VAR_2;
        VAR_3 += VAR_4;
    }


    *VAR_7 = (VAR_11[0] < VAR_12 * VAR_6);


    if (!*VAR_7) return 0;


    for(VAR_9 = 0; VAR_9 < 256; VAR_9++)
        VAR_8 += VAR_0->score_tab[VAR_11[VAR_9]];

    return VAR_8;
}
