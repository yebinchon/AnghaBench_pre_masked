
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct cifs_sb_info {int mnt_gid; int mnt_uid; } ;
struct cifs_fattr {int cf_mode; int cf_nlink; int cf_flags; void* cf_mtime; void* cf_ctime; void* cf_atime; int cf_gid; int cf_uid; } ;


 int VAR_0 ;
 struct cifs_sb_info* FUNC_0 (struct super_block*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct cifs_fattr*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct cifs_fattr *VAR_5, struct super_block *VAR_6)
{
 struct cifs_sb_info *VAR_7 = FUNC_0(VAR_6);

 FUNC_1(1, "creating fake fattr for DFS referral");

 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->cf_mode = VAR_2 | VAR_4 | VAR_3;
 VAR_5->cf_uid = VAR_7->mnt_uid;
 VAR_5->cf_gid = VAR_7->mnt_gid;
 VAR_5->cf_atime = VAR_1;
 VAR_5->cf_ctime = VAR_1;
 VAR_5->cf_mtime = VAR_1;
 VAR_5->cf_nlink = 2;
 VAR_5->cf_flags |= VAR_0;
}
