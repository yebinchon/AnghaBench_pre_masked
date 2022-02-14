
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_ino; int i_mtime; int i_ctime; scalar_t__ i_size; int i_version; int i_nlink; int i_sb; } ;
struct ext4_dir_entry_2 {int inode; } ;
struct dentry {struct inode* d_inode; int d_name; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *,struct inode*) ;
 int FUNC_10 (int *,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*) ;
 struct buffer_head* FUNC_11 (struct inode*,int *,struct ext4_dir_entry_2**) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,struct inode*) ;
 int FUNC_16 (int *,struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int ,char*,int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (struct inode*) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_3, struct dentry *VAR_4)
{
 int VAR_5;
 struct inode *VAR_6;
 struct buffer_head *VAR_7;
 struct ext4_dir_entry_2 *VAR_8;
 handle_t *VAR_9;



 FUNC_20(VAR_4->d_inode);
 VAR_9 = FUNC_13(VAR_3, FUNC_0(VAR_3->i_sb));
 if (FUNC_3(VAR_9))
  return FUNC_4(VAR_9);

 VAR_5 = -VAR_1;
 VAR_7 = FUNC_11(VAR_3, &VAR_4->d_name, &VAR_8);
 if (!VAR_7)
  goto end_rmdir;

 if (FUNC_2(VAR_3))
  FUNC_12(VAR_9);

 VAR_6 = VAR_4->d_inode;

 VAR_5 = -VAR_0;
 if (FUNC_19(VAR_8->inode) != VAR_6->i_ino)
  goto end_rmdir;

 VAR_5 = -VAR_2;
 if (!FUNC_7(VAR_6))
  goto end_rmdir;

 VAR_5 = FUNC_10(VAR_9, VAR_3, VAR_8, VAR_7);
 if (VAR_5)
  goto end_rmdir;
 if (!FUNC_1(VAR_6))
  FUNC_18(VAR_6->i_sb,
        "empty directory has too many links (%d)",
        VAR_6->i_nlink);
 VAR_6->i_version++;
 FUNC_6(VAR_6);



 VAR_6->i_size = 0;
 FUNC_16(VAR_9, VAR_6);
 VAR_6->i_ctime = VAR_3->i_ctime = VAR_3->i_mtime = FUNC_8(VAR_6);
 FUNC_15(VAR_9, VAR_6);
 FUNC_9(VAR_9, VAR_3);
 FUNC_17(VAR_3);
 FUNC_15(VAR_9, VAR_3);

end_rmdir:
 FUNC_14(VAR_9);
 FUNC_5(VAR_7);
 return VAR_5;
}
