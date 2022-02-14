
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {char* i_private; int * i_fop; int * i_op; scalar_t__ i_size; } ;
struct dentry {TYPE_1__* d_inode; } ;
typedef int mode_t ;
struct TYPE_2__ {int i_mutex; int i_nlink; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int VAR_3 ;
 struct inode* FUNC_6 (struct super_block*,int) ;
 struct dentry* FUNC_7 (char const*,struct dentry*,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (char const*) ;

__attribute__((used)) static struct dentry *FUNC_11(struct super_block *VAR_6,
     struct dentry *VAR_7, const char *VAR_8,
     char *VAR_9, mode_t VAR_10)
{
 struct dentry *VAR_11;
 struct inode *VAR_12;

 FUNC_8(&VAR_7->d_inode->i_mutex);
 VAR_11 = FUNC_7(VAR_8, VAR_7, FUNC_10(VAR_8));
 if (FUNC_2(VAR_11)) {
  VAR_11 = FUNC_1(-VAR_0);
  goto fail;
 }
 VAR_12 = FUNC_6(VAR_6, VAR_10);
 if (!VAR_12) {
  FUNC_5(VAR_11);
  VAR_11 = FUNC_1(-VAR_0);
  goto fail;
 }
 if (VAR_10 & VAR_2) {
  VAR_12->i_fop = &VAR_3;
  if (VAR_9)
   VAR_12->i_size = FUNC_10(VAR_9);
  else
   VAR_12->i_size = 0;
 } else if (VAR_10 & VAR_1) {
  VAR_12->i_op = &VAR_4;
  VAR_12->i_fop = &VAR_5;
  VAR_7->d_inode->i_nlink++;
 } else
  FUNC_0();
 VAR_12->i_private = VAR_9;
 FUNC_3(VAR_11, VAR_12);
 FUNC_4(VAR_11);
fail:
 FUNC_9(&VAR_7->d_inode->i_mutex);
 return VAR_11;
}
