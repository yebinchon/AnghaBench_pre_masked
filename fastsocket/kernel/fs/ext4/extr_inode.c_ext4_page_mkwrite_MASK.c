
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_fault {struct page* page; } ;
struct vm_area_struct {struct file* vm_file; } ;
struct page {unsigned long index; struct address_space* mapping; } ;
struct inode {int i_sb; struct address_space* i_mapping; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct address_space {int dummy; } ;
typedef unsigned long loff_t ;
typedef int handle_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct vm_area_struct*,struct vm_fault*,int ) ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,int ) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (int ,int*) ;
 int FUNC_9 (struct inode*) ;
 unsigned long FUNC_10 (struct inode*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 scalar_t__ FUNC_13 (struct page*) ;
 unsigned long FUNC_14 (struct page*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 scalar_t__ FUNC_20 (int *,int ,int ,unsigned long,int *,int ) ;

int FUNC_21(struct vm_area_struct *VAR_13, struct vm_fault *VAR_14)
{
 struct page *VAR_15 = VAR_14->page;
 loff_t VAR_16;
 unsigned long VAR_17;
 int VAR_18;
 struct file *VAR_19 = VAR_13->vm_file;
 struct inode *VAR_20 = VAR_19->f_path.dentry->d_inode;
 struct address_space *VAR_21 = VAR_20->i_mapping;
 handle_t *VAR_22;
 int VAR_23 = 0;

 FUNC_16(VAR_20->i_sb);

 if (FUNC_17(VAR_20->i_sb, VAR_0) &&
     !FUNC_7(VAR_20) &&
     !FUNC_5(VAR_20->i_sb)) {
  do {
   VAR_18 = FUNC_1(VAR_13, VAR_14,
         VAR_11);
  } while (VAR_18 == -VAR_1 &&
   FUNC_8(VAR_20->i_sb, &VAR_23));
  goto out_ret;
 }

 FUNC_11(VAR_15);
 VAR_16 = FUNC_10(VAR_20);

 if (VAR_15->mapping != VAR_21 || FUNC_14(VAR_15) > VAR_16) {
  FUNC_18(VAR_15);
  VAR_18 = VAR_7;
  goto out;
 }

 if (VAR_15->index == VAR_16 >> VAR_4)
  VAR_17 = VAR_16 & ~VAR_3;
 else
  VAR_17 = VAR_5;




 if (FUNC_13(VAR_15)) {
  if (!FUNC_20(((void*)0), FUNC_12(VAR_15), 0, VAR_17, ((void*)0),
     VAR_10)) {

   FUNC_19(VAR_15);
   VAR_18 = VAR_6;
   goto out;
  }
 }
 FUNC_18(VAR_15);

retry_alloc:
 VAR_22 = FUNC_3(VAR_20, FUNC_9(VAR_20));
 if (FUNC_0(VAR_22)) {
  VAR_18 = VAR_8;
  goto out;
 }
 VAR_18 = FUNC_1(VAR_13, VAR_14, VAR_12);
 if (!VAR_18 && FUNC_7(VAR_20)) {
  if (FUNC_20(VAR_22, FUNC_12(VAR_15), 0,
     VAR_5, ((void*)0), VAR_9)) {
   FUNC_18(VAR_15);
   VAR_18 = VAR_8;
   goto out;
  }
  FUNC_6(VAR_20, VAR_2);
 }
 FUNC_4(VAR_22);
 if (VAR_18 == -VAR_1 && FUNC_8(VAR_20->i_sb, &VAR_23))
  goto retry_alloc;
out_ret:
 VAR_18 = FUNC_2(VAR_18);
out:
 FUNC_15(VAR_20->i_sb);
        return VAR_18;
}
