
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jfs_inode_info {int active_ag; int ag_lock; int anon_inode_list; } ;
struct inode {int i_sb; } ;
struct bmap {int * db_active; } ;
struct TYPE_2__ {struct bmap* bmap; } ;


 int FUNC_0 (int) ;
 struct jfs_inode_info* FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct jfs_inode_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_1)
{
 struct jfs_inode_info *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(!FUNC_5(&VAR_2->anon_inode_list));

 FUNC_6(&VAR_2->ag_lock);
 if (VAR_2->active_ag != -1) {
  struct bmap *VAR_3 = FUNC_2(VAR_1->i_sb)->bmap;
  FUNC_3(&VAR_3->db_active[VAR_2->active_ag]);
  VAR_2->active_ag = -1;
 }
 FUNC_7(&VAR_2->ag_lock);
 FUNC_4(VAR_0, VAR_2);
}
