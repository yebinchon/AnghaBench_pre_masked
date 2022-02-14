
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tBTM_SCO_DATA_FLAG ;
typedef int UINT16 ;
typedef int BT_HDR ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(UINT16 VAR_1, BT_HDR *VAR_2, tBTM_SCO_DATA_FLAG VAR_3)
{
    if (VAR_3 != VAR_0)
    {
        FUNC_0("bta_ag_sco_read_cback: status(%d)", VAR_3);
    }


    FUNC_1(VAR_2, VAR_3);
}
