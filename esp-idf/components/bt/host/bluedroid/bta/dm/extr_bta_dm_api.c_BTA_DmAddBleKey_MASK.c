
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_LE_KEY_VALUE ;
typedef int tBTA_LE_KEY_TYPE ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int blekey; int bd_addr; int key_type; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_ADD_BLEKEY ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5 (BD_ADDR VAR_1, tBTA_LE_KEY_VALUE *VAR_2, tBTA_LE_KEY_TYPE VAR_3)
{
    tBTA_DM_API_ADD_BLEKEY *VAR_4;

    if ((VAR_4 = (tBTA_DM_API_ADD_BLEKEY *) FUNC_4(sizeof(tBTA_DM_API_ADD_BLEKEY))) != ((void*)0)) {
        FUNC_3 (VAR_4, 0, sizeof(tBTA_DM_API_ADD_BLEKEY));

        VAR_4->hdr.event = VAR_0;
        VAR_4->key_type = VAR_3;
        FUNC_0(VAR_4->bd_addr, VAR_1);
        FUNC_2(&VAR_4->blekey, VAR_2, sizeof(tBTA_LE_KEY_VALUE));

        FUNC_1(VAR_4);
    }

}
