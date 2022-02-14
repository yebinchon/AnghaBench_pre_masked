
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
struct TYPE_3__ {unsigned int event; int layer_specific; } ;
typedef TYPE_1__ BT_HDR ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,unsigned int) ;




 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int *) ;

BOOLEAN FUNC_7(BT_HDR *VAR_1)
{
    tBTA_AG_SCB *VAR_2;
    FUNC_0("bta_ag_hdl_event: Event 0x%04x ", VAR_1->event);

    switch (VAR_1->event) {

        case 130:
            FUNC_2((tBTA_AG_DATA *) VAR_1);
            break;


        case 131:
            FUNC_1((tBTA_AG_DATA *) VAR_1);
            break;


        case 129:
            FUNC_3((tBTA_AG_DATA *) VAR_1);
            break;


        case 128:
            FUNC_4((tBTA_AG_DATA *) VAR_1);
            break;


        default:
            if ((VAR_2 = FUNC_5(VAR_1->layer_specific)) != ((void*)0)) {
                FUNC_0("bta_ag_hdl_event: p_scb 0x%08x ", (unsigned int)VAR_2);
                FUNC_6(VAR_2, VAR_1->event, (tBTA_AG_DATA *) VAR_1);
            }
            break;
    }
    return VAR_0;
}
