
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct cifs_tcon {scalar_t__ unix_ext; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct cifsInodeInfo {scalar_t__ time; } ;
struct TYPE_2__ {int i_nlink; } ;


 int FUNC_0 (int,struct cifs_tcon*,char*,char*,int ,int) ;
 int FUNC_1 (int,struct cifs_tcon*,char*,char*,int ,int) ;
 struct cifsInodeInfo* FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct tcon_link*) ;
 int FUNC_7 (struct tcon_link*) ;
 char* FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct tcon_link*) ;
 struct tcon_link* FUNC_10 (struct cifs_sb_info*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (char*) ;
 struct cifs_tcon* FUNC_13 (struct tcon_link*) ;

int
FUNC_14(struct dentry *VAR_6, struct inode *VAR_7,
       struct dentry *VAR_8)
{
 int VAR_9 = -VAR_1;
 int VAR_10;
 char *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 struct cifs_sb_info *VAR_13 = FUNC_3(VAR_7->i_sb);
 struct tcon_link *VAR_14;
 struct cifs_tcon *VAR_15;
 struct cifsInodeInfo *VAR_16;

 VAR_14 = FUNC_10(VAR_13);
 if (FUNC_6(VAR_14))
  return FUNC_7(VAR_14);
 VAR_15 = FUNC_13(VAR_14);

 VAR_10 = FUNC_5();

 VAR_11 = FUNC_8(VAR_6);
 VAR_12 = FUNC_8(VAR_8);
 if ((VAR_11 == ((void*)0)) || (VAR_12 == ((void*)0))) {
  VAR_9 = -VAR_4;
  goto cifs_hl_exit;
 }

 if (VAR_15->unix_ext)
  VAR_9 = FUNC_1(VAR_10, VAR_15, VAR_11, VAR_12,
         VAR_13->local_nls,
         VAR_13->mnt_cifs_flags &
      VAR_0);
 else {
  VAR_9 = FUNC_0(VAR_10, VAR_15, VAR_11, VAR_12,
     VAR_13->local_nls,
     VAR_13->mnt_cifs_flags &
      VAR_0);
  if ((VAR_9 == -VAR_3) || (VAR_9 == -VAR_2))
   VAR_9 = -VAR_5;
 }

 FUNC_11(VAR_8);



 if (VAR_6->d_inode) {
  VAR_16 = FUNC_2(VAR_6->d_inode);
  if (VAR_9 == 0) {
   VAR_6->d_inode->i_nlink++;






  }


  VAR_16->time = 0;






 }

cifs_hl_exit:
 FUNC_12(VAR_11);
 FUNC_12(VAR_12);
 FUNC_4(VAR_10);
 FUNC_9(VAR_14);
 return VAR_9;
}
