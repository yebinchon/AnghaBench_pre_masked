
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_HF_CLIENT_DATA ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ BT_HDR ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ,int) ;


 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int *) ;

BOOLEAN FUNC_5(BT_HDR *VAR_1)
{

    FUNC_0("bta_hf_client_hdl_event %s (0x%x)", FUNC_3(VAR_1->event), VAR_1->event);


    switch (VAR_1->event) {

    case 128:
        FUNC_2((tBTA_HF_CLIENT_DATA *) VAR_1);
        break;


    case 129:
        FUNC_1((tBTA_HF_CLIENT_DATA *) VAR_1);
        break;

    default:
        FUNC_4(VAR_1->event, (tBTA_HF_CLIENT_DATA *) VAR_1);
        break;
    }
    return VAR_0;
}
