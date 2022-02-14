
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
struct TYPE_3__ {int in_channels; int out_channels; int (* downmix_fixed ) (int **,int**,int) ;} ;
typedef TYPE_1__ AC3DSPContext ;


 int FUNC_0 (int **,int**,int) ;
 int FUNC_1 (int **,int**,int) ;
 int FUNC_2 (int **,int**,int,int,int) ;
 int FUNC_3 (int **,int**,int) ;

void FUNC_4(AC3DSPContext *VAR_0, int32_t **VAR_1, int16_t **VAR_2,
                             int VAR_3, int VAR_4, int VAR_5)
{
    if (VAR_0->in_channels != VAR_4 || VAR_0->out_channels != VAR_3) {
        VAR_0->in_channels = VAR_4;
        VAR_0->out_channels = VAR_3;
        VAR_0->downmix_fixed = ((void*)0);

        if (VAR_4 == 5 && VAR_3 == 2 &&
            !(VAR_2[1][0] | VAR_2[0][2] |
              VAR_2[1][3] | VAR_2[0][4] |
             (VAR_2[0][1] ^ VAR_2[1][1]) |
             (VAR_2[0][0] ^ VAR_2[1][2]))) {
            VAR_0->downmix_fixed = FUNC_1;
        } else if (VAR_4 == 5 && VAR_3 == 1 &&
                   VAR_2[0][0] == VAR_2[0][2] &&
                   VAR_2[0][3] == VAR_2[0][4]) {
            VAR_0->downmix_fixed = FUNC_0;
        }
    }

    if (VAR_0->downmix_fixed)
        VAR_0->downmix_fixed(VAR_1, VAR_2, VAR_5);
    else
        FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
