
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct lpfc_sli_ring {int txcmplq; } ;
struct lpfc_sli {int sli_flag; struct lpfc_sli_ring* ring; } ;
struct lpfc_hba {scalar_t__ link_state; int max_vpi; struct lpfc_vport* pport; struct lpfc_sli sli; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct lpfc_vport** FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_vport**) ;
 struct Scsi_Host* FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_6)
{
 struct lpfc_vport **VAR_7;
 struct Scsi_Host *VAR_8;
 struct lpfc_sli *VAR_9;
 struct lpfc_sli_ring *VAR_10;
 int VAR_11 = 0;

 VAR_9 = &VAR_6->sli;
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = &VAR_9->ring[VAR_3];
 if (!VAR_10)
  return -VAR_1;

 if ((VAR_6->link_state == VAR_4) ||
     (VAR_9->sli_flag & VAR_2) ||
     (!(VAR_9->sli_flag & VAR_5)))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7) {
  for (VAR_11 = 0; VAR_11 <= VAR_6->max_vpi && VAR_7[VAR_11] != ((void*)0); VAR_11++) {
   VAR_8 = FUNC_3(VAR_7[VAR_11]);
   FUNC_5(VAR_8);
  }
  FUNC_2(VAR_6, VAR_7);
 } else {
  VAR_8 = FUNC_3(VAR_6->pport);
  FUNC_5(VAR_8);
 }

 while (!FUNC_0(&VAR_10->txcmplq)) {
  if (VAR_11++ > 500)
   break;
  FUNC_4(10);
 }
 return 0;
}
