
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_register {scalar_t__ word0; } ;
struct TYPE_6__ {struct lpfc_register wqe_com; } ;
union lpfc_wqe {TYPE_3__ generic; } ;
typedef int uint32_t ;
struct lpfc_queue {size_t host_index; int entry_count; int hba_index; int entry_repost; int queue_id; scalar_t__ db_format; int db_regaddr; int entry_size; TYPE_2__* phba; int WQ_posted; int WQ_overflow; TYPE_1__* qe; } ;
struct TYPE_5__ {int sli3_options; } ;
struct TYPE_4__ {union lpfc_wqe* wqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct lpfc_register*,int) ;
 int FUNC_1 (union lpfc_wqe*,union lpfc_wqe*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static uint32_t
FUNC_4(struct lpfc_queue *VAR_12, union lpfc_wqe *VAR_13)
{
 union lpfc_wqe *VAR_14;
 struct lpfc_register VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;


 if (FUNC_2(!VAR_12))
  return -VAR_1;
 VAR_14 = VAR_12->qe[VAR_12->host_index].wqe;


 VAR_17 = ((VAR_12->host_index + 1) % VAR_12->entry_count);
 if (VAR_17 == VAR_12->hba_index) {
  VAR_12->WQ_overflow++;
  return -VAR_1;
 }
 VAR_12->WQ_posted++;

 if (!((VAR_12->host_index + 1) % VAR_12->entry_repost))
  FUNC_0(VAR_10, &VAR_13->generic.wqe_com, 1);
 if (VAR_12->phba->sli3_options & VAR_4)
  FUNC_0(VAR_11, &VAR_13->generic.wqe_com, VAR_12->queue_id);
 FUNC_1(VAR_13, VAR_14, VAR_12->entry_size);


 VAR_16 = VAR_12->host_index;
 VAR_12->host_index = VAR_17;


 VAR_15.word0 = 0;
 if (VAR_12->db_format == VAR_2) {
  FUNC_0(VAR_7, &VAR_15, 1);
  FUNC_0(VAR_6, &VAR_15, VAR_16);
  FUNC_0(VAR_5, &VAR_15, VAR_12->queue_id);
 } else if (VAR_12->db_format == VAR_3) {
  FUNC_0(VAR_9, &VAR_15, 1);
  FUNC_0(VAR_8, &VAR_15, VAR_12->queue_id);
 } else {
  return -VAR_0;
 }
 FUNC_3(VAR_15.word0, VAR_12->db_regaddr);

 return 0;
}
