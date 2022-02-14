
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct cn_queue_dev {int wq_requested; struct work_struct wq_creation; int cn_queue; } ;
struct cn_callback_entry {struct cn_queue_dev* pdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct work_struct*) ;
 int FUNC_4 (struct work_struct*) ;

int FUNC_5(struct cn_callback_entry *VAR_0, struct work_struct *VAR_1)
{
 struct cn_queue_dev *VAR_2 = VAR_0->pdev;

 if (FUNC_2(VAR_2->cn_queue))
  return FUNC_3(VAR_2->cn_queue, VAR_1);


 if (FUNC_1(&VAR_2->wq_requested) == 1)
  FUNC_4(&VAR_2->wq_creation);
 else
  FUNC_0(&VAR_2->wq_requested);

 return FUNC_4(VAR_1);
}
