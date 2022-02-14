
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vps; int * pps; int * sps; int * pps_list; int * sps_list; int * vps_list; } ;
typedef TYPE_1__ HEVCParamSets ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(HEVCParamSets *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->vps_list); VAR_1++)
        FUNC_1(&VAR_0->vps_list[VAR_1]);
    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->sps_list); VAR_1++)
        FUNC_1(&VAR_0->sps_list[VAR_1]);
    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->pps_list); VAR_1++)
        FUNC_1(&VAR_0->pps_list[VAR_1]);

    VAR_0->sps = ((void*)0);
    VAR_0->pps = ((void*)0);
    VAR_0->vps = ((void*)0);
}
