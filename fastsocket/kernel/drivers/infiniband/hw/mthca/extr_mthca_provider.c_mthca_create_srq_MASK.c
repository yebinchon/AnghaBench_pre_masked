
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mthca_ucontext {int db_tab; int uar; } ;
struct ib_srq {int dummy; } ;
struct TYPE_4__ {int lkey; } ;
struct TYPE_5__ {TYPE_1__ ibmr; } ;
struct mthca_srq {struct ib_srq ibsrq; int srqn; int db_index; TYPE_2__ mr; } ;
struct mthca_create_srq {int db_index; int lkey; int db_page; } ;
struct ib_udata {int dummy; } ;
struct ib_srq_init_attr {scalar_t__ srq_type; int attr; } ;
struct ib_pd {int device; TYPE_3__* uobject; } ;
typedef int __u32 ;
struct TYPE_6__ {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_srq* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct mthca_create_srq*,struct ib_udata*,int) ;
 scalar_t__ FUNC_2 (struct ib_udata*,int *,int) ;
 int FUNC_3 (struct mthca_srq*) ;
 struct mthca_srq* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int *,struct mthca_srq*) ;
 int FUNC_6 (int ,struct mthca_srq*) ;
 int FUNC_7 (int ,int *,int ,int ,int ) ;
 int FUNC_8 (int ,int *,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ib_pd*) ;
 struct mthca_ucontext* FUNC_11 (int ) ;

__attribute__((used)) static struct ib_srq *FUNC_12(struct ib_pd *VAR_5,
           struct ib_srq_init_attr *VAR_6,
           struct ib_udata *VAR_7)
{
 struct mthca_create_srq VAR_8;
 struct mthca_ucontext *VAR_9 = ((void*)0);
 struct mthca_srq *VAR_10;
 int VAR_11;

 if (VAR_6->srq_type != VAR_4)
  return FUNC_0(-VAR_2);

 VAR_10 = FUNC_4(sizeof *VAR_10, VAR_3);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 if (VAR_5->uobject) {
  VAR_9 = FUNC_11(VAR_5->uobject->context);

  if (FUNC_1(&VAR_8, VAR_7, sizeof VAR_8)) {
   VAR_11 = -VAR_0;
   goto err_free;
  }

  VAR_11 = FUNC_7(FUNC_9(VAR_5->device), &VAR_9->uar,
     VAR_9->db_tab, VAR_8.db_index,
     VAR_8.db_page);

  if (VAR_11)
   goto err_free;

  VAR_10->mr.ibmr.lkey = VAR_8.lkey;
  VAR_10->db_index = VAR_8.db_index;
 }

 VAR_11 = FUNC_5(FUNC_9(VAR_5->device), FUNC_10(VAR_5),
         &VAR_6->attr, VAR_10);

 if (VAR_11 && VAR_5->uobject)
  FUNC_8(FUNC_9(VAR_5->device), &VAR_9->uar,
        VAR_9->db_tab, VAR_8.db_index);

 if (VAR_11)
  goto err_free;

 if (VAR_9 && FUNC_2(VAR_7, &VAR_10->srqn, sizeof (__u32))) {
  FUNC_6(FUNC_9(VAR_5->device), VAR_10);
  VAR_11 = -VAR_0;
  goto err_free;
 }

 return &VAR_10->ibsrq;

err_free:
 FUNC_3(VAR_10);

 return FUNC_0(VAR_11);
}
