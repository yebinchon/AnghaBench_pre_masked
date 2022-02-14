
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct set_ctrl_cfg_req {int pageCode; int MST_MSI; int STP_SSP_MCT_TMO; int STP_FRM_TMO; int STP_IDLE_TMO; int OPNRJT_RTRY_INTVL; int Data_Cmd_OPNRJT_RTRY_TMO; int Data_Cmd_OPNRJT_RTRY_THR; int MAX_AIP; int cfg_pg; int tag; } ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; } ;
struct inbound_queue_table {int dummy; } ;
typedef struct set_ctrl_cfg_req SASProtocolTimerConfig_t ;


 int VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct set_ctrl_cfg_req*,int) ;
 int FUNC_3 (struct set_ctrl_cfg_req*,int ,int) ;
 int FUNC_4 (struct pm8001_hba_info*,struct inbound_queue_table*,int ,struct set_ctrl_cfg_req*,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct pm8001_hba_info*,int *) ;

__attribute__((used)) static int
FUNC_7(struct pm8001_hba_info *VAR_15)
{
 struct set_ctrl_cfg_req VAR_16;
 struct inbound_queue_table *VAR_17;
 SASProtocolTimerConfig_t VAR_18;
 int VAR_19;
 u32 VAR_20;
 u32 VAR_21 = VAR_0;

 FUNC_3(&VAR_16, 0, sizeof(struct set_ctrl_cfg_req));
 FUNC_3(&VAR_18, 0, sizeof(SASProtocolTimerConfig_t));

 VAR_19 = FUNC_6(VAR_15, &VAR_20);

 if (VAR_19)
  return -1;

 VAR_17 = &VAR_15->inbnd_q_tbl[0];
 VAR_16.tag = FUNC_1(VAR_20);

 VAR_18.pageCode = VAR_9;
 VAR_18.MST_MSI = 3 << 15;
 VAR_18.STP_SSP_MCT_TMO = (VAR_14 << 16) | VAR_11;
 VAR_18.STP_FRM_TMO = (VAR_6 << 24) |
    (VAR_10 << 16) | VAR_12;
 VAR_18.STP_IDLE_TMO = VAR_13;

 if (VAR_18.STP_IDLE_TMO > 0x3FFFFFF)
  VAR_18.STP_IDLE_TMO = 0x3FFFFFF;


 VAR_18.OPNRJT_RTRY_INTVL = (VAR_7 << 16) |
      VAR_8;
 VAR_18.Data_Cmd_OPNRJT_RTRY_TMO = (VAR_4 << 16)
      | VAR_2;
 VAR_18.Data_Cmd_OPNRJT_RTRY_THR = (VAR_3 << 16)
      | VAR_1;
 VAR_18.MAX_AIP = VAR_5;

 FUNC_0(VAR_15,
   FUNC_5("SASConfigPage.pageCode "
   "0x%08x\n", VAR_18.pageCode));
 FUNC_0(VAR_15,
   FUNC_5("SASConfigPage.MST_MSI "
   " 0x%08x\n", VAR_18.MST_MSI));
 FUNC_0(VAR_15,
   FUNC_5("SASConfigPage.STP_SSP_MCT_TMO "
   " 0x%08x\n", VAR_18.STP_SSP_MCT_TMO));
 FUNC_0(VAR_15,
   FUNC_5("SASConfigPage.STP_FRM_TMO "
   " 0x%08x\n", VAR_18.STP_FRM_TMO));
 FUNC_0(VAR_15,
   FUNC_5("SASConfigPage.STP_IDLE_TMO "
   " 0x%08x\n", VAR_18.STP_IDLE_TMO));
 FUNC_0(VAR_15,
   FUNC_5("SASConfigPage.OPNRJT_RTRY_INTVL "
   " 0x%08x\n", VAR_18.OPNRJT_RTRY_INTVL));
 FUNC_0(VAR_15,
   FUNC_5("SASConfigPage.Data_Cmd_OPNRJT_RTRY_TMO "
   " 0x%08x\n", VAR_18.Data_Cmd_OPNRJT_RTRY_TMO));
 FUNC_0(VAR_15,
   FUNC_5("SASConfigPage.Data_Cmd_OPNRJT_RTRY_THR "
   " 0x%08x\n", VAR_18.Data_Cmd_OPNRJT_RTRY_THR));
 FUNC_0(VAR_15, FUNC_5("SASConfigPage.MAX_AIP "
   " 0x%08x\n", VAR_18.MAX_AIP));

 FUNC_2(&VAR_16.cfg_pg, &VAR_18,
    sizeof(SASProtocolTimerConfig_t));

 VAR_19 = FUNC_4(VAR_15, VAR_17, VAR_21, &VAR_16, 0);

 return VAR_19;
}
