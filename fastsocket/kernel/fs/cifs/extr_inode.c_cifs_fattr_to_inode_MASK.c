
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_blocks; int i_flags; int i_lock; int i_mode; int i_gid; int i_uid; int i_nlink; int i_rdev; int i_ctime; int i_mtime; int i_atime; int i_sb; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifs_fattr {int cf_flags; int cf_bytes; int cf_eof; int cf_cifsattrs; int cf_mode; int cf_gid; int cf_uid; int cf_nlink; int cf_rdev; int cf_ctime; int cf_mtime; int cf_atime; } ;
struct cifsInodeInfo {unsigned long time; int delete_pending; int server_eof; int cifsAttrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*,struct inode*,unsigned long,unsigned long) ;
 int FUNC_3 (struct inode*,struct cifs_fattr*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 scalar_t__ FUNC_6 (struct cifsInodeInfo*,int ) ;
 unsigned long VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(struct inode *VAR_7, struct cifs_fattr *VAR_8)
{
 struct cifsInodeInfo *VAR_9 = FUNC_0(VAR_7);
 struct cifs_sb_info *VAR_10 = FUNC_1(VAR_7->i_sb);
 unsigned long VAR_11 = VAR_9->time;

 FUNC_3(VAR_7, VAR_8);

 VAR_7->i_atime = VAR_8->cf_atime;
 VAR_7->i_mtime = VAR_8->cf_mtime;
 VAR_7->i_ctime = VAR_8->cf_ctime;
 VAR_7->i_rdev = VAR_8->cf_rdev;
 VAR_7->i_nlink = VAR_8->cf_nlink;
 VAR_7->i_uid = VAR_8->cf_uid;
 VAR_7->i_gid = VAR_8->cf_gid;


 if (VAR_7->i_state & VAR_4 ||
     !(VAR_10->mnt_cifs_flags & VAR_3))
  VAR_7->i_mode = VAR_8->cf_mode;

 VAR_9->cifsAttrs = VAR_8->cf_cifsattrs;

 if (VAR_8->cf_flags & VAR_2)
  VAR_9->time = 0;
 else
  VAR_9->time = VAR_6;

 FUNC_2(1, "inode 0x%p old_time=%ld new_time=%ld", VAR_7,
   VAR_11, VAR_9->time);

 VAR_9->delete_pending = VAR_8->cf_flags & VAR_0;

 VAR_9->server_eof = VAR_8->cf_eof;




 FUNC_7(&VAR_7->i_lock);
 if (FUNC_6(VAR_9, VAR_8->cf_eof)) {
  FUNC_5(VAR_7, VAR_8->cf_eof);






  VAR_7->i_blocks = (512 - 1 + VAR_8->cf_bytes) >> 9;
 }
 FUNC_8(&VAR_7->i_lock);

 if (VAR_8->cf_flags & VAR_1)
  VAR_7->i_flags |= VAR_5;
 FUNC_4(VAR_7);
}
