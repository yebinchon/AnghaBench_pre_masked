
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_ino; int i_nlink; void* i_ctime; void* i_mtime; int i_sb; } ;
struct ext4_dir_entry_2 {int inode; } ;
struct dentry {struct inode* d_inode; int d_name; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 void* FUNC_6 (struct inode*) ;
 int FUNC_7 (int *,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*) ;
 struct buffer_head* FUNC_8 (struct inode*,int *,struct ext4_dir_entry_2**) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct inode*) ;
 int FUNC_13 (int *,struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int ,char*,scalar_t__,int) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct inode*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;
 struct inode *VAR_5;
 struct buffer_head *VAR_6;
 struct ext4_dir_entry_2 *VAR_7;
 handle_t *VAR_8;



 FUNC_17(VAR_3->d_inode);
 VAR_8 = FUNC_10(VAR_2, FUNC_0(VAR_2->i_sb));
 if (FUNC_2(VAR_8))
  return FUNC_3(VAR_8);

 if (FUNC_1(VAR_2))
  FUNC_9(VAR_8);

 VAR_4 = -VAR_1;
 VAR_6 = FUNC_8(VAR_2, &VAR_3->d_name, &VAR_7);
 if (!VAR_6)
  goto end_unlink;

 VAR_5 = VAR_3->d_inode;

 VAR_4 = -VAR_0;
 if (FUNC_16(VAR_7->inode) != VAR_5->i_ino)
  goto end_unlink;

 if (!VAR_5->i_nlink) {
  FUNC_15(VAR_5->i_sb,
        "Deleting nonexistent file (%lu), %d",
        VAR_5->i_ino, VAR_5->i_nlink);
  VAR_5->i_nlink = 1;
 }
 VAR_4 = FUNC_7(VAR_8, VAR_2, VAR_7, VAR_6);
 if (VAR_4)
  goto end_unlink;
 VAR_2->i_ctime = VAR_2->i_mtime = FUNC_6(VAR_2);
 FUNC_14(VAR_2);
 FUNC_12(VAR_8, VAR_2);
 FUNC_5(VAR_5);
 if (!VAR_5->i_nlink)
  FUNC_13(VAR_8, VAR_5);
 VAR_5->i_ctime = FUNC_6(VAR_5);
 FUNC_12(VAR_8, VAR_5);
 VAR_4 = 0;

end_unlink:
 FUNC_11(VAR_8);
 FUNC_4(VAR_6);
 return VAR_4;
}
