
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ cmdidx; scalar_t__ local_getidx; scalar_t__ next_cmdidx; scalar_t__ rspidx; } ;
struct TYPE_6__ {TYPE_2__ sli3; } ;
struct lpfc_sli_ring {scalar_t__ missbufcnt; TYPE_3__ sli; scalar_t__ flag; } ;
struct lpfc_sli {int sli_flag; int num_rings; struct lpfc_sli_ring* ring; } ;
struct lpfc_hba {int link_state; int pcidev; int HCregaddr; TYPE_1__* pport; scalar_t__ link_events; scalar_t__ fc_eventTag; struct lpfc_sli sli; } ;
struct TYPE_4__ {scalar_t__ fc_prevDID; scalar_t__ fc_myDID; int port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

int
FUNC_6(struct lpfc_hba *VAR_9)
{
 struct lpfc_sli *VAR_10;
 struct lpfc_sli_ring *VAR_11;
 uint16_t VAR_12;
 int VAR_13;

 VAR_10 = &VAR_9->sli;


 FUNC_0(VAR_9, VAR_1, VAR_2,
   "0325 Reset HBA Data: x%x x%x\n",
   VAR_9->pport->port_state, VAR_10->sli_flag);


 VAR_9->fc_eventTag = 0;
 VAR_9->link_events = 0;
 VAR_9->pport->fc_myDID = 0;
 VAR_9->pport->fc_prevDID = 0;


 FUNC_2(VAR_9->pcidev, VAR_6, &VAR_12);
 FUNC_3(VAR_9->pcidev, VAR_6,
         (VAR_12 &
          ~(VAR_7 | VAR_8)));

 VAR_10->sli_flag &= ~(VAR_4 | VAR_3);


 FUNC_5(VAR_0, VAR_9->HCregaddr);
 FUNC_1(1);
 FUNC_4(VAR_9->HCregaddr);
 FUNC_5(0, VAR_9->HCregaddr);
 FUNC_4(VAR_9->HCregaddr);


 FUNC_3(VAR_9->pcidev, VAR_6, VAR_12);


 for (VAR_13 = 0; VAR_13 < VAR_10->num_rings; VAR_13++) {
  VAR_11 = &VAR_10->ring[VAR_13];
  VAR_11->flag = 0;
  VAR_11->sli.sli3.rspidx = 0;
  VAR_11->sli.sli3.next_cmdidx = 0;
  VAR_11->sli.sli3.local_getidx = 0;
  VAR_11->sli.sli3.cmdidx = 0;
  VAR_11->missbufcnt = 0;
 }

 VAR_9->link_state = VAR_5;
 return 0;
}
