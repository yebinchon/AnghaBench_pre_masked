
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wb_writeback_work {long nr_pages; int range_cyclic; int for_background; int sync_mode; } ;
struct TYPE_2__ {scalar_t__ task; } ;
struct backing_dev_info {TYPE_1__ wb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct backing_dev_info*,struct wb_writeback_work*) ;
 struct wb_writeback_work* FUNC_1 (int,int ) ;
 int FUNC_2 (struct backing_dev_info*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct backing_dev_info *VAR_2, long VAR_3,
  bool VAR_4, bool VAR_5)
{
 struct wb_writeback_work *VAR_6;





 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6) {
  if (VAR_2->wb.task) {
   FUNC_2(VAR_2);
   FUNC_3(VAR_2->wb.task);
  }
  return;
 }

 VAR_6->sync_mode = VAR_1;
 VAR_6->nr_pages = VAR_3;
 VAR_6->range_cyclic = VAR_4;
 VAR_6->for_background = VAR_5;

 FUNC_0(VAR_2, VAR_6);
}
