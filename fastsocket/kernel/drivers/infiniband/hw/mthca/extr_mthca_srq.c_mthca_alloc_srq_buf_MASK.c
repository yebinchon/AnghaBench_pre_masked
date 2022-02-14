
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mthca_srq {int max; int wqe_shift; void* last; int wrid; int mr; int is_direct; int queue; } ;
struct TYPE_2__ {scalar_t__ uobject; } ;
struct mthca_pd {TYPE_1__ ibpd; } ;
struct mthca_next_seg {scalar_t__ nda_op; } ;
struct mthca_dev {int dummy; } ;
struct mthca_data_seg {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct mthca_srq*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct mthca_dev*,int,int ,int *,int *,struct mthca_pd*,int,int *) ;
 int* FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct mthca_dev *VAR_4, struct mthca_pd *VAR_5,
          struct mthca_srq *VAR_6)
{
 struct mthca_data_seg *VAR_7;
 void *VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_5->ibpd.uobject)
  return 0;

 VAR_6->wrid = FUNC_4(VAR_6->max * sizeof (u64), VAR_1);
 if (!VAR_6->wrid)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_4, VAR_6->max << VAR_6->wqe_shift,
         VAR_3,
         &VAR_6->queue, &VAR_6->is_direct, VAR_5, 1, &VAR_6->mr);
 if (VAR_9) {
  FUNC_3(VAR_6->wrid);
  return VAR_9;
 }






 for (VAR_10 = 0; VAR_10 < VAR_6->max; ++VAR_10) {
  struct mthca_next_seg *VAR_11;

  VAR_11 = VAR_8 = FUNC_1(VAR_6, VAR_10);

  if (VAR_10 < VAR_6->max - 1) {
   *FUNC_6(VAR_8) = VAR_10 + 1;
   VAR_11->nda_op = FUNC_2(((VAR_10 + 1) << VAR_6->wqe_shift) | 1);
  } else {
   *FUNC_6(VAR_8) = -1;
   VAR_11->nda_op = 0;
  }

  for (VAR_7 = VAR_8 + sizeof (struct mthca_next_seg);
       (void *) VAR_7 < VAR_8 + (1 << VAR_6->wqe_shift);
       ++VAR_7)
   VAR_7->lkey = FUNC_0(VAR_2);
 }

 VAR_6->last = FUNC_1(VAR_6, VAR_6->max - 1);

 return 0;
}
