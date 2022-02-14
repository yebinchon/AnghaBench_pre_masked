
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
typedef TYPE_1__ BT_HDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

extern void FUNC_4(void)
{
    BT_HDR *VAR_1;

    FUNC_0("BTA_DmBleStopAdvertising\n");

    if ((VAR_1 = (BT_HDR *) FUNC_3(sizeof(BT_HDR))) != ((void*)0)) {
        FUNC_2(VAR_1, 0, sizeof(BT_HDR));
        VAR_1->event = VAR_0;
        FUNC_1(VAR_1);
    }
}
