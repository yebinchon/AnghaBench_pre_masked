
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {int sps_id; } ;
struct TYPE_7__ {TYPE_5__** sps_list; int const* sps; TYPE_6__** pps_list; } ;
typedef int const HEVCSPS ;
typedef TYPE_1__ HEVCParamSets ;
typedef TYPE_2__ HEVCPPS ;


 int FUNC_0 (TYPE_6__**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__**) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(HEVCParamSets *VAR_0, int VAR_1)
{
    int VAR_2;
    if (VAR_0->sps_list[VAR_1]) {
        if (VAR_0->sps == (const HEVCSPS*)VAR_0->sps_list[VAR_1]->data)
            VAR_0->sps = ((void*)0);


        for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->pps_list); VAR_2++)
            if (VAR_0->pps_list[VAR_2] && ((HEVCPPS*)VAR_0->pps_list[VAR_2]->data)->sps_id == VAR_1)
                FUNC_3(VAR_0, VAR_2);

        FUNC_1(!(VAR_0->sps_list[VAR_1] && VAR_0->sps == (HEVCSPS*)VAR_0->sps_list[VAR_1]->data));
    }
    FUNC_2(&VAR_0->sps_list[VAR_1]);
}
