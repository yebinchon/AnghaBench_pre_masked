
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tSDP_UUID ;
typedef int tBTA_DM_SEARCH_CBACK ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int uuid; int * p_uuid; scalar_t__ num_uuid; int sdp_search; int * p_cback; int services; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_DISCOVER ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(BD_ADDR VAR_2, tSDP_UUID *VAR_3,
                        tBTA_DM_SEARCH_CBACK *VAR_4, BOOLEAN VAR_5)
{
    tBTA_DM_API_DISCOVER *VAR_6;

    if ((VAR_6 = (tBTA_DM_API_DISCOVER *) FUNC_3(sizeof(tBTA_DM_API_DISCOVER))) != ((void*)0)) {
        VAR_6->hdr.event = VAR_0;
        FUNC_0(VAR_6->bd_addr, VAR_2);
        VAR_6->services = VAR_1;
        VAR_6->p_cback = VAR_4;
        VAR_6->sdp_search = VAR_5;


        VAR_6->num_uuid = 0;
        VAR_6->p_uuid = ((void*)0);

        FUNC_2( &VAR_6->uuid, VAR_3, sizeof(tSDP_UUID) );
        FUNC_1(VAR_6);
    }
}
