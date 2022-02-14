
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_TRANSPORT ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int transport; int remove_dev; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_REMOVE_ACL ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(BD_ADDR VAR_2, BOOLEAN VAR_3, tBTA_TRANSPORT VAR_4)
{
    tBTA_DM_API_REMOVE_ACL *VAR_5;

    FUNC_0("BTA_DmCloseACL");

    if ((VAR_5 = (tBTA_DM_API_REMOVE_ACL *) FUNC_4(sizeof(tBTA_DM_API_REMOVE_ACL))) != ((void*)0)) {
        FUNC_3(VAR_5, 0, sizeof(tBTA_DM_API_REMOVE_ACL));

        VAR_5->hdr.event = VAR_1;

        FUNC_2(VAR_5->bd_addr, VAR_2, VAR_0);
        VAR_5->remove_dev = VAR_3;
        VAR_5->transport = VAR_4;

        FUNC_1(VAR_5);
    }
}
