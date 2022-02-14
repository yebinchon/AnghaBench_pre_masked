
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ svc_conn; scalar_t__ in_use; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
struct TYPE_9__ {scalar_t__ layer_specific; } ;
struct TYPE_11__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ tBTA_AG_DATA ;
struct TYPE_12__ {TYPE_2__* scb; } ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_7__ VAR_3 ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(tBTA_AG_DATA *VAR_4)
{
    tBTA_AG_SCB *VAR_5;
    int VAR_6;

    if (VAR_4->hdr.layer_specific != VAR_1) {
        if ((VAR_5 = FUNC_1(VAR_4->hdr.layer_specific)) != ((void*)0)) {
            FUNC_0("bta_ag_api_result: p_scb 0x%08x ", (unsigned int)VAR_5);
            FUNC_2(VAR_5, VAR_0, VAR_4);
        }
    } else {
        for (VAR_6 = 0, VAR_5 = &VAR_3.scb[0]; VAR_6 < VAR_2; VAR_6++, VAR_5++) {
            if (VAR_5->in_use && VAR_5->svc_conn) {
                FUNC_0("bta_ag_api_result p_scb 0x%08x ", (unsigned int)VAR_5);
                FUNC_2(VAR_5, VAR_0, VAR_4);
            }
        }
    }
}
