
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_3__ {int layer_specific; scalar_t__ offset; scalar_t__ len; int event; } ;
typedef TYPE_1__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3 (UINT16 VAR_4)
{
    BT_HDR *VAR_5;

    if ((VAR_5 = (BT_HDR *)FUNC_2(VAR_3)) != ((void*)0)) {
        VAR_5->event = VAR_2;
        VAR_5->len = 0;
        VAR_5->offset = 0;
        VAR_5->layer_specific = VAR_4;

        FUNC_1(VAR_1, VAR_0, VAR_5);
    } else {
        FUNC_0("Unable to allocate message buffer for event.");
    }
}
