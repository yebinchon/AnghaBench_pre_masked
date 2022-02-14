
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct super_block {struct exofs_sb_info* s_fs_info; scalar_t__ s_dirt; } ;
struct exofs_sb_info {int s_dev; int s_curr_pending; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct exofs_sb_info*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_0)
{
 int VAR_1;
 struct exofs_sb_info *VAR_2 = VAR_0->s_fs_info;

 if (VAR_0->s_dirt)
  FUNC_1(VAR_0);


 for (VAR_1 = FUNC_0(&VAR_2->s_curr_pending); VAR_1 > 0;
      VAR_1 = FUNC_0(&VAR_2->s_curr_pending)) {
  wait_queue_head_t VAR_3;
  FUNC_2(&VAR_3);
  FUNC_6(VAR_3,
      (FUNC_0(&VAR_2->s_curr_pending) == 0),
      FUNC_4(100));
 }

 FUNC_5(VAR_2->s_dev);
 FUNC_3(VAR_0->s_fs_info);
 VAR_0->s_fs_info = ((void*)0);
}
