
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nb_units_allocated; int units; } ;
typedef TYPE_1__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void FUNC_2(CodedBitstreamContext *VAR_0,
                          CodedBitstreamFragment *VAR_1)
{
    FUNC_1(VAR_0, VAR_1);

    FUNC_0(&VAR_1->units);
    VAR_1->nb_units_allocated = 0;
}
