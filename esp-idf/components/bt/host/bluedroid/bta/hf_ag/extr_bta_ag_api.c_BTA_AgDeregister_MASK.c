
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_3__ {int layer_specific; int event; } ;
typedef TYPE_1__ BT_HDR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(UINT16 VAR_1)
{
    BT_HDR *VAR_2;
    if ((VAR_2 = (BT_HDR *) FUNC_1(sizeof(BT_HDR))) != ((void*)0)) {
        VAR_2->event = VAR_0;
        VAR_2->layer_specific = VAR_1;
        FUNC_0(VAR_2);
    }
}
