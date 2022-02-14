
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int cmdidx; int next_cmdidx; } ;
struct TYPE_8__ {TYPE_2__ sli3; } ;
struct TYPE_6__ {int iocb_cmd; } ;
struct lpfc_sli_ring {size_t ringno; TYPE_3__ sli; TYPE_1__ stats; } ;
struct TYPE_10__ {int ulpIoTag; } ;
struct lpfc_iocbq {scalar_t__ iocb_cmpl; TYPE_5__ iocb; int iotag; } ;
struct lpfc_hba {TYPE_4__* host_gp; int iocb_cmd_size; } ;
struct TYPE_9__ {int cmdPutInx; } ;
typedef int IOCB_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_1 (struct lpfc_hba*,char*,int ,int ,int ) ;
 int FUNC_2 (TYPE_5__*,int *,int ) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct lpfc_hba *VAR_1, struct lpfc_sli_ring *VAR_2,
  IOCB_t *VAR_3, struct lpfc_iocbq *VAR_4)
{



 VAR_4->iocb.ulpIoTag = (VAR_4->iocb_cmpl) ? VAR_4->iotag : 0;


 if (VAR_2->ringno == VAR_0) {
  FUNC_1(VAR_1,
   "IOCB cmd ring:   wd4:x%08x wd6:x%08x wd7:x%08x",
   *(((uint32_t *) &VAR_4->iocb) + 4),
   *(((uint32_t *) &VAR_4->iocb) + 6),
   *(((uint32_t *) &VAR_4->iocb) + 7));
 }




 FUNC_2(&VAR_4->iocb, VAR_3, VAR_1->iocb_cmd_size);
 FUNC_4();
 VAR_2->stats.iocb_cmd++;






 if (VAR_4->iocb_cmpl)
  FUNC_3(VAR_1, VAR_2, VAR_4);
 else
  FUNC_0(VAR_1, VAR_4);





 VAR_2->sli.sli3.cmdidx = VAR_2->sli.sli3.next_cmdidx;
 FUNC_5(VAR_2->sli.sli3.cmdidx, &VAR_1->host_gp[VAR_2->ringno].cmdPutInx);
}
