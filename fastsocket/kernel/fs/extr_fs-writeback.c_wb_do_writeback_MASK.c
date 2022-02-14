
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_writeback_work {scalar_t__ done; int sync_mode; } ;
struct bdi_writeback {struct backing_dev_info* bdi; } ;
struct backing_dev_info {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 struct wb_writeback_work* FUNC_2 (struct backing_dev_info*,struct bdi_writeback*) ;
 int FUNC_3 (struct wb_writeback_work*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (long) ;
 int FUNC_6 (struct backing_dev_info*,struct wb_writeback_work*) ;
 scalar_t__ FUNC_7 (struct bdi_writeback*) ;
 scalar_t__ FUNC_8 (struct bdi_writeback*,struct wb_writeback_work*) ;

long FUNC_9(struct bdi_writeback *VAR_2, int VAR_3)
{
 struct backing_dev_info *VAR_4 = VAR_2->bdi;
 struct wb_writeback_work *VAR_5;
 long VAR_6 = 0;

 FUNC_4(VAR_0, &VAR_2->bdi->state);
 while ((VAR_5 = FUNC_2(VAR_4, VAR_2)) != ((void*)0)) {




  if (VAR_3)
   VAR_5->sync_mode = VAR_1;

  FUNC_6(VAR_4, VAR_5);

  VAR_6 += FUNC_8(VAR_2, VAR_5);





  if (VAR_5->done)
   FUNC_1(VAR_5->done);
  else
   FUNC_3(VAR_5);
 }
 FUNC_5(VAR_6);




 VAR_6 += FUNC_7(VAR_2);
 FUNC_0(VAR_0, &VAR_2->bdi->state);

 return VAR_6;
}
