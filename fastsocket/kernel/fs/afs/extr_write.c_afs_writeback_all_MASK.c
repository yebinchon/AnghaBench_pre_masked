
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int range_cyclic; int nr_to_write; int sync_mode; } ;
struct TYPE_3__ {struct address_space* i_mapping; } ;
struct afs_vnode {TYPE_1__ vfs_inode; } ;
struct address_space {int host; TYPE_2__* a_ops; } ;
struct TYPE_4__ {int (* writepages ) (struct address_space*,struct writeback_control*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct address_space*,struct writeback_control*) ;

int FUNC_4(struct afs_vnode *VAR_3)
{
 struct address_space *VAR_4 = VAR_3->vfs_inode.i_mapping;
 struct writeback_control VAR_5 = {
  .sync_mode = VAR_2,
  .nr_to_write = VAR_1,
  .range_cyclic = 1,
 };
 int VAR_6;

 FUNC_1("");

 VAR_6 = VAR_4->a_ops->writepages(VAR_4, &VAR_5);
 FUNC_0(VAR_4->host, VAR_0);

 FUNC_2(" = %d", VAR_6);
 return VAR_6;
}
