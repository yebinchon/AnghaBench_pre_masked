
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_fs_info; scalar_t__ s_dirt; } ;
struct bfs_sb_info {struct bfs_sb_info* si_imap; int bfs_lock; int si_sbh; } ;


 struct bfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bfs_sb_info*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_0)
{
 struct bfs_sb_info *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return;

 FUNC_4();

 if (VAR_0->s_dirt)
  FUNC_1(VAR_0);

 FUNC_2(VAR_1->si_sbh);
 FUNC_5(&VAR_1->bfs_lock);
 FUNC_3(VAR_1->si_imap);
 FUNC_3(VAR_1);
 VAR_0->s_fs_info = ((void*)0);

 FUNC_6();
}
