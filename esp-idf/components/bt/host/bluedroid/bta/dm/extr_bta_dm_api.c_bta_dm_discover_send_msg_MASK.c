
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tBT_UUID ;
typedef int tBTA_TRANSPORT ;
struct TYPE_8__ {int num_uuid; int p_uuid; int srvc_mask; } ;
typedef TYPE_2__ tBTA_SERVICE_MASK_EXT ;
typedef int tBTA_DM_SEARCH_CBACK ;
struct TYPE_7__ {int event; } ;
struct TYPE_9__ {int num_uuid; int * p_uuid; int services; int transport; int sdp_search; int * p_cback; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_3__ tBTA_DM_API_DISCOVER ;
typedef int UINT16 ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(BD_ADDR VAR_1, tBTA_SERVICE_MASK_EXT *VAR_2,
                                     tBTA_DM_SEARCH_CBACK *VAR_3, BOOLEAN VAR_4,
                                     tBTA_TRANSPORT VAR_5)
{
    tBTA_DM_API_DISCOVER *VAR_6;
    UINT16 VAR_7 = VAR_2 ? (sizeof(tBTA_DM_API_DISCOVER) +
                                sizeof(tBT_UUID) * VAR_2->num_uuid) :
                  sizeof(tBTA_DM_API_DISCOVER);

    if ((VAR_6 = (tBTA_DM_API_DISCOVER *) FUNC_4(VAR_7)) != ((void*)0)) {
        FUNC_3(VAR_6, 0, VAR_7);

        VAR_6->hdr.event = VAR_0;
        FUNC_0(VAR_6->bd_addr, VAR_1);
        VAR_6->p_cback = VAR_3;
        VAR_6->sdp_search = VAR_4;
        VAR_6->transport = VAR_5;

        if (VAR_2 != ((void*)0)) {

            VAR_6->services = VAR_2->srvc_mask;
            VAR_6->num_uuid = VAR_2->num_uuid;
            if (VAR_2->num_uuid != 0) {
                VAR_6->p_uuid = (tBT_UUID *)(VAR_6 + 1);
                FUNC_2(VAR_6->p_uuid, VAR_2->p_uuid, sizeof(tBT_UUID) * VAR_2->num_uuid);
            }

        }

        FUNC_1(VAR_6);
    }
}
