
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_STATUS ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ BT_HDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

tBTA_STATUS FUNC_3(void)
{
    BT_HDR *VAR_3;

    FUNC_0("BTA_EnableTestMode");

    if ((VAR_3 = (BT_HDR *) FUNC_2(sizeof(BT_HDR))) != ((void*)0)) {
        VAR_3->event = VAR_0;
        FUNC_1(VAR_3);
        return VAR_2;
    }
    return VAR_1;
}
