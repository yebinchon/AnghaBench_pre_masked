
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ureq ;
struct ocrdma_dev {struct ocrdma_cq** cq_tbl; } ;
struct ocrdma_create_cq_ureq {scalar_t__ dpp_cq; } ;
struct ib_cq {int dummy; } ;
struct ocrdma_cq {int arm_needed; size_t id; struct ib_cq ibcq; int phase; struct ocrdma_dev* dev; int rq_head; int sq_head; int comp_handler_lock; int cq_lock; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_cq* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 struct ocrdma_dev* FUNC_2 (struct ib_device*) ;
 scalar_t__ FUNC_3 (struct ocrdma_create_cq_ureq*,struct ib_udata*,int) ;
 int FUNC_4 (struct ocrdma_cq*) ;
 struct ocrdma_cq* FUNC_5 (int,int ) ;
 int FUNC_6 (struct ocrdma_cq*,struct ib_udata*,struct ib_ucontext*) ;
 int FUNC_7 (struct ocrdma_dev*,struct ocrdma_cq*,int,scalar_t__) ;
 int FUNC_8 (struct ocrdma_dev*,struct ocrdma_cq*) ;
 int FUNC_9 (int *) ;

struct ib_cq *FUNC_10(struct ib_device *VAR_4, int VAR_5, int VAR_6,
          struct ib_ucontext *VAR_7,
          struct ib_udata *VAR_8)
{
 struct ocrdma_cq *VAR_9;
 struct ocrdma_dev *VAR_10 = FUNC_2(VAR_4);
 int VAR_11;
 struct ocrdma_create_cq_ureq VAR_12;

 if (VAR_8) {
  if (FUNC_3(&VAR_12, VAR_8, sizeof(VAR_12)))
   return FUNC_0(-VAR_0);
 } else
  VAR_12.dpp_cq = 0;
 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 FUNC_9(&VAR_9->cq_lock);
 FUNC_9(&VAR_9->comp_handler_lock);
 FUNC_1(&VAR_9->sq_head);
 FUNC_1(&VAR_9->rq_head);
 VAR_9->dev = VAR_10;

 VAR_11 = FUNC_7(VAR_10, VAR_9, VAR_5, VAR_12.dpp_cq);
 if (VAR_11) {
  FUNC_4(VAR_9);
  return FUNC_0(VAR_11);
 }
 if (VAR_7) {
  VAR_11 = FUNC_6(VAR_9, VAR_8, VAR_7);
  if (VAR_11)
   goto ctx_err;
 }
 VAR_9->phase = VAR_3;
 VAR_9->arm_needed = 1;
 VAR_10->cq_tbl[VAR_9->id] = VAR_9;

 return &VAR_9->ibcq;

ctx_err:
 FUNC_8(VAR_10, VAR_9);
 FUNC_4(VAR_9);
 return FUNC_0(VAR_11);
}
