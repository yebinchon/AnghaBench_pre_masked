
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tGATT_STATUS ;
typedef int tGATT_CL_COMPLETE ;
typedef scalar_t__ tGATTC_OPTYPE ;
struct TYPE_3__ {scalar_t__ transport; int bda; } ;
typedef TYPE_1__ tBTA_GATTC_CLCB ;
typedef int UINT16 ;


 int FUNC_0 (char*,int ,scalar_t__,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,scalar_t__,int ,int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(UINT16 VAR_5, tGATTC_OPTYPE VAR_6, tGATT_STATUS VAR_7,
                                  tGATT_CL_COMPLETE *VAR_8)
{
    tBTA_GATTC_CLCB *VAR_9;
    FUNC_0("bta_gattc_cmpl_cback: conn_id = %d op = %d status = %d",
                     VAR_5, VAR_6, VAR_7);


    if (VAR_6 == VAR_4 || VAR_6 == VAR_3) {
        FUNC_4(VAR_5, VAR_6, VAR_8);
        return;
    }

    else if ((VAR_9 = FUNC_3(VAR_5)) == ((void*)0)) {
        FUNC_1("bta_gattc_cmpl_cback unknown conn_id =  %d, ignore data", VAR_5);
        return;
    }


    if (VAR_9->transport == VAR_2) {
        FUNC_5(VAR_1, VAR_0, VAR_9->bda);
        FUNC_6(VAR_1, VAR_0, VAR_9->bda);
    }

    FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
}
