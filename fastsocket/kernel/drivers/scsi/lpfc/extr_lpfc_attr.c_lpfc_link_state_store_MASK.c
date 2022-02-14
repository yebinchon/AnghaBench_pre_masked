
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ link_state; int (* lpfc_hba_init_link ) (struct lpfc_hba*) ;int (* lpfc_hba_down_link ) (struct lpfc_hba*) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_0(VAR_3);
 struct lpfc_vport *VAR_8 = (struct lpfc_vport *) VAR_7->hostdata;
 struct lpfc_hba *VAR_9 = VAR_8->phba;

 int VAR_10 = -VAR_0;

 if ((FUNC_2(VAR_5, "up", sizeof("up") - 1) == 0) &&
   (VAR_9->link_state == VAR_1))
  VAR_10 = VAR_9->lpfc_hba_init_link(VAR_9);
 else if ((FUNC_2(VAR_5, "down", sizeof("down") - 1) == 0) &&
   (VAR_9->link_state >= VAR_2))
  VAR_10 = VAR_9->lpfc_hba_down_link(VAR_9);

 if (VAR_10 == 0)
  return FUNC_1(VAR_5);
 else
  return VAR_10;
}
