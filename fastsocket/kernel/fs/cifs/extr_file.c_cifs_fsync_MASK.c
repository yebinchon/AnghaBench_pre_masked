
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* dentry; } ;
struct file {TYPE_2__ f_path; struct cifsFileInfo* private_data; } ;
struct dentry {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifsFileInfo {int netfid; int tlink; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_6__ {TYPE_1__ d_name; int d_sb; } ;


 int FUNC_0 (int,struct cifs_tcon*,int ) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,int ,int) ;
 struct cifs_tcon* FUNC_5 (int ) ;

int FUNC_6(struct file *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 struct cifs_tcon *VAR_6;
 struct cifsFileInfo *VAR_7 = VAR_1->private_data;
 struct cifs_sb_info *VAR_8 = FUNC_1(VAR_1->f_path.dentry->d_sb);

 VAR_4 = FUNC_3();

 FUNC_4(1, "Sync file - name: %s datasync: 0x%x",
  VAR_1->f_path.dentry->d_name.name, VAR_3);

 VAR_6 = FUNC_5(VAR_7->tlink);
 if (!(VAR_8->mnt_cifs_flags & VAR_0))
  VAR_5 = FUNC_0(VAR_4, VAR_6, VAR_7->netfid);

 FUNC_2(VAR_4);
 return VAR_5;
}
