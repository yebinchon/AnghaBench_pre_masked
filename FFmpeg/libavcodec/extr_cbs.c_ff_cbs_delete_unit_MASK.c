
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_units; int * units; } ;
typedef TYPE_1__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;

void FUNC_3(CodedBitstreamContext *VAR_0,
                        CodedBitstreamFragment *VAR_1,
                        int VAR_2)
{
    FUNC_0(0 <= VAR_2 && VAR_2 < VAR_1->nb_units
                             && "Unit to be deleted not in fragment.");

    FUNC_1(VAR_0, &VAR_1->units[VAR_2]);

    --VAR_1->nb_units;

    if (VAR_1->nb_units > 0)
        FUNC_2(VAR_1->units + VAR_2,
                VAR_1->units + VAR_2 + 1,
                (VAR_1->nb_units - VAR_2) * sizeof(*VAR_1->units));
}
