
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int cfg_topology; scalar_t__ cfg_link_speed; scalar_t__ sli_rev; int fc_topology_changed; int brd_no; int pport; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int ,int) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,int,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,char*,int*) ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_5, struct device_attribute *VAR_6,
   const char *VAR_7, size_t VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_0(VAR_5);
 struct lpfc_vport *VAR_10 = (struct lpfc_vport *) VAR_9->hostdata;
 struct lpfc_hba *VAR_11 = VAR_10->phba;
 int VAR_12 = 0;
 int VAR_13 = 0;
 const char *VAR_14 = VAR_7;
 int VAR_15;
 uint32_t VAR_16;

 if (!FUNC_8(VAR_7, "nolip ", FUNC_7("nolip "))) {
  VAR_13 = 1;
  VAR_14 = &VAR_7[FUNC_7("nolip ")];
 }

 if (!FUNC_1(VAR_14[0]))
  return -VAR_0;
 if (FUNC_6(VAR_14, "%i", &VAR_12) != 1)
  return -VAR_0;

 if (VAR_12 >= 0 && VAR_12 <= 6) {
  VAR_16 = VAR_11->cfg_topology;
  VAR_11->cfg_topology = VAR_12;
  if (VAR_11->cfg_link_speed == VAR_4 &&
   VAR_12 == 4) {
   FUNC_4(VAR_10, VAR_1, VAR_2,
    "3113 Loop mode not supported at speed %d\n",
    VAR_11->cfg_link_speed);
   VAR_11->cfg_topology = VAR_16;
   return -VAR_0;
  }
  if (VAR_13)
   return FUNC_7(VAR_7);

  FUNC_4(VAR_10, VAR_1, VAR_2,
   "3054 lpfc_topology changed from %d to %d\n",
   VAR_16, VAR_12);
  if (VAR_16 != VAR_12 && VAR_11->sli_rev == VAR_3)
   VAR_11->fc_topology_changed = 1;
  VAR_15 = FUNC_2(FUNC_5(VAR_11->pport));
  if (VAR_15) {
   VAR_11->cfg_topology = VAR_16;
   return -VAR_0;
  } else
   return FUNC_7(VAR_7);
 }
 FUNC_3(VAR_11, VAR_1, VAR_2,
  "%d:0467 lpfc_topology attribute cannot be set to %d, "
  "allowed range is [0, 6]\n",
  VAR_11->brd_no, VAR_12);
 return -VAR_0;
}
