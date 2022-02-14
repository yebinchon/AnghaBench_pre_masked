
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tBT_UUID ;
struct TYPE_14__ {int num_uuid; struct TYPE_14__* p_uuid; int srvc_mask; } ;
typedef TYPE_2__ tBTA_SERVICE_MASK_EXT ;
typedef TYPE_2__ tBTA_DM_SEARCH_CBACK ;
typedef TYPE_2__ tBTA_DM_INQ ;
struct TYPE_13__ {int event; } ;
struct TYPE_15__ {int num_uuid; int * p_uuid; int services; int rs_res; TYPE_2__* p_cback; int inq_params; TYPE_1__ hdr; } ;
typedef TYPE_5__ tBTA_DM_API_SEARCH ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(tBTA_DM_INQ *VAR_2, tBTA_SERVICE_MASK_EXT *VAR_3, tBTA_DM_SEARCH_CBACK *VAR_4)
{

    tBTA_DM_API_SEARCH *VAR_5;
    UINT16 VAR_6 = VAR_3 ? (sizeof(tBTA_DM_API_SEARCH) + sizeof(tBT_UUID) * VAR_3->num_uuid) :
                  sizeof(tBTA_DM_API_SEARCH);

    if ((VAR_5 = (tBTA_DM_API_SEARCH *) FUNC_4(VAR_6)) != ((void*)0)) {
        FUNC_3(VAR_5, 0, VAR_6);

        VAR_5->hdr.event = VAR_0;
        FUNC_2(&VAR_5->inq_params, VAR_2, sizeof(tBTA_DM_INQ));
        VAR_5->p_cback = VAR_4;
        VAR_5->rs_res = VAR_1;


        if (VAR_3 != ((void*)0)) {
            VAR_5->services = VAR_3->srvc_mask;
            VAR_5->num_uuid = VAR_3->num_uuid;

            if (VAR_3->num_uuid != 0) {
                VAR_5->p_uuid = (tBT_UUID *)(VAR_5 + 1);
                FUNC_2(VAR_5->p_uuid, VAR_3->p_uuid, sizeof(tBT_UUID) * VAR_3->num_uuid);
            } else {
                VAR_5->p_uuid = ((void*)0);
            }
        }

        FUNC_1(VAR_5);
    }





}
