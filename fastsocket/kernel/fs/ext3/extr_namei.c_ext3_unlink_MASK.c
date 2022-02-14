
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; int i_nlink; int i_ctime; int i_mtime; int i_sb; } ;
struct ext3_dir_entry_2 {int inode; } ;
struct dentry {struct inode* d_inode; int d_name; } ;
struct buffer_head {int dummy; } ;
struct TYPE_9__ {int h_sync; } ;
typedef TYPE_1__ handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (TYPE_1__*,struct inode*,struct ext3_dir_entry_2*,struct buffer_head*) ;
 struct buffer_head* FUNC_7 (struct inode*,int *,struct ext3_dir_entry_2**) ;
 TYPE_1__* FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,struct inode*) ;
 int FUNC_11 (TYPE_1__*,struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,char*,char*,scalar_t__,int) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct inode*,struct dentry*) ;
 int FUNC_16 (struct dentry*,int) ;
 int FUNC_17 (struct inode*) ;

__attribute__((used)) static int FUNC_18(struct inode * VAR_3, struct dentry *VAR_4)
{
 int VAR_5;
 struct inode * VAR_6;
 struct buffer_head * VAR_7;
 struct ext3_dir_entry_2 * VAR_8;
 handle_t *VAR_9;

 FUNC_15(VAR_3, VAR_4);


 FUNC_17(VAR_4->d_inode);
 VAR_9 = FUNC_8(VAR_3, FUNC_0(VAR_3->i_sb));
 if (FUNC_2(VAR_9))
  return FUNC_3(VAR_9);

 if (FUNC_1(VAR_3))
  VAR_9->h_sync = 1;

 VAR_5 = -VAR_2;
 VAR_7 = FUNC_7(VAR_3, &VAR_4->d_name, &VAR_8);
 if (!VAR_7)
  goto end_unlink;

 VAR_6 = VAR_4->d_inode;

 VAR_5 = -VAR_1;
 if (FUNC_14(VAR_8->inode) != VAR_6->i_ino)
  goto end_unlink;

 if (!VAR_6->i_nlink) {
  FUNC_13 (VAR_6->i_sb, "ext3_unlink",
         "Deleting nonexistent file (%lu), %d",
         VAR_6->i_ino, VAR_6->i_nlink);
  VAR_6->i_nlink = 1;
 }
 VAR_5 = FUNC_6(VAR_9, VAR_3, VAR_8, VAR_7);
 if (VAR_5)
  goto end_unlink;
 VAR_3->i_ctime = VAR_3->i_mtime = VAR_0;
 FUNC_12(VAR_3);
 FUNC_10(VAR_9, VAR_3);
 FUNC_5(VAR_6);
 if (!VAR_6->i_nlink)
  FUNC_11(VAR_9, VAR_6);
 VAR_6->i_ctime = VAR_3->i_ctime;
 FUNC_10(VAR_9, VAR_6);
 VAR_5 = 0;

end_unlink:
 FUNC_9(VAR_9);
 FUNC_4 (VAR_7);
 FUNC_16(VAR_4, VAR_5);
 return VAR_5;
}
