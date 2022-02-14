
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ link_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_4, struct device_attribute *VAR_5,
       char *VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_0(VAR_4);
 struct lpfc_vport *VAR_8 = (struct lpfc_vport *) VAR_7->hostdata;
 struct lpfc_hba *VAR_9 = VAR_8->phba;
 char * VAR_10;

 if (VAR_9->link_state == VAR_0)
  VAR_10 = "error";
 else if (VAR_9->link_state == VAR_2)
  VAR_10 = "warm start";
 else if (VAR_9->link_state == VAR_1)
  VAR_10 = "offline";
 else
  VAR_10 = "online";

 return FUNC_1(VAR_6, VAR_3, "%s\n", VAR_10);
}
