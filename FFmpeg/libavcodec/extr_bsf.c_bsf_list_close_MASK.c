
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int nb_bsfs; int * item_name; int * bsfs; } ;
typedef TYPE_1__ BSFListContext ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static void FUNC_2(AVBSFContext *VAR_0)
{
    BSFListContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_bsfs; ++VAR_2)
        FUNC_0(&VAR_1->bsfs[VAR_2]);
    FUNC_1(&VAR_1->bsfs);
    FUNC_1(&VAR_1->item_name);
}
