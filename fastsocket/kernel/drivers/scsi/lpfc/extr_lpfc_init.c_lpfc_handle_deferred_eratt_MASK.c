
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_sli_ring {int dummy; } ;
struct lpfc_sli {size_t fcp_ring; struct lpfc_sli_ring* ring; int sli_flag; } ;
struct lpfc_hba {int work_hs; scalar_t__ MBslimaddr; void** work_status; int hbalock; int hba_flag; TYPE_1__* pport; int HSregaddr; int pcidev; struct lpfc_sli sli; } ;
struct TYPE_2__ {int load_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int,void*,void*) ;
 scalar_t__ FUNC_3 (int ,int*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct lpfc_hba *VAR_8)
{
 uint32_t VAR_9 = VAR_8->work_hs;
 struct lpfc_sli_ring *VAR_10;
 struct lpfc_sli *VAR_11 = &VAR_8->sli;




 if (FUNC_6(VAR_8->pcidev)) {
  FUNC_8(&VAR_8->hbalock);
  VAR_8->hba_flag &= ~VAR_0;
  FUNC_9(&VAR_8->hbalock);
  return;
 }

 FUNC_2(VAR_8, VAR_3, VAR_4,
  "0479 Deferred Adapter Hardware Error "
  "Data: x%x x%x x%x\n",
  VAR_8->work_hs,
  VAR_8->work_status[0], VAR_8->work_status[1]);

 FUNC_8(&VAR_8->hbalock);
 VAR_11->sli_flag &= ~VAR_6;
 FUNC_9(&VAR_8->hbalock);







 VAR_10 = &VAR_11->ring[VAR_11->fcp_ring];
 FUNC_4(VAR_8, VAR_10);





 FUNC_1(VAR_8, VAR_5);
 FUNC_0(VAR_8);


 while (VAR_8->work_hs & VAR_2) {
  FUNC_5(100);
  if (FUNC_3(VAR_8->HSregaddr, &VAR_8->work_hs)) {
   VAR_8->work_hs = VAR_7 ;
   break;
  }

  if (VAR_8->pport->load_flag & VAR_1) {
   VAR_8->work_hs = 0;
   break;
  }
 }






 if ((!VAR_8->work_hs) && (!(VAR_8->pport->load_flag & VAR_1)))
  VAR_8->work_hs = VAR_9 & ~VAR_2;

 FUNC_8(&VAR_8->hbalock);
 VAR_8->hba_flag &= ~VAR_0;
 FUNC_9(&VAR_8->hbalock);
 VAR_8->work_status[0] = FUNC_7(VAR_8->MBslimaddr + 0xa8);
 VAR_8->work_status[1] = FUNC_7(VAR_8->MBslimaddr + 0xac);
}
