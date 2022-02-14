
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int fc_flag; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_prev_state; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static uint32_t
FUNC_5(struct lpfc_vport *VAR_6,
     struct lpfc_nodelist *VAR_7,
     void *VAR_8,
     uint32_t VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_2(VAR_6);




 if (VAR_6->fc_flag & VAR_0)
  return VAR_7->nlp_state;

 VAR_7->nlp_prev_state = VAR_5;
 FUNC_1(VAR_6, VAR_7, VAR_4);
 FUNC_3(VAR_10->host_lock);
 VAR_7->nlp_flag |= VAR_1;
 VAR_7->nlp_flag &= ~(VAR_2 | VAR_3);
 FUNC_4(VAR_10->host_lock);
 FUNC_0(VAR_6, VAR_7);
 return VAR_7->nlp_state;
}
