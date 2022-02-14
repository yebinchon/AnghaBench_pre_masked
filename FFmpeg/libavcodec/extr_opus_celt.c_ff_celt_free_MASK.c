
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* dsp; int pvq; int * imdct; } ;
typedef TYPE_1__ CeltFrame ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(CeltFrame **VAR_0)
{
    CeltFrame *VAR_1 = *VAR_0;
    int VAR_2;

    if (!VAR_1)
        return;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->imdct); VAR_2++)
        FUNC_3(&VAR_1->imdct[VAR_2]);

    FUNC_2(&VAR_1->pvq);

    FUNC_1(&VAR_1->dsp);
    FUNC_1(VAR_0);
}
