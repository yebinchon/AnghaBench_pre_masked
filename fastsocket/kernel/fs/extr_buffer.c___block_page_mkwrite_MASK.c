
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_fault {struct page* page; } ;
struct vm_area_struct {TYPE_4__* vm_file; } ;
struct page {scalar_t__ mapping; int index; } ;
struct inode {scalar_t__ i_mapping; TYPE_3__* i_sb; } ;
typedef int loff_t ;
typedef int get_block_t ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct TYPE_8__ {TYPE_2__ f_path; } ;
struct TYPE_7__ {scalar_t__ s_frozen; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct page*,int ,unsigned long) ;
 int FUNC_1 (struct page*,int ,unsigned long,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;

int FUNC_11(struct vm_area_struct *VAR_6, struct vm_fault *VAR_7,
    get_block_t VAR_8)
{
 struct page *VAR_9 = VAR_7->page;
 struct inode *VAR_10 = VAR_6->vm_file->f_path.dentry->d_inode;
 unsigned long VAR_11;
 loff_t VAR_12;
 int VAR_13;





 FUNC_2(VAR_6->vm_file);

 FUNC_4(VAR_9);
 VAR_12 = FUNC_3(VAR_10);
 if ((VAR_9->mapping != VAR_10->i_mapping) ||
     (FUNC_5(VAR_9) > VAR_12)) {

  VAR_13 = -VAR_1;
  goto out_unlock;
 }


 if (((VAR_9->index + 1) << VAR_3) > VAR_12)
  VAR_11 = VAR_12 & ~VAR_2;
 else
  VAR_11 = VAR_4;

 VAR_13 = FUNC_1(VAR_9, 0, VAR_11, VAR_8);
 if (!VAR_13)
  VAR_13 = FUNC_0(VAR_9, 0, VAR_11);

 if (FUNC_8(VAR_13 < 0))
  goto out_unlock;
 FUNC_7(VAR_9);
 if (!FUNC_6(VAR_10->i_sb) && VAR_10->i_sb->s_frozen != VAR_5) {
  VAR_13 = -VAR_0;
  goto out_unlock;
 }
 FUNC_10(VAR_9);
 return 0;
out_unlock:
 FUNC_9(VAR_9);
 return VAR_13;
}
