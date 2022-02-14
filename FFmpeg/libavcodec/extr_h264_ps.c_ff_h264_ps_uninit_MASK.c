
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sps; int * pps; int pps_ref; int sps_ref; int * pps_list; int * sps_list; } ;
typedef TYPE_1__ H264ParamSets ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(H264ParamSets *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        FUNC_0(&VAR_2->sps_list[VAR_3]);

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        FUNC_0(&VAR_2->pps_list[VAR_3]);

    FUNC_0(&VAR_2->sps_ref);
    FUNC_0(&VAR_2->pps_ref);

    VAR_2->pps = ((void*)0);
    VAR_2->sps = ((void*)0);
}
