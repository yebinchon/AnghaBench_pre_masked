
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_STATUS ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

tBTA_STATUS FUNC_2(void)
{

    BT_HDR *VAR_3;

    if ((VAR_3 = (BT_HDR *) FUNC_1(sizeof(BT_HDR))) != ((void*)0)) {
        VAR_3->event = VAR_0;
        FUNC_0(VAR_3);
    } else {
        return VAR_1;
    }

    return VAR_2;
}
