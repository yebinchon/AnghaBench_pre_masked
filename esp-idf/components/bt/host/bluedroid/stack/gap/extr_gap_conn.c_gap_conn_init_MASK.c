
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pL2CA_TxComplete_Cb; void* pL2CA_CongestionStatus_Cb; void* pL2CA_DataInd_Cb; int * pL2CA_QoSViolationInd_Cb; int * pL2CA_DisconnectCfm_Cb; void* pL2CA_DisconnectInd_Cb; void* pL2CA_ConfigCfm_Cb; void* pL2CA_ConfigInd_Cb; int * pL2CA_ConnectPnd_Cb; void* pL2CA_ConnectCfm_Cb; void* pL2CA_ConnectInd_Cb; int * pAMP_MoveCfmRsp_Cb; int * pAMP_MoveCfm_Cb; int * pAMP_MoveRsp_Cb; int * pAMP_MoveInd_Cb; int * pAMP_TxComplete_Cb; void* pAMP_CongestionStatus_Cb; void* pAMP_DataInd_Cb; int * pAMP_QoSViolationInd_Cb; int * pAMP_DisconnectCfm_Cb; void* pAMP_DisconnectInd_Cb; void* pAMP_ConfigCfm_Cb; void* pAMP_ConfigInd_Cb; int * pAMP_ConnectPnd_Cb; void* pAMP_ConnectCfm_Cb; void* pAMP_ConnectInd_Cb; } ;
struct TYPE_5__ {TYPE_1__ reg_info; } ;
struct TYPE_6__ {TYPE_2__ conn; } ;


 TYPE_3__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;

void FUNC_0 (void)
{
    VAR_0.conn.reg_info.pL2CA_ConnectInd_Cb = VAR_5;
    VAR_0.conn.reg_info.pL2CA_ConnectCfm_Cb = VAR_4;
    VAR_0.conn.reg_info.pL2CA_ConnectPnd_Cb = ((void*)0);
    VAR_0.conn.reg_info.pL2CA_ConfigInd_Cb = VAR_2;
    VAR_0.conn.reg_info.pL2CA_ConfigCfm_Cb = VAR_1;
    VAR_0.conn.reg_info.pL2CA_DisconnectInd_Cb = VAR_7;
    VAR_0.conn.reg_info.pL2CA_DisconnectCfm_Cb = ((void*)0);
    VAR_0.conn.reg_info.pL2CA_QoSViolationInd_Cb = ((void*)0);
    VAR_0.conn.reg_info.pL2CA_DataInd_Cb = VAR_6;
    VAR_0.conn.reg_info.pL2CA_CongestionStatus_Cb = VAR_3;
    VAR_0.conn.reg_info.pL2CA_TxComplete_Cb = ((void*)0);

}
