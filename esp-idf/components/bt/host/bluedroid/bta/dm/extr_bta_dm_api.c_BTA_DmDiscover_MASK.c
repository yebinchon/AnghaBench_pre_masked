
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_SERVICE_MASK ;
typedef int tBTA_DM_SEARCH_CBACK ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int sdp_search; int * p_cback; int services; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_DISCOVER ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(BD_ADDR VAR_1, tBTA_SERVICE_MASK VAR_2,
                    tBTA_DM_SEARCH_CBACK *VAR_3, BOOLEAN VAR_4)
{
    tBTA_DM_API_DISCOVER *VAR_5;

    if ((VAR_5 = (tBTA_DM_API_DISCOVER *) FUNC_3(sizeof(tBTA_DM_API_DISCOVER))) != ((void*)0)) {
        FUNC_2(VAR_5, 0, sizeof(tBTA_DM_API_DISCOVER));

        VAR_5->hdr.event = VAR_0;
        FUNC_0(VAR_5->bd_addr, VAR_1);
        VAR_5->services = VAR_2;
        VAR_5->p_cback = VAR_3;
        VAR_5->sdp_search = VAR_4;
        FUNC_1(VAR_5);
    }
}
