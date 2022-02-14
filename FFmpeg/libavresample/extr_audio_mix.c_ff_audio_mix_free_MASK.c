
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int matrix_flt; int matrix_q15; int matrix_q8; int * matrix; } ;
typedef TYPE_1__ AudioMix ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(AudioMix **VAR_0)
{
    AudioMix *VAR_1;

    if (!*VAR_0)
        return;
    VAR_1 = *VAR_0;

    if (VAR_1->matrix) {
        FUNC_0(VAR_1->matrix[0]);
        VAR_1->matrix = ((void*)0);
    }
    FUNC_2(VAR_1->matrix_q8, 0, sizeof(VAR_1->matrix_q8 ));
    FUNC_2(VAR_1->matrix_q15, 0, sizeof(VAR_1->matrix_q15));
    FUNC_2(VAR_1->matrix_flt, 0, sizeof(VAR_1->matrix_flt));

    FUNC_1(VAR_0);
}
