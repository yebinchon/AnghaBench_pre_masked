
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int layer_specific; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_GATTC_DATA ;
typedef int tBTA_GATTC_CLCB ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(tBTA_GATTC_CLCB *VAR_0, tBTA_GATTC_DATA *VAR_1)
{
    FUNC_1(VAR_0);



    FUNC_0("bta_gattc_ignore_op_cmpl op = %d", VAR_1->hdr.layer_specific);

}
