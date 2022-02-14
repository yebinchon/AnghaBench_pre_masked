
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; struct cifsFileInfo* private_data; } ;
struct TYPE_7__ {int name; } ;
struct dentry {TYPE_3__ d_name; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifsFileInfo {int netfid; int tlink; } ;
struct TYPE_8__ {int clientCanCacheRead; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int FUNC_0 (int,struct cifs_tcon*,int ) ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (struct inode*) ;
 struct cifs_tcon* FUNC_7 (int ) ;

int FUNC_8(struct file *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 struct cifs_tcon *VAR_6;
 struct cifsFileInfo *VAR_7 = VAR_1->private_data;
 struct inode *VAR_8 = VAR_1->f_path.dentry->d_inode;
 struct cifs_sb_info *VAR_9 = FUNC_2(VAR_8->i_sb);

 VAR_4 = FUNC_4();

 FUNC_5(1, "Sync file - name: %s datasync: 0x%x",
  VAR_2->d_name.name, VAR_3);

 if (!FUNC_1(VAR_8)->clientCanCacheRead) {
  VAR_5 = FUNC_6(VAR_8);
  if (VAR_5) {
   FUNC_5(1, "rc: %d during invalidate phase", VAR_5);
   VAR_5 = 0;
  }
 }

 VAR_6 = FUNC_7(VAR_7->tlink);
 if (!(VAR_9->mnt_cifs_flags & VAR_0))
  VAR_5 = FUNC_0(VAR_4, VAR_6, VAR_7->netfid);

 FUNC_3(VAR_4);
 return VAR_5;
}
