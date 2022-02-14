
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_user_sdma_queue {int lock; int sent; } ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {TYPE_1__* pcidev; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct list_head*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct qib_devdata*,char*) ;
 int FUNC_7 (int *,struct qib_user_sdma_queue*,struct list_head*) ;
 int FUNC_8 (struct qib_pportdata*) ;
 int FUNC_9 (struct qib_pportdata*,struct qib_user_sdma_queue*) ;

void FUNC_10(struct qib_pportdata *VAR_1,
          struct qib_user_sdma_queue *VAR_2)
{
 struct qib_devdata *VAR_3 = VAR_1->dd;
 int VAR_4;

 if (!VAR_2)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_4(&VAR_2->lock);
  if (FUNC_1(&VAR_2->sent)) {
   FUNC_5(&VAR_2->lock);
   break;
  }
  FUNC_8(VAR_1);
  FUNC_9(VAR_1, VAR_2);
  FUNC_5(&VAR_2->lock);
  FUNC_3(10);
 }

 if (!FUNC_1(&VAR_2->sent)) {
  struct list_head VAR_5;

  FUNC_6(VAR_3, "user sdma lists not empty: forcing!\n");
  FUNC_0(&VAR_5);
  FUNC_4(&VAR_2->lock);
  FUNC_2(&VAR_2->sent, &VAR_5);
  FUNC_7(&VAR_3->pcidev->dev, VAR_2, &VAR_5);
  FUNC_5(&VAR_2->lock);
 }
}
