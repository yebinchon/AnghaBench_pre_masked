
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_3__** pps_list; int const* pps; } ;
typedef TYPE_1__ HEVCParamSets ;
typedef int HEVCPPS ;


 int FUNC_0 (TYPE_3__**) ;

__attribute__((used)) static void FUNC_1(HEVCParamSets *VAR_0, int VAR_1)
{
    if (VAR_0->pps_list[VAR_1] && VAR_0->pps == (const HEVCPPS*)VAR_0->pps_list[VAR_1]->data)
        VAR_0->pps = ((void*)0);
    FUNC_0(&VAR_0->pps_list[VAR_1]);
}
