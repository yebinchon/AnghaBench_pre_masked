
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int in_channels; int out_channels; int (* downmix ) (float**,float**,int) ;} ;
typedef TYPE_1__ AC3DSPContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (float**,float**,int) ;
 int FUNC_1 (float**,float**,int) ;
 int FUNC_2 (float**,float**,int,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (float**,float**,int) ;

void FUNC_5(AC3DSPContext *VAR_1, float **VAR_2, float **VAR_3,
                       int VAR_4, int VAR_5, int VAR_6)
{
    if (VAR_1->in_channels != VAR_5 || VAR_1->out_channels != VAR_4) {
        int **VAR_7 = (int **)VAR_3;

        VAR_1->in_channels = VAR_5;
        VAR_1->out_channels = VAR_4;
        VAR_1->downmix = ((void*)0);

        if (VAR_5 == 5 && VAR_4 == 2 &&
            !(VAR_7[1][0] | VAR_7[0][2] |
              VAR_7[1][3] | VAR_7[0][4] |
             (VAR_7[0][1] ^ VAR_7[1][1]) |
             (VAR_7[0][0] ^ VAR_7[1][2]))) {
            VAR_1->downmix = FUNC_1;
        } else if (VAR_5 == 5 && VAR_4 == 1 &&
                   VAR_7[0][0] == VAR_7[0][2] &&
                   VAR_7[0][3] == VAR_7[0][4]) {
            VAR_1->downmix = FUNC_0;
        }

        if (VAR_0)
            FUNC_3(VAR_1);
    }

    if (VAR_1->downmix)
        VAR_1->downmix(VAR_2, VAR_3, VAR_6);
    else
        FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
