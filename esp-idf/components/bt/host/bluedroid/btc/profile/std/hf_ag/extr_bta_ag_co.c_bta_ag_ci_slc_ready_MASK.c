
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int layer_specific; int event; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_AG_DATA ;
typedef int UINT16 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(UINT16 VAR_1)
{
    tBTA_AG_DATA *VAR_2;
    if ((VAR_2 = (tBTA_AG_DATA *)FUNC_1(sizeof(tBTA_AG_DATA))) != ((void*)0)) {
        VAR_2->hdr.event = VAR_0;
        VAR_2->hdr.layer_specific = VAR_1;
        FUNC_0(VAR_2);
    }
}
