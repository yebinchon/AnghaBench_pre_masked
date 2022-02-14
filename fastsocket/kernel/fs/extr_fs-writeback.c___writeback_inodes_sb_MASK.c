
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int older_than_this; int for_kupdate; } ;
struct super_block {int s_umount; } ;
struct bdi_writeback {int b_io; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bdi_writeback*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*,struct bdi_writeback*,struct writeback_control*,int) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_1,
  struct bdi_writeback *VAR_2, struct writeback_control *VAR_3)
{
 FUNC_0(!FUNC_3(&VAR_1->s_umount));

 FUNC_4(&VAR_0);
 if (!VAR_3->for_kupdate || FUNC_1(&VAR_2->b_io))
  FUNC_2(VAR_2, VAR_3->older_than_this);
 FUNC_6(VAR_1, VAR_2, VAR_3, 1);
 FUNC_5(&VAR_0);
}
