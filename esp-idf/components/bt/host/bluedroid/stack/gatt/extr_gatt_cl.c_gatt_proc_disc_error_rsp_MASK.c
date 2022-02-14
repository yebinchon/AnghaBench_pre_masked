
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tGATT_TCB ;
typedef int tGATT_STATUS ;
typedef int tGATT_CLCB ;
typedef int UINT8 ;
typedef int * UINT16 ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;

void FUNC_4(tGATT_TCB *VAR_2, tGATT_CLCB *VAR_3, UINT8 VAR_4,
                              UINT16 VAR_5, UINT8 VAR_6)
{
    tGATT_STATUS VAR_7 = (tGATT_STATUS) VAR_6;

    FUNC_2(VAR_2);
    FUNC_2(VAR_5);

    FUNC_0("gatt_proc_disc_error_rsp reason: %02x cmd_code %04x", VAR_6, VAR_4);

    switch (VAR_4) {
    case 129:
    case 130:
    case 128:
    case 131:
        if (VAR_6 == VAR_0) {
            VAR_7 = VAR_1;
            FUNC_0("Discovery completed");
        }
        break;
    default:
        FUNC_1("Incorrect discovery opcode %04x", VAR_4);
        break;
    }

    FUNC_3(VAR_3, VAR_7, ((void*)0));
}
