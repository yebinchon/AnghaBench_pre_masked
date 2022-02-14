
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qib_user_sdma_queue {int counter; int lock; } ;
struct qib_pportdata {scalar_t__ sdma_descq_added; scalar_t__ sdma_descq_removed; } ;
struct qib_devdata {TYPE_2__* pcidev; } ;
struct qib_ctxtdata {struct qib_pportdata* ppd; struct qib_devdata* dd; } ;
struct list_head {int dummy; } ;
struct iovec {int dummy; } ;
struct TYPE_6__ {TYPE_1__* mm; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int mmap_sem; } ;


 int FUNC_0 (struct list_head*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qib_pportdata*) ;
 int FUNC_6 (struct qib_pportdata*) ;
 int FUNC_7 (int *,struct qib_user_sdma_queue*,struct list_head*) ;
 int FUNC_8 (struct qib_pportdata*) ;
 int FUNC_9 (struct qib_pportdata*,struct qib_user_sdma_queue*,struct list_head*) ;
 int FUNC_10 (struct qib_pportdata*,struct qib_user_sdma_queue*) ;
 int FUNC_11 (struct qib_devdata*,struct qib_user_sdma_queue*,struct list_head*,struct iovec const*,unsigned long,int const) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct qib_ctxtdata *VAR_1,
    struct qib_user_sdma_queue *VAR_2,
    const struct iovec *VAR_3,
    unsigned long VAR_4)
{
 struct qib_devdata *VAR_5 = VAR_1->dd;
 struct qib_pportdata *VAR_6 = VAR_1->ppd;
 int VAR_7 = 0;
 struct list_head VAR_8;
 int VAR_9 = 0;

 FUNC_0(&VAR_8);

 FUNC_3(&VAR_2->lock);


 if (!FUNC_6(VAR_6))
  goto done_unlock;

 if (VAR_6->sdma_descq_added != VAR_6->sdma_descq_removed) {
  FUNC_8(VAR_6);
  FUNC_10(VAR_6, VAR_2);
 }

 while (VAR_4) {
  const int VAR_10 = 8;

  FUNC_1(&VAR_0->mm->mmap_sem);
  VAR_7 = FUNC_11(VAR_5, VAR_2, &VAR_8, VAR_3, VAR_4, VAR_10);
  FUNC_12(&VAR_0->mm->mmap_sem);

  if (VAR_7 <= 0)
   goto done_unlock;
  else {
   VAR_4 -= VAR_7;
   VAR_3 += VAR_7;
  }


  if (!FUNC_2(&VAR_8)) {





   if (FUNC_5(VAR_6) < VAR_7 * 4) {
    FUNC_8(VAR_6);
    FUNC_10(VAR_6, VAR_2);
   }

   VAR_7 = FUNC_9(VAR_6, VAR_2, &VAR_8);
   if (VAR_7 < 0)
    goto done_unlock;
   else {
    VAR_9 += VAR_7;
    VAR_2->counter += VAR_7;

    if (!FUNC_2(&VAR_8))
     goto done_unlock;
   }
  }
 }

done_unlock:
 if (!FUNC_2(&VAR_8))
  FUNC_7(&VAR_5->pcidev->dev, VAR_2, &VAR_8);
 FUNC_4(&VAR_2->lock);

 return (VAR_7 < 0) ? VAR_7 : VAR_9;
}
