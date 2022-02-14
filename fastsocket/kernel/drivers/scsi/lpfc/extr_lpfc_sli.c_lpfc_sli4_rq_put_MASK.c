
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_rqe {int dummy; } ;
struct lpfc_register {scalar_t__ word0; } ;
struct lpfc_queue {int host_index; scalar_t__ type; int entry_count; int hba_index; int entry_repost; scalar_t__ db_format; int queue_id; int db_regaddr; int entry_size; TYPE_1__* qe; } ;
struct TYPE_2__ {struct lpfc_rqe* rqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,struct lpfc_register*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct lpfc_rqe*,struct lpfc_rqe*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_queue *VAR_12, struct lpfc_queue *VAR_13,
   struct lpfc_rqe *VAR_14, struct lpfc_rqe *VAR_15)
{
 struct lpfc_rqe *VAR_16;
 struct lpfc_rqe *VAR_17;
 struct lpfc_register VAR_18;
 int VAR_19;


 if (FUNC_2(!VAR_12) || FUNC_2(!VAR_13))
  return -VAR_2;
 VAR_19 = VAR_12->host_index;
 VAR_16 = VAR_12->qe[VAR_12->host_index].rqe;
 VAR_17 = VAR_13->qe[VAR_13->host_index].rqe;

 if (VAR_12->type != VAR_6 || VAR_13->type != VAR_5)
  return -VAR_1;
 if (VAR_12->host_index != VAR_13->host_index)
  return -VAR_1;

 if (((VAR_12->host_index + 1) % VAR_12->entry_count) == VAR_12->hba_index)
  return -VAR_0;
 FUNC_1(VAR_14, VAR_16, VAR_12->entry_size);
 FUNC_1(VAR_15, VAR_17, VAR_13->entry_size);


 VAR_12->host_index = ((VAR_12->host_index + 1) % VAR_12->entry_count);
 VAR_13->host_index = ((VAR_13->host_index + 1) % VAR_13->entry_count);


 if (!(VAR_12->host_index % VAR_12->entry_repost)) {
  VAR_18.word0 = 0;
  if (VAR_12->db_format == VAR_4) {
   FUNC_0(VAR_11, &VAR_18,
          VAR_12->entry_repost);
   FUNC_0(VAR_10, &VAR_18, VAR_12->queue_id);
  } else if (VAR_12->db_format == VAR_3) {
   FUNC_0(VAR_9, &VAR_18,
          VAR_12->entry_repost);
   FUNC_0(VAR_8, &VAR_18,
          VAR_12->host_index);
   FUNC_0(VAR_7, &VAR_18, VAR_12->queue_id);
  } else {
   return -VAR_1;
  }
  FUNC_3(VAR_18.word0, VAR_12->db_regaddr);
 }
 return VAR_19;
}
