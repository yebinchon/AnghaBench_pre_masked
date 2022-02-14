
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int event; } ;
typedef TYPE_1__ BT_HDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(void)
{
    BT_HDR *VAR_1;

    FUNC_0("BTA_DisableTestMode");

    if ((VAR_1 = (BT_HDR *) FUNC_2(sizeof(BT_HDR))) != ((void*)0)) {
        VAR_1->event = VAR_0;
        FUNC_1(VAR_1);
    }
}
