
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_1__* pport; int cfg_enable_hba_reset; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct completion {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_2__ {int fc_flag; } ;


 int VAR_0 ;
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
 scalar_t__ VAR_12 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct completion*) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,char const*,...) ;
 int FUNC_4 (struct lpfc_hba*,int ) ;
 int FUNC_5 (struct lpfc_hba*,int*,struct completion*,int ) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (struct completion*) ;

__attribute__((used)) static ssize_t
FUNC_10(struct device *VAR_13, struct device_attribute *VAR_14,
        const char *VAR_15, size_t VAR_16)
{
 struct Scsi_Host *VAR_17 = FUNC_0(VAR_13);
 struct lpfc_vport *VAR_18 = (struct lpfc_vport *) VAR_17->hostdata;
 struct lpfc_hba *VAR_19 = VAR_18->phba;
 struct completion VAR_20;
 char *VAR_21 = ((void*)0);
 int VAR_22 = 0;
 int VAR_23;

 if (!VAR_19->cfg_enable_hba_reset) {
  VAR_22 = -VAR_0;
  goto board_mode_out;
 }

 FUNC_3(VAR_18, VAR_3, VAR_4,
    "3050 lpfc_board_mode set to %s\n", VAR_15);

 FUNC_1(&VAR_20);

 if(FUNC_8(VAR_15, "online", sizeof("online") - 1) == 0) {
  VAR_23 = FUNC_5(VAR_19, &VAR_22, &VAR_20,
          VAR_8);
  if (VAR_23 == 0) {
   VAR_22 = -VAR_2;
   goto board_mode_out;
  }
  FUNC_9(&VAR_20);
 } else if (FUNC_8(VAR_15, "offline", sizeof("offline") - 1) == 0)
  VAR_22 = FUNC_2(VAR_19, VAR_7);
 else if (FUNC_8(VAR_15, "warm", sizeof("warm") - 1) == 0)
  if (VAR_19->sli_rev == VAR_12)
   VAR_22 = -VAR_1;
  else
   VAR_22 = FUNC_2(VAR_19, VAR_9);
 else if (FUNC_8(VAR_15, "error", sizeof("error") - 1) == 0)
  if (VAR_19->sli_rev == VAR_12)
   VAR_22 = -VAR_1;
  else
   VAR_22 = FUNC_2(VAR_19, VAR_6);
 else if (FUNC_8(VAR_15, "dump", sizeof("dump") - 1) == 0)
  VAR_22 = FUNC_4(VAR_19, VAR_10);
 else if (FUNC_8(VAR_15, "fw_reset", sizeof("fw_reset") - 1) == 0)
  VAR_22 = FUNC_4(VAR_19, VAR_11);
 else if (FUNC_8(VAR_15, "dv_reset", sizeof("dv_reset") - 1) == 0)
  VAR_22 = FUNC_4(VAR_19, VAR_5);
 else
  VAR_22 = -VAR_1;

board_mode_out:
 if (!VAR_22)
  return FUNC_7(VAR_15);
 else {
  VAR_21 = FUNC_6(VAR_15, '\n');
  if (VAR_21)
   *VAR_21 = '\0';
  FUNC_3(VAR_18, VAR_3, VAR_4,
     "3097 Failed \"%s\", status(%d), "
     "fc_flag(x%x)\n",
     VAR_15, VAR_22, VAR_19->pport->fc_flag);
  return VAR_22;
 }
}
