
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jfs_inode_info {int active_ag; int agno; int ag_lock; } ;
struct inode {scalar_t__ i_size; int i_sb; int i_mode; } ;
struct file {int f_mode; } ;
struct TYPE_4__ {TYPE_1__* bmap; } ;
struct TYPE_3__ {int * db_active; } ;


 int VAR_0 ;
 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct file*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_4(VAR_1, VAR_2)))
  return VAR_3;
 if (FUNC_2(VAR_1->i_mode) && VAR_2->f_mode & VAR_0 &&
     (VAR_1->i_size == 0)) {
  struct jfs_inode_info *VAR_4 = FUNC_0(VAR_1);
  FUNC_5(&VAR_4->ag_lock);
  if (VAR_4->active_ag == -1) {
   VAR_4->active_ag = VAR_4->agno;
   FUNC_3(
       &FUNC_1(VAR_1->i_sb)->bmap->db_active[VAR_4->agno]);
  }
  FUNC_6(&VAR_4->ag_lock);
 }

 return 0;
}
