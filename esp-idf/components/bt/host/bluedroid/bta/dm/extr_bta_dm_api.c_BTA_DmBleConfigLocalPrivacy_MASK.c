
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_SET_LOCAL_PRIVACY_CBACK ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int * set_local_privacy_cback; int privacy_enable; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_LOCAL_PRIVACY ;
typedef int tBTA_DM_API_ENABLE_PRIVACY ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(BOOLEAN VAR_1, tBTA_SET_LOCAL_PRIVACY_CBACK *VAR_2)
{


    tBTA_DM_API_LOCAL_PRIVACY *VAR_3;

    if ((VAR_3 = (tBTA_DM_API_LOCAL_PRIVACY *) FUNC_3(sizeof(tBTA_DM_API_ENABLE_PRIVACY))) != ((void*)0)) {
        FUNC_2 (VAR_3, 0, sizeof(tBTA_DM_API_LOCAL_PRIVACY));

        VAR_3->hdr.event = VAR_0;
        VAR_3->privacy_enable = VAR_1;
        VAR_3->set_local_privacy_cback = VAR_2;
        FUNC_1(VAR_3);
    }



}
