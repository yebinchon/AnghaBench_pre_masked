
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
struct TYPE_8__ {TYPE_5__** vps_list; TYPE_6__** sps_list; int const* vps; } ;
struct TYPE_7__ {int vps_id; } ;
typedef int HEVCVPS ;
typedef TYPE_1__ HEVCSPS ;
typedef TYPE_2__ HEVCParamSets ;


 int FUNC_0 (TYPE_6__**) ;
 int FUNC_1 (TYPE_5__**) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(HEVCParamSets *VAR_0, int VAR_1)
{
    int VAR_2;
    if (VAR_0->vps_list[VAR_1]) {
        if (VAR_0->vps == (const HEVCVPS*)VAR_0->vps_list[VAR_1]->data)
            VAR_0->vps = ((void*)0);

        for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->sps_list); VAR_2++)
            if (VAR_0->sps_list[VAR_2] && ((HEVCSPS*)VAR_0->sps_list[VAR_2]->data)->vps_id == VAR_1)
                FUNC_2(VAR_0, VAR_2);
    }
    FUNC_1(&VAR_0->vps_list[VAR_1]);
}
