
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_dirt; } ;
struct bfs_sb_info {int bfs_lock; int si_sbh; } ;


 struct bfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0, int VAR_1)
{
 struct bfs_sb_info *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->bfs_lock);
 FUNC_1(VAR_2->si_sbh);
 VAR_0->s_dirt = 0;
 FUNC_3(&VAR_2->bfs_lock);

 return 0;
}
