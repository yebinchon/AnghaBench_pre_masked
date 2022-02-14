
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* UINT8 ;
struct TYPE_2__ {void* err_status; void* req_op_code; int enable_err_rsp; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ,void*,void*) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(BOOLEAN VAR_1, UINT8 VAR_2, UINT8 VAR_3)
{
    FUNC_0("gatt_set_err_rsp enable=%d op_code=%d, err_status=%d", VAR_1, VAR_2, VAR_3);
    VAR_0.enable_err_rsp = VAR_1;
    VAR_0.req_op_code = VAR_2;
    VAR_0.err_status = VAR_3;
}
