
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_STATUS ;
typedef int tBTA_HF_CLIENT_CBACK ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int * p_cback; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_HF_CLIENT_API_ENABLE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int) ;

tBTA_STATUS FUNC_5(tBTA_HF_CLIENT_CBACK *VAR_5)
{
    tBTA_HF_CLIENT_API_ENABLE *VAR_6;

    if (FUNC_1 (VAR_2)) {
        FUNC_0("BTA HF Client is already enabled, ignoring ...");
        return VAR_0;
    }


    FUNC_2(VAR_2, &VAR_4);

    if ((VAR_6 = (tBTA_HF_CLIENT_API_ENABLE *) FUNC_4(sizeof(tBTA_HF_CLIENT_API_ENABLE))) != ((void*)0)) {
        VAR_6->hdr.event = VAR_1;
        VAR_6->p_cback = VAR_5;
        FUNC_3(VAR_6);
    }

    return VAR_3;
}
