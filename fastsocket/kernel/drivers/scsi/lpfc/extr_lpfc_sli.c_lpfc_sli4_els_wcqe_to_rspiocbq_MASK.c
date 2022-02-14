
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lpfc_wcqe_complete {int dummy; } ;
struct TYPE_7__ {int iocb_event; } ;
struct lpfc_sli_ring {int ring_lock; TYPE_3__ stats; } ;
struct TYPE_5__ {struct lpfc_wcqe_complete wcqe_cmpl; } ;
struct TYPE_6__ {TYPE_1__ cqe; } ;
struct lpfc_iocbq {TYPE_2__ cq_event; } ;
struct TYPE_8__ {struct lpfc_sli_ring* ring; } ;
struct lpfc_hba {TYPE_4__ sli; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,struct lpfc_wcqe_complete*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*,struct lpfc_wcqe_complete*) ;
 struct lpfc_iocbq* FUNC_3 (struct lpfc_hba*,struct lpfc_sli_ring*,int ) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int VAR_3 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct lpfc_iocbq *
FUNC_8(struct lpfc_hba *VAR_4,
          struct lpfc_iocbq *VAR_5)
{
 struct lpfc_sli_ring *VAR_6 = &VAR_4->sli.ring[VAR_2];
 struct lpfc_iocbq *VAR_7;
 struct lpfc_wcqe_complete *VAR_8;
 unsigned long VAR_9;

 VAR_8 = &VAR_5->cq_event.cqe.wcqe_cmpl;
 FUNC_5(&VAR_6->ring_lock, VAR_9);
 VAR_6->stats.iocb_event++;

 VAR_7 = FUNC_3(VAR_4, VAR_6,
    FUNC_0(VAR_3, VAR_8));
 FUNC_6(&VAR_6->ring_lock, VAR_9);

 if (FUNC_7(!VAR_7)) {
  FUNC_1(VAR_4, VAR_0, VAR_1,
    "0386 ELS complete with no corresponding "
    "cmdiocb: iotag (%d)\n",
    FUNC_0(VAR_3, VAR_8));
  FUNC_4(VAR_4, VAR_5);
  return ((void*)0);
 }


 FUNC_2(VAR_4, VAR_5, VAR_7, VAR_8);

 return VAR_5;
}
