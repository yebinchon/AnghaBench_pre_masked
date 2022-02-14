
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tGATT_CL_COMPLETE ;
typedef int tGATTC_OPTYPE ;
typedef int tBTA_GATT_STATUS ;
struct TYPE_5__ {int layer_specific; int event; } ;
struct TYPE_6__ {int * p_cmpl; int op_code; int status; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_GATTC_OP_CMPL ;
typedef int UINT16 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,int const) ;
 scalar_t__ FUNC_3 (int const) ;

__attribute__((used)) static void FUNC_4(UINT16 VAR_1, tGATTC_OPTYPE VAR_2,
                                   tBTA_GATT_STATUS VAR_3,
                                   tGATT_CL_COMPLETE *VAR_4)
{
    const UINT16 VAR_5 = sizeof(tBTA_GATTC_OP_CMPL) + sizeof(tGATT_CL_COMPLETE);
    tBTA_GATTC_OP_CMPL *VAR_6 = (tBTA_GATTC_OP_CMPL *) FUNC_3(VAR_5);

    if (VAR_6 != ((void*)0)) {
        FUNC_2(VAR_6, 0, VAR_5);
        VAR_6->hdr.event = VAR_0;
        VAR_6->hdr.layer_specific = VAR_1;
        VAR_6->status = VAR_3;
        VAR_6->op_code = VAR_2;

        if (VAR_4 != ((void*)0)) {
            VAR_6->p_cmpl = (tGATT_CL_COMPLETE *)(VAR_6 + 1);
            FUNC_1(VAR_6->p_cmpl, VAR_4, sizeof(tGATT_CL_COMPLETE));
        }

        FUNC_0(VAR_6);
    }
}
