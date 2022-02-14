
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_3__ {TYPE_2__* dentry; } ;
struct file {struct cifsFileInfo* private_data; TYPE_1__ f_path; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_fattr {int dummy; } ;
struct cifsFileInfo {int netfid; int tlink; } ;
struct TYPE_4__ {struct inode* d_inode; } ;
typedef int FILE_UNIX_BASIC_INFO ;


 int FUNC_0 (int,struct cifs_tcon*,int ,int *) ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct cifs_fattr*,int ) ;
 int FUNC_5 (struct inode*,struct cifs_fattr*) ;
 int FUNC_6 (struct cifs_fattr*,int *,struct cifs_sb_info*) ;
 struct cifs_tcon* FUNC_7 (int ) ;

int FUNC_8(struct file *VAR_1)
{
 int VAR_2;
 int VAR_3;
 FILE_UNIX_BASIC_INFO VAR_4;
 struct cifs_fattr VAR_5;
 struct inode *VAR_6 = VAR_1->f_path.dentry->d_inode;
 struct cifs_sb_info *VAR_7 = FUNC_1(VAR_6->i_sb);
 struct cifsFileInfo *VAR_8 = VAR_1->private_data;
 struct cifs_tcon *VAR_9 = FUNC_7(VAR_8->tlink);

 VAR_3 = FUNC_3();
 VAR_2 = FUNC_0(VAR_3, VAR_9, VAR_8->netfid, &VAR_4);
 if (!VAR_2) {
  FUNC_6(&VAR_5, &VAR_4, VAR_7);
 } else if (VAR_2 == -VAR_0) {
  FUNC_4(&VAR_5, VAR_6->i_sb);
  VAR_2 = 0;
 }

 FUNC_5(VAR_6, &VAR_5);
 FUNC_2(VAR_3);
 return VAR_2;
}
