
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct lpfc_sli {int sli_flag; } ;
struct TYPE_4__ {scalar_t__ fcf_flag; } ;
struct lpfc_hba {int pcidev; int hbalock; TYPE_2__ fcf; TYPE_1__* pport; scalar_t__ link_events; scalar_t__ fc_eventTag; struct lpfc_sli sli; } ;
struct TYPE_3__ {scalar_t__ fc_prevDID; scalar_t__ fc_myDID; int port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct lpfc_hba *VAR_7)
{
 struct lpfc_sli *VAR_8 = &VAR_7->sli;
 uint16_t VAR_9;
 int VAR_10;


 FUNC_1(VAR_7, VAR_0, VAR_2,
   "0295 Reset HBA Data: x%x x%x\n",
   VAR_7->pport->port_state, VAR_8->sli_flag);


 VAR_7->fc_eventTag = 0;
 VAR_7->link_events = 0;
 VAR_7->pport->fc_myDID = 0;
 VAR_7->pport->fc_prevDID = 0;

 FUNC_5(&VAR_7->hbalock);
 VAR_8->sli_flag &= ~(VAR_3);
 VAR_7->fcf.fcf_flag = 0;
 FUNC_6(&VAR_7->hbalock);


 FUNC_1(VAR_7, VAR_0, VAR_1,
   "0389 Performing PCI function reset!\n");


 FUNC_3(VAR_7->pcidev, VAR_4, &VAR_9);
 FUNC_4(VAR_7->pcidev, VAR_4, (VAR_9 &
         ~(VAR_5 | VAR_6)));


 VAR_10 = FUNC_0(VAR_7);
 FUNC_2(VAR_7);


 FUNC_4(VAR_7->pcidev, VAR_4, VAR_9);

 return VAR_10;
}
