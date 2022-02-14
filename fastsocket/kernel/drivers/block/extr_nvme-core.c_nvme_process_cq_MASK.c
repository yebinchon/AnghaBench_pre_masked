
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct nvme_queue {size_t cq_head; size_t cq_phase; int sq_head; size_t q_depth; int cqe_seen; TYPE_1__* dev; scalar_t__ q_db; struct nvme_completion* cqes; } ;
struct nvme_completion {int command_id; int sq_head; int status; } ;
typedef int (* nvme_completion_fn ) (TYPE_1__*,void*,struct nvme_completion*) ;
struct TYPE_3__ {int db_stride; } ;


 void* FUNC_0 (struct nvme_queue*,int ,int (*) (TYPE_1__*,void*,struct nvme_completion*)) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct nvme_queue *VAR_0)
{
 u16 VAR_1, VAR_2;

 VAR_1 = VAR_0->cq_head;
 VAR_2 = VAR_0->cq_phase;

 for (;;) {
  void *VAR_3;
  nvme_completion_fn VAR_4;
  struct nvme_completion VAR_5 = VAR_0->cqes[VAR_1];
  if ((FUNC_1(VAR_5.status) & 1) != VAR_2)
   break;
  VAR_0->sq_head = FUNC_1(VAR_5.sq_head);
  if (++VAR_1 == VAR_0->q_depth) {
   VAR_1 = 0;
   VAR_2 = !VAR_2;
  }

  VAR_3 = FUNC_0(VAR_0, VAR_5.command_id, VAR_4);
  VAR_4(VAR_0->dev, VAR_3, &VAR_5);
 }







 if (VAR_1 == VAR_0->cq_head && VAR_2 == VAR_0->cq_phase)
  return 0;

 FUNC_2(VAR_1, VAR_0->q_db + (1 << VAR_0->dev->db_stride));
 VAR_0->cq_head = VAR_1;
 VAR_0->cq_phase = VAR_2;

 VAR_0->cqe_seen = 1;
 return 1;
}
