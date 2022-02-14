
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wb_writeback_work {int list; } ;
struct bdi_writeback {scalar_t__ task; } ;
struct backing_dev_info {struct bdi_writeback wb; int wb_list; int wb_lock; int work_list; } ;
struct TYPE_3__ {scalar_t__ task; } ;
struct TYPE_4__ {TYPE_1__ wb; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct backing_dev_info*,struct wb_writeback_work*) ;
 int FUNC_5 (struct backing_dev_info*,struct wb_writeback_work*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct backing_dev_info *VAR_1,
  struct wb_writeback_work *VAR_2)
{
 FUNC_5(VAR_1, VAR_2);

 FUNC_2(&VAR_1->wb_lock);
 FUNC_0(&VAR_2->list, &VAR_1->work_list);
 FUNC_3(&VAR_1->wb_lock);





 if (FUNC_6(FUNC_1(&VAR_1->wb_list))) {
   FUNC_4(VAR_1, VAR_2);
  FUNC_7(VAR_0.wb.task);
 } else {
  struct bdi_writeback *VAR_3 = &VAR_1->wb;

  if (VAR_3->task)
   FUNC_7(VAR_3->task);
 }
}
