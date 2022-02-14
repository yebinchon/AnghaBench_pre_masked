
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; int port_state; struct lpfc_hba* phba; } ;
struct TYPE_2__ {int sli_flag; } ;
struct lpfc_hba {int link_state; int hba_flag; int fc_topology; TYPE_1__ sli; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;




 int VAR_5 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_6, struct device_attribute *VAR_7,
       char *VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_0(VAR_6);
 struct lpfc_vport *VAR_10 = (struct lpfc_vport *) VAR_9->hostdata;
 struct lpfc_hba *VAR_11 = VAR_10->phba;
 int VAR_12 = 0;

 switch (VAR_11->link_state) {
 case 136:
 case 128:
 case 138:
 case 139:
 case 137:
 case 141:
  if (VAR_11->hba_flag & VAR_2)
   VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5-VAR_12,
    "Link Down - User disabled\n");
  else
   VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5-VAR_12,
    "Link Down\n");
  break;
 case 135:
 case 146:
 case 140:
  VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5-VAR_12, "Link Up - ");

  switch (VAR_10->port_state) {
  case 134:
   VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5-VAR_12,
     "Configuring Link\n");
   break;
  case 143:
  case 142:
  case 144:
  case 132:
  case 133:
  case 147:
  case 145:
   VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5 - VAR_12,
     "Discovery\n");
   break;
  case 130:
   VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5 - VAR_12, "Ready\n");
   break;

  case 131:
   VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5 - VAR_12, "Failed\n");
   break;

  case 129:
   VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5 - VAR_12,
     "Unknown\n");
   break;
  }
  if (VAR_11->sli.sli_flag & VAR_3)
   VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5-VAR_12,
     "   Menlo Maint Mode\n");
  else if (VAR_11->fc_topology == VAR_4) {
   if (VAR_10->fc_flag & VAR_1)
    VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5-VAR_12,
      "   Public Loop\n");
   else
    VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5-VAR_12,
      "   Private Loop\n");
  } else {
   if (VAR_10->fc_flag & VAR_0)
    VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5-VAR_12,
      "   Fabric\n");
   else
    VAR_12 += FUNC_1(VAR_8 + VAR_12, VAR_5-VAR_12,
      "   Point-2-Point\n");
  }
 }

 return VAR_12;
}
