
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tL2C_CCB ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (int *,int ) ;

BOOLEAN FUNC_4 (UINT16 VAR_3)
{
    tL2C_CCB *VAR_4;


    FUNC_0 ("L2CA_DisconnectRsp()  CID: 0x%04x", VAR_3);


    if ((VAR_4 = FUNC_3 (((void*)0), VAR_3)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no CCB for L2CA_disc_rsp, CID: %d", VAR_3);
        return (VAR_0);
    }

    FUNC_2 (VAR_4, VAR_1, ((void*)0));

    return (VAR_2);
}
