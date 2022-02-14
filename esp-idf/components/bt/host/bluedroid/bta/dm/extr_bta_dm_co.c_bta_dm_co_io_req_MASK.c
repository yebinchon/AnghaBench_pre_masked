
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTA_OOB_DATA ;
typedef int tBTA_IO_CAP ;
typedef int tBTA_AUTH_REQ ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(BD_ADDR VAR_0, tBTA_IO_CAP *VAR_1, tBTA_OOB_DATA *VAR_2,
                      tBTA_AUTH_REQ *VAR_3, BOOLEAN VAR_4)
{
    FUNC_1(VAR_0);






    FUNC_0("bta_dm_co_io_req: func not ported\n");

    FUNC_0("bta_dm_co_io_req *p_oob_data = %d", *VAR_2);
    FUNC_0("bta_dm_co_io_req *p_io_cap = %d", *VAR_1);
    FUNC_0("bta_dm_co_io_req *p_auth_req = %d", *VAR_3);
    FUNC_0("bta_dm_co_io_req is_orig = %d", VAR_4);
}
