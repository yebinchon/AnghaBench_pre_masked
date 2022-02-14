
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_state; int nlp_flag; } ;
struct lpfc_iocbq {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 struct Scsi_Host* FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint32_t
FUNC_4(struct lpfc_vport *VAR_2, struct lpfc_nodelist *VAR_3,
    void *VAR_4, uint32_t VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_1(VAR_2);
 struct lpfc_iocbq *VAR_7 = (struct lpfc_iocbq *)VAR_4;

 FUNC_2(VAR_6->host_lock);
 VAR_3->nlp_flag &= VAR_1;
 FUNC_3(VAR_6->host_lock);
 FUNC_0(VAR_2, VAR_0, VAR_7, VAR_3, ((void*)0));
 return VAR_3->nlp_state;
}
