
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int vpi_state; int fc_flag; int port_state; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {int sli3_options; int max_vports; scalar_t__ sli_rev; struct lpfc_vport* pport; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*) ;
 struct lpfc_vport** FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_4 (struct lpfc_hba*) ;
 scalar_t__ FUNC_5 (struct lpfc_hba*) ;
 struct lpfc_nodelist* FUNC_6 (struct lpfc_vport*,int ) ;
 int FUNC_7 (struct lpfc_vport*) ;
 int FUNC_8 (struct lpfc_vport*) ;
 struct Scsi_Host* FUNC_9 (struct lpfc_vport*) ;
 int FUNC_10 (struct lpfc_vport*) ;
 int FUNC_11 (struct lpfc_hba*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

int
FUNC_14(struct lpfc_hba *VAR_6)
{
 struct lpfc_vport **VAR_7;
 struct lpfc_nodelist *VAR_8;
 struct Scsi_Host *VAR_9;
 int VAR_10 = 0, VAR_11;


 if (FUNC_5(VAR_6))
  FUNC_11(VAR_6);


 VAR_6->pport->port_state = VAR_5;


 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 && (VAR_6->sli3_options & VAR_2))
  for (VAR_10 = 0; VAR_10 <= VAR_6->max_vports && VAR_7[VAR_10] != ((void*)0); VAR_10++) {

   VAR_8 = FUNC_6(VAR_7[VAR_10], VAR_1);
   if (VAR_8)
    FUNC_0(VAR_7[VAR_10], VAR_8);
   FUNC_1(VAR_7[VAR_10]);
   if (VAR_6->sli_rev == VAR_3)
    FUNC_10(VAR_7[VAR_10]);
   FUNC_8(VAR_7[VAR_10]);
   VAR_9 = FUNC_9(VAR_7[VAR_10]);
   FUNC_12(VAR_9->host_lock);
   VAR_7[VAR_10]->fc_flag |= VAR_0;
   VAR_7[VAR_10]->vpi_state &= ~VAR_4;
   FUNC_13(VAR_9->host_lock);
  }
 FUNC_3(VAR_6, VAR_7);
 if (VAR_10 == 0 && (!(VAR_6->sli3_options & VAR_2))) {
  VAR_8 = FUNC_6(VAR_6->pport, VAR_1);
  if (VAR_8)
   FUNC_0(VAR_6->pport, VAR_8);
  FUNC_1(VAR_6->pport);
  if (VAR_6->sli_rev == VAR_3)
   FUNC_10(VAR_6->pport);
  FUNC_8(VAR_6->pport);
  VAR_9 = FUNC_9(VAR_6->pport);
  FUNC_12(VAR_9->host_lock);
  VAR_6->pport->fc_flag |= VAR_0;
  VAR_6->pport->vpi_state &= ~VAR_4;
  FUNC_13(VAR_9->host_lock);
 }


 FUNC_4(VAR_6);


 VAR_11 = FUNC_7(VAR_6->pport);
 return VAR_11;
}
