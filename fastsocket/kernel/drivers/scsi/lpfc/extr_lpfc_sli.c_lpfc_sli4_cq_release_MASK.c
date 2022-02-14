
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_register {scalar_t__ word0; } ;
struct lpfc_queue {size_t hba_index; size_t host_index; int entry_count; int queue_id; TYPE_3__* phba; TYPE_1__* qe; } ;
struct lpfc_cqe {int dummy; } ;
struct TYPE_5__ {int EQCQDBregaddr; } ;
struct TYPE_6__ {TYPE_2__ sli4_hba; } ;
struct TYPE_4__ {struct lpfc_cqe* cqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct lpfc_register*,int) ;
 int FUNC_1 (int ,struct lpfc_cqe*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ) ;

uint32_t
FUNC_4(struct lpfc_queue *VAR_8, bool VAR_9)
{
 uint32_t VAR_10 = 0;
 struct lpfc_cqe *VAR_11;
 struct lpfc_register VAR_12;


 if (FUNC_2(!VAR_8))
  return 0;

 while (VAR_8->hba_index != VAR_8->host_index) {
  VAR_11 = VAR_8->qe[VAR_8->host_index].cqe;
  FUNC_1(VAR_2, VAR_11, 0);
  VAR_10++;
  VAR_8->host_index = ((VAR_8->host_index + 1) % VAR_8->entry_count);
 }
 if (FUNC_2(VAR_10 == 0 && !VAR_9))
  return 0;


 VAR_12.word0 = 0;
 if (VAR_9)
  FUNC_0(VAR_3, &VAR_12, 1);
 FUNC_0(VAR_6, &VAR_12, VAR_10);
 FUNC_0(VAR_7, &VAR_12, VAR_1);
 FUNC_0(VAR_4, &VAR_12,
   (VAR_8->queue_id >> VAR_0));
 FUNC_0(VAR_5, &VAR_12, VAR_8->queue_id);
 FUNC_3(VAR_12.word0, VAR_8->phba->sli4_hba.EQCQDBregaddr);
 return VAR_10;
}
