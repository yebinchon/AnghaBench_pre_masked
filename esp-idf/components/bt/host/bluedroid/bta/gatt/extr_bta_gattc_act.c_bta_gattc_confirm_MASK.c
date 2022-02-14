
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int layer_specific; } ;
struct TYPE_8__ {TYPE_1__ hdr; int handle; } ;
struct TYPE_9__ {TYPE_2__ api_confirm; } ;
typedef TYPE_3__ tBTA_GATTC_DATA ;
struct TYPE_10__ {scalar_t__ transport; int bda; } ;
typedef TYPE_4__ tBTA_GATTC_CLCB ;
typedef int UINT16 ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(tBTA_GATTC_CLCB *VAR_4, tBTA_GATTC_DATA *VAR_5)
{
    UINT16 VAR_6 = VAR_5->api_confirm.handle;

    if (FUNC_1(VAR_5->api_confirm.hdr.layer_specific, VAR_6)
        != VAR_3) {
            FUNC_0("bta_gattc_confirm to handle [0x%04x] failed", VAR_6);
    } else {

        if (VAR_4->transport == VAR_2) {
            FUNC_2(VAR_1, VAR_0, VAR_4->bda);
            FUNC_3(VAR_1, VAR_0, VAR_4->bda);
        }
    }
}
