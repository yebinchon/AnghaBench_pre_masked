
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nb_bsfs; int * bsfs; } ;
typedef TYPE_1__ AVBSFList ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__**) ;

void FUNC_3(AVBSFList **VAR_0)
{
    int VAR_1;

    if (!*VAR_0)
        return;

    for (VAR_1 = 0; VAR_1 < (*VAR_0)->nb_bsfs; ++VAR_1)
        FUNC_0(&(*VAR_0)->bsfs[VAR_1]);
    FUNC_1((*VAR_0)->bsfs);
    FUNC_2(VAR_0);
}
