
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int dummy; } ;
struct inode {int i_sb; int i_mtime; int i_ctime; int i_lock; } ;
struct dentry {struct inode* d_inode; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct cifsInodeInfo {scalar_t__ time; } ;


 int FUNC_0 (int,struct cifs_tcon*,char*,int ,int) ;
 struct cifsInodeInfo* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct tcon_link*) ;
 int FUNC_6 (struct tcon_link*) ;
 char* FUNC_7 (struct dentry*) ;
 int FUNC_8 (int,char*,struct inode*) ;
 int FUNC_9 (struct tcon_link*) ;
 struct tcon_link* FUNC_10 (struct cifs_sb_info*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 struct cifs_tcon* FUNC_18 (struct tcon_link*) ;

int FUNC_19(struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 struct cifs_sb_info *VAR_6;
 struct tcon_link *VAR_7;
 struct cifs_tcon *VAR_8;
 char *VAR_9 = ((void*)0);
 struct cifsInodeInfo *VAR_10;

 FUNC_8(1, "cifs_rmdir, inode = 0x%p", VAR_2);

 VAR_5 = FUNC_4();

 VAR_9 = FUNC_7(VAR_3);
 if (VAR_9 == ((void*)0)) {
  VAR_4 = -VAR_1;
  goto rmdir_exit;
 }

 VAR_6 = FUNC_2(VAR_2->i_sb);
 VAR_7 = FUNC_10(VAR_6);
 if (FUNC_5(VAR_7)) {
  VAR_4 = FUNC_6(VAR_7);
  goto rmdir_exit;
 }
 VAR_8 = FUNC_18(VAR_7);

 VAR_4 = FUNC_0(VAR_5, VAR_8, VAR_9, VAR_6->local_nls,
     VAR_6->mnt_cifs_flags & VAR_0);
 FUNC_9(VAR_7);

 if (!VAR_4) {
  FUNC_13(VAR_2);
  FUNC_16(&VAR_3->d_inode->i_lock);
  FUNC_14(VAR_3->d_inode, 0);
  FUNC_11(VAR_3->d_inode);
  FUNC_17(&VAR_3->d_inode->i_lock);
 }

 VAR_10 = FUNC_1(VAR_3->d_inode);
 VAR_10->time = 0;


 VAR_10 = FUNC_1(VAR_2);
 VAR_10->time = 0;


 VAR_3->d_inode->i_ctime = VAR_2->i_ctime = VAR_2->i_mtime =
  FUNC_12(VAR_2->i_sb);

rmdir_exit:
 FUNC_15(VAR_9);
 FUNC_3(VAR_5);
 return VAR_4;
}
