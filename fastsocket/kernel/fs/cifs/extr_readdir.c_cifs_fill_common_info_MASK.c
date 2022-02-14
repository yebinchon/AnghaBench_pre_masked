
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sb_info {int mnt_dir_mode; int mnt_file_mode; int mnt_cifs_flags; int mnt_gid; int mnt_uid; } ;
struct cifs_fattr {int cf_cifsattrs; int cf_mode; scalar_t__ cf_eof; int cf_flags; int cf_dtype; int cf_gid; int cf_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_0(struct cifs_fattr *VAR_14, struct cifs_sb_info *VAR_15)
{
 VAR_14->cf_uid = VAR_15->mnt_uid;
 VAR_14->cf_gid = VAR_15->mnt_gid;

 if (VAR_14->cf_cifsattrs & VAR_0) {
  VAR_14->cf_mode = VAR_9 | VAR_15->mnt_dir_mode;
  VAR_14->cf_dtype = VAR_6;
 } else {
  VAR_14->cf_mode = VAR_12 | VAR_15->mnt_file_mode;
  VAR_14->cf_dtype = VAR_8;
 }

 if (VAR_14->cf_cifsattrs & VAR_1)
  VAR_14->cf_mode &= ~VAR_13;
 if (VAR_15->mnt_cifs_flags & VAR_4)
  VAR_14->cf_flags |= VAR_3;

 if (VAR_15->mnt_cifs_flags & VAR_5 &&
     VAR_14->cf_cifsattrs & VAR_2) {
  if (VAR_14->cf_eof == 0) {
   VAR_14->cf_mode &= ~VAR_11;
   VAR_14->cf_mode |= VAR_10;
   VAR_14->cf_dtype = VAR_7;
  } else {





   VAR_14->cf_flags |= VAR_3;
  }
 }
}
