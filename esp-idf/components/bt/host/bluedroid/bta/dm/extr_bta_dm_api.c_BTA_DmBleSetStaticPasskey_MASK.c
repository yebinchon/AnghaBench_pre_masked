
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int add; int static_passkey; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_SET_DEFAULT_PASSKEY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(bool VAR_1, uint32_t VAR_2)
{
    tBTA_DM_API_SET_DEFAULT_PASSKEY *VAR_3;

    if ((VAR_3 = (tBTA_DM_API_SET_DEFAULT_PASSKEY *) FUNC_2(sizeof(tBTA_DM_API_SET_DEFAULT_PASSKEY))) != ((void*)0)) {
        FUNC_1(VAR_3, 0, sizeof(tBTA_DM_API_SET_DEFAULT_PASSKEY));

        VAR_3->hdr.event = VAR_0;
        VAR_3->add = VAR_1;
        VAR_3->static_passkey = VAR_2;
        FUNC_0(VAR_3);
    }
}
