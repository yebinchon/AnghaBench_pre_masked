
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jfs_ea_list {int dummy; } ;
struct jfs_ea {int dummy; } ;
struct inode {int dummy; } ;
struct ea_buffer {scalar_t__ xattr; } ;
struct dentry {struct inode* d_inode; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int xattr_sem; } ;


 struct jfs_ea* FUNC_0 (struct jfs_ea_list*) ;
 size_t VAR_0 ;
 struct jfs_ea* FUNC_1 (struct jfs_ea_list*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 struct jfs_ea* FUNC_3 (struct jfs_ea*) ;
 scalar_t__ FUNC_4 (struct jfs_ea*) ;
 int FUNC_5 (char*,struct jfs_ea*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct ea_buffer*,int ) ;
 int FUNC_8 (struct inode*,struct ea_buffer*) ;
 scalar_t__ FUNC_9 (struct jfs_ea*) ;
 int FUNC_10 (int *) ;

ssize_t FUNC_11(struct dentry * VAR_1, char *VAR_2, size_t VAR_3)
{
 struct inode *VAR_4 = VAR_1->d_inode;
 char *VAR_5;
 ssize_t VAR_6 = 0;
 int VAR_7;
 struct jfs_ea_list *VAR_8;
 struct jfs_ea *VAR_9;
 struct ea_buffer VAR_10;

 FUNC_6(&FUNC_2(VAR_4)->xattr_sem);

 VAR_7 = FUNC_7(VAR_4, &VAR_10, 0);
 if (VAR_7 < 0) {
  VAR_6 = VAR_7;
  goto out;
 }

 if (VAR_7 == 0)
  goto release;

 VAR_8 = (struct jfs_ea_list *) VAR_10.xattr;


 for (VAR_9 = FUNC_1(VAR_8); VAR_9 < FUNC_0(VAR_8); VAR_9 = FUNC_3(VAR_9)) {
  if (FUNC_4(VAR_9))
   VAR_6 += FUNC_9(VAR_9) + 1;
 }

 if (!VAR_2)
  goto release;

 if (VAR_6 > VAR_3) {
  VAR_6 = -VAR_0;
  goto release;
 }


 VAR_5 = VAR_2;
 for (VAR_9 = FUNC_1(VAR_8); VAR_9 < FUNC_0(VAR_8); VAR_9 = FUNC_3(VAR_9)) {
  if (FUNC_4(VAR_9)) {
   int VAR_11 = FUNC_5(VAR_5, VAR_9);
   VAR_5 += VAR_11 + 1;
  }
 }

      release:
 FUNC_8(VAR_4, &VAR_10);
      out:
 FUNC_10(&FUNC_2(VAR_4)->xattr_sem);
 return VAR_6;
}
