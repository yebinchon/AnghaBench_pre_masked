
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_writeback_work {unsigned long nr_pages; int * done; int sync_mode; struct super_block* sb; } ;
struct super_block {int s_bdi; int s_umount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct wb_writeback_work*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct super_block *VAR_2, unsigned long VAR_3)
{
 FUNC_0(VAR_1);
 struct wb_writeback_work VAR_4 = {
  .sb = VAR_2,
  .sync_mode = VAR_0,
  .done = &VAR_1,
  .nr_pages = VAR_3,
 };

 FUNC_1(!FUNC_3(&VAR_2->s_umount));
 FUNC_2(VAR_2->s_bdi, &VAR_4);
 FUNC_4(&VAR_1);
}
