
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jfs_inode_info {int active_ag; int ag_lock; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct bmap {int * db_active; } ;
struct TYPE_2__ {struct bmap* bmap; } ;


 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct jfs_inode_info *VAR_2 = FUNC_0(VAR_0);

 FUNC_3(&VAR_2->ag_lock);
 if (VAR_2->active_ag != -1) {
  struct bmap *VAR_3 = FUNC_1(VAR_0->i_sb)->bmap;
  FUNC_2(&VAR_3->db_active[VAR_2->active_ag]);
  VAR_2->active_ag = -1;
 }
 FUNC_4(&VAR_2->ag_lock);

 return 0;
}
