
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct kstat {int gid; int uid; int ino; int blksize; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct dentry {struct inode* d_inode; int d_sb; } ;
struct cifs_tcon {int unix_ext; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct TYPE_5__ {int uniqueid; int clientCanCacheRead; } ;
struct TYPE_4__ {scalar_t__ nrpages; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 struct cifs_tcon* FUNC_3 (struct cifs_sb_info*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct inode*,struct kstat*) ;
 int FUNC_8 (TYPE_1__*,int) ;

int FUNC_9(struct vfsmount *VAR_5, struct dentry *VAR_6,
   struct kstat *VAR_7)
{
 struct cifs_sb_info *VAR_8 = FUNC_1(VAR_6->d_sb);
 struct cifs_tcon *VAR_9 = FUNC_3(VAR_8);
 struct inode *VAR_10 = VAR_6->d_inode;
 int VAR_11;





 if (!FUNC_0(VAR_10)->clientCanCacheRead && VAR_10->i_mapping &&
     VAR_10->i_mapping->nrpages != 0) {
  VAR_11 = FUNC_6(VAR_10->i_mapping);
  if (VAR_11) {
   FUNC_8(VAR_10->i_mapping, VAR_11);
   return VAR_11;
  }
 }

 VAR_11 = FUNC_2(VAR_6);
 if (VAR_11)
  return VAR_11;

 FUNC_7(VAR_10, VAR_7);
 VAR_7->blksize = VAR_0;
 VAR_7->ino = FUNC_0(VAR_10)->uniqueid;






 if ((VAR_8->mnt_cifs_flags & VAR_2) &&
     !(VAR_8->mnt_cifs_flags & VAR_1) &&
     !VAR_9->unix_ext) {
  if (!(VAR_8->mnt_cifs_flags & VAR_4))
   VAR_7->uid = FUNC_5();
  if (!(VAR_8->mnt_cifs_flags & VAR_3))
   VAR_7->gid = FUNC_4();
 }
 return VAR_11;
}
