
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_prev_state; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static uint32_t
FUNC_5(struct lpfc_vport *VAR_4,
        struct lpfc_nodelist *VAR_5,
        void *VAR_6,
        uint32_t VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_2(VAR_4);

 VAR_5->nlp_prev_state = VAR_3;
 FUNC_1(VAR_4, VAR_5, VAR_2);
 FUNC_3(VAR_8->host_lock);
 VAR_5->nlp_flag &= ~(VAR_0 | VAR_1);
 FUNC_4(VAR_8->host_lock);
 FUNC_0(VAR_4, VAR_5);

 return VAR_5->nlp_state;
}
