
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct lpfc_vport {int cfg_devloss_tmo; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;
struct TYPE_2__ {struct lpfc_rport_data* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,struct lpfc_rport_data*) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_vport *VAR_6, struct scsi_cmnd *VAR_7)
{
 struct lpfc_rport_data *VAR_8 = VAR_7->device->hostdata;
 struct lpfc_nodelist *VAR_9;
 unsigned long VAR_10;

 if (!VAR_8) {
  FUNC_1(VAR_6, VAR_1, VAR_2,
   "0797 Tgt Map rport failure: rdata x%p\n", VAR_8);
  return VAR_0;
 }
 VAR_9 = VAR_8->pnode;




 VAR_10 = FUNC_2(2 * VAR_6->cfg_devloss_tmo * 1000) + VAR_5;
 while (FUNC_4(VAR_10, VAR_5)) {
  if (!VAR_9 || !FUNC_0(VAR_9))
   return VAR_0;
  if (VAR_9->nlp_state == VAR_3)
   return VAR_4;
  FUNC_3(FUNC_2(500));
  VAR_8 = VAR_7->device->hostdata;
  if (!VAR_8)
   return VAR_0;
  VAR_9 = VAR_8->pnode;
 }
 if (!VAR_9 || !FUNC_0(VAR_9) ||
     (VAR_9->nlp_state != VAR_3))
  return VAR_0;
 return VAR_4;
}
