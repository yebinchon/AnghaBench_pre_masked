
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int fc_flag; } ;
struct lpfc_nodelist {scalar_t__ nlp_DID; int nlp_state; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct Scsi_Host* FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint32_t
FUNC_4(struct lpfc_vport *VAR_3, struct lpfc_nodelist *VAR_4,
   void *VAR_5, uint32_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_0(VAR_3);


 if (VAR_4->nlp_DID == VAR_2) {
  FUNC_2(VAR_7->host_lock);
  VAR_3->fc_flag &= ~(VAR_0 | VAR_1);
  FUNC_3(VAR_7->host_lock);
 }
 FUNC_1(VAR_3, VAR_4);
 return VAR_4->nlp_state;
}
