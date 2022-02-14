
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_units; scalar_t__ data_bit_padding; scalar_t__ data_size; int * data; int data_ref; int * units; } ;
typedef TYPE_1__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(CodedBitstreamContext *VAR_0,
                           CodedBitstreamFragment *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_units; VAR_2++)
        FUNC_1(VAR_0, &VAR_1->units[VAR_2]);
    VAR_1->nb_units = 0;

    FUNC_0(&VAR_1->data_ref);
    VAR_1->data = ((void*)0);
    VAR_1->data_size = 0;
    VAR_1->data_bit_padding = 0;
}
