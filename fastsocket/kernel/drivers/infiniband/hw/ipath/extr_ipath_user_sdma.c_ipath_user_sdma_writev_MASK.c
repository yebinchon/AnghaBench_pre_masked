
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct ipath_user_sdma_queue {int counter; int lock; } ;
struct ipath_devdata {scalar_t__ ipath_sdma_descq_added; scalar_t__ ipath_sdma_descq_removed; TYPE_2__* pcidev; } ;
struct iovec {int dummy; } ;
struct TYPE_6__ {TYPE_1__* mm; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int mmap_sem; } ;


 int FUNC_0 (struct list_head*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ipath_devdata*) ;
 int FUNC_3 (int *,struct ipath_user_sdma_queue*,struct list_head*) ;
 int FUNC_4 (struct ipath_devdata*) ;
 int FUNC_5 (struct ipath_devdata*,struct ipath_user_sdma_queue*,struct list_head*) ;
 int FUNC_6 (struct ipath_devdata*,struct ipath_user_sdma_queue*) ;
 int FUNC_7 (struct ipath_devdata*,struct ipath_user_sdma_queue*,struct list_head*,struct iovec const*,unsigned long,int const) ;
 int FUNC_8 (struct list_head*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct ipath_devdata *VAR_1,
      struct ipath_user_sdma_queue *VAR_2,
      const struct iovec *VAR_3,
      unsigned long VAR_4)
{
 int VAR_5 = 0;
 struct list_head VAR_6;
 int VAR_7 = 0;

 FUNC_0(&VAR_6);

 FUNC_9(&VAR_2->lock);

 if (VAR_1->ipath_sdma_descq_added != VAR_1->ipath_sdma_descq_removed) {
  FUNC_4(VAR_1);
  FUNC_6(VAR_1, VAR_2);
 }

 while (VAR_4) {
  const int VAR_8 = 8;

  FUNC_1(&VAR_0->mm->mmap_sem);
  VAR_5 = FUNC_7(VAR_1, VAR_2, &VAR_6, VAR_3, VAR_4, VAR_8);
  FUNC_11(&VAR_0->mm->mmap_sem);

  if (VAR_5 <= 0)
   goto done_unlock;
  else {
   VAR_4 -= VAR_5;
   VAR_3 += VAR_5;
  }


  if (!FUNC_8(&VAR_6)) {





   if (FUNC_2(VAR_1) < VAR_5 * 4) {
    FUNC_4(VAR_1);
    FUNC_6(VAR_1, VAR_2);
   }

   VAR_5 = FUNC_5(VAR_1, VAR_2, &VAR_6);
   if (VAR_5 < 0)
    goto done_unlock;
   else {
    VAR_7 += VAR_5;
    VAR_2->counter += VAR_5;

    if (!FUNC_8(&VAR_6))
     goto done_unlock;
   }
  }
 }

done_unlock:
 if (!FUNC_8(&VAR_6))
  FUNC_3(&VAR_1->pcidev->dev, VAR_2, &VAR_6);
 FUNC_10(&VAR_2->lock);

 return (VAR_5 < 0) ? VAR_5 : VAR_7;
}
