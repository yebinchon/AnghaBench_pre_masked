
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; int i_nlink; int i_mtime; int i_ctime; scalar_t__ i_size; int i_version; int i_sb; } ;
struct ext3_dir_entry_2 {int inode; } ;
struct dentry {struct inode* d_inode; int d_name; } ;
struct buffer_head {int dummy; } ;
struct TYPE_9__ {int h_sync; } ;
typedef TYPE_1__ handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (TYPE_1__*,struct inode*,struct ext3_dir_entry_2*,struct buffer_head*) ;
 struct buffer_head* FUNC_9 (struct inode*,int *,struct ext3_dir_entry_2**) ;
 TYPE_1__* FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,struct inode*) ;
 int FUNC_13 (TYPE_1__*,struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int ,char*,char*,int) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct inode*) ;

__attribute__((used)) static int FUNC_18 (struct inode * VAR_4, struct dentry *VAR_5)
{
 int VAR_6;
 struct inode * VAR_7;
 struct buffer_head * VAR_8;
 struct ext3_dir_entry_2 * VAR_9;
 handle_t *VAR_10;



 FUNC_17(VAR_5->d_inode);
 VAR_10 = FUNC_10(VAR_4, FUNC_0(VAR_4->i_sb));
 if (FUNC_2(VAR_10))
  return FUNC_3(VAR_10);

 VAR_6 = -VAR_2;
 VAR_8 = FUNC_9(VAR_4, &VAR_5->d_name, &VAR_9);
 if (!VAR_8)
  goto end_rmdir;

 if (FUNC_1(VAR_4))
  VAR_10->h_sync = 1;

 VAR_7 = VAR_5->d_inode;

 VAR_6 = -VAR_1;
 if (FUNC_16(VAR_9->inode) != VAR_7->i_ino)
  goto end_rmdir;

 VAR_6 = -VAR_3;
 if (!FUNC_7 (VAR_7))
  goto end_rmdir;

 VAR_6 = FUNC_8(VAR_10, VAR_4, VAR_9, VAR_8);
 if (VAR_6)
  goto end_rmdir;
 if (VAR_7->i_nlink != 2)
  FUNC_15 (VAR_7->i_sb, "ext3_rmdir",
         "empty directory has nlink!=2 (%d)",
         VAR_7->i_nlink);
 VAR_7->i_version++;
 FUNC_5(VAR_7);



 VAR_7->i_size = 0;
 FUNC_13(VAR_10, VAR_7);
 VAR_7->i_ctime = VAR_4->i_ctime = VAR_4->i_mtime = VAR_0;
 FUNC_12(VAR_10, VAR_7);
 FUNC_6(VAR_4);
 FUNC_14(VAR_4);
 FUNC_12(VAR_10, VAR_4);

end_rmdir:
 FUNC_11(VAR_10);
 FUNC_4 (VAR_8);
 return VAR_6;
}
