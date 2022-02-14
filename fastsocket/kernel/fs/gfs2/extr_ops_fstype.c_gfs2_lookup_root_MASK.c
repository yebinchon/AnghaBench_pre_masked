
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct dentry {int * d_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct gfs2_sbd*,char*,char const*,...) ;
 int VAR_2 ;
 struct inode* FUNC_4 (struct super_block*,int ,int ,int ,int ) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_3, struct dentry **VAR_4,
       u64 VAR_5, const char *VAR_6)
{
 struct gfs2_sbd *VAR_7 = VAR_3->s_fs_info;
 struct dentry *VAR_8;
 struct inode *VAR_9;

 VAR_9 = FUNC_4(VAR_3, VAR_0, VAR_5, 0, 0);
 if (FUNC_0(VAR_9)) {
  FUNC_3(VAR_7, "can't read in %s inode: %ld\n", VAR_6, FUNC_1(VAR_9));
  return FUNC_1(VAR_9);
 }
 VAR_8 = FUNC_2(VAR_9);
 if (!VAR_8) {
  FUNC_3(VAR_7, "can't alloc %s dentry\n", VAR_6);
  FUNC_5(VAR_9);
  return -VAR_1;
 }
 VAR_8->d_op = &VAR_2;
 *VAR_4 = VAR_8;
 return 0;
}
