
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ event; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;

void FUNC_2(tBTA_DM_MSG *VAR_1)
{
    if (VAR_1->hdr.event != VAR_0) {
        FUNC_0("Invalid BTA event,can't stop the BLE adverting\n");
    }

    FUNC_1();
}
