
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* rx_data_rate; void* tx_data_rate; } ;
typedef TYPE_1__ tL2C_CCB ;
typedef void* tL2CAP_CHNL_DATA_RATE ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,void*,void*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int *,int ) ;

BOOLEAN FUNC_4 (UINT16 VAR_2, tL2CAP_CHNL_DATA_RATE VAR_3, tL2CAP_CHNL_DATA_RATE VAR_4)
{
    tL2C_CCB *VAR_5;

    FUNC_0 ("L2CA_SetChnlDataRate()  CID: 0x%04x, tx:%d, rx:%d", VAR_2, VAR_3, VAR_4);


    if ((VAR_5 = FUNC_3 (((void*)0), VAR_2)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no CCB for L2CA_SetChnlDataRate, CID: %d", VAR_2);
        return (VAR_0);
    }

    VAR_5->tx_data_rate = VAR_3;
    VAR_5->rx_data_rate = VAR_4;


    FUNC_2 ();

    return (VAR_1);
}
