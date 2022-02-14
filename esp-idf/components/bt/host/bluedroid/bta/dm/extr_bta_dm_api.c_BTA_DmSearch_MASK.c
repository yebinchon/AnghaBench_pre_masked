
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_SERVICE_MASK ;
typedef int tBTA_DM_SEARCH_CBACK ;
typedef int tBTA_DM_INQ ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int rs_res; int * p_cback; int services; int inq_params; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_SEARCH ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(tBTA_DM_INQ *VAR_2, tBTA_SERVICE_MASK VAR_3, tBTA_DM_SEARCH_CBACK *VAR_4)
{

    tBTA_DM_API_SEARCH *VAR_5;

    if ((VAR_5 = (tBTA_DM_API_SEARCH *) FUNC_3(sizeof(tBTA_DM_API_SEARCH))) != ((void*)0)) {
        FUNC_2(VAR_5, 0, sizeof(tBTA_DM_API_SEARCH));

        VAR_5->hdr.event = VAR_0;
        FUNC_1(&VAR_5->inq_params, VAR_2, sizeof(tBTA_DM_INQ));
        VAR_5->services = VAR_3;
        VAR_5->p_cback = VAR_4;
        VAR_5->rs_res = VAR_1;
        FUNC_0(VAR_5);
    }

}
