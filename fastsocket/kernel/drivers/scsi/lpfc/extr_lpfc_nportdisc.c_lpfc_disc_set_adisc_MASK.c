
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int fc_flag; scalar_t__ cfg_use_adisc; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_fcp_info; int nlp_type; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct Scsi_Host* FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint32_t
FUNC_4(struct lpfc_vport *VAR_6, struct lpfc_nodelist *VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_0(VAR_6);

 if (!(VAR_7->nlp_flag & VAR_5)) {
  VAR_7->nlp_flag &= ~VAR_4;
  return 0;
 }

 if (!(VAR_6->fc_flag & VAR_0)) {

  if ((VAR_6->cfg_use_adisc && (VAR_6->fc_flag & VAR_1)) ||
      ((VAR_7->nlp_fcp_info & VAR_2) &&
       (VAR_7->nlp_type & VAR_3))) {
   FUNC_2(VAR_8->host_lock);
   VAR_7->nlp_flag |= VAR_4;
   FUNC_3(VAR_8->host_lock);
   return 1;
  }
 }
 VAR_7->nlp_flag &= ~VAR_4;
 FUNC_1(VAR_6, VAR_7);
 return 0;
}
