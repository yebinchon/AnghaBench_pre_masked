
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct super_block {int s_flags; int local_nls; } ;
struct smb_vol {int s_flags; int local_nls; } ;
struct file_system_type {int dummy; } ;
struct cifs_sb_info {struct cifs_sb_info* mountdata; } ;
struct cifs_mnt_data {int flags; struct cifs_sb_info* cifs_sb; struct super_block* vol; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,char*,char const*,int) ;
 int FUNC_4 (struct super_block*) ;
 struct super_block* FUNC_5 (char*,char const*) ;
 int FUNC_6 (struct cifs_sb_info*,struct super_block*) ;
 int FUNC_7 (struct super_block*) ;
 int VAR_7 ;
 int FUNC_8 (struct super_block*,struct cifs_sb_info*) ;
 int FUNC_9 (struct cifs_sb_info*) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct cifs_sb_info*) ;
 struct cifs_sb_info* FUNC_12 (void*,int ,int ) ;
 struct cifs_sb_info* FUNC_13 (int,int ) ;
 struct super_block* FUNC_14 (struct file_system_type*,int *,int ,struct cifs_mnt_data*) ;
 int FUNC_15 (struct vfsmount*,struct super_block*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(struct file_system_type *VAR_8,
     int VAR_9, const char *VAR_10, void *VAR_11, struct vfsmount *VAR_12)
{
 int VAR_13 = 0;
 struct super_block *VAR_14;
 struct cifs_sb_info *VAR_15;
 struct smb_vol *VAR_16;
 struct cifs_mnt_data VAR_17;

 FUNC_3(1, "Devname: %s flags: %d ", VAR_10, VAR_9);

 VAR_16 = FUNC_5((char *)VAR_11, VAR_10);
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);

 VAR_15 = FUNC_13(sizeof(struct cifs_sb_info), VAR_1);
 if (VAR_15 == ((void*)0)) {
  VAR_13 = -VAR_0;
  goto out_nls;
 }






 VAR_15->mountdata = FUNC_12(VAR_11, VAR_6, VAR_1);
 if (VAR_15->mountdata == ((void*)0)) {
  VAR_13 = -VAR_0;
  goto out_cifs_sb;
 }

 FUNC_8(VAR_16, VAR_15);

 VAR_13 = FUNC_6(VAR_15, VAR_16);
 if (VAR_13) {
  if (!(VAR_9 & VAR_5))
   FUNC_2(1, "cifs_mount failed w/return code = %d", VAR_13);
  goto out_mountdata;
 }

 VAR_17.vol = VAR_16;
 VAR_17.cifs_sb = VAR_15;
 VAR_17.flags = VAR_9;

 VAR_14 = FUNC_14(VAR_8, ((void*)0), VAR_7, &VAR_17);
 if (FUNC_0(VAR_14)) {
  VAR_13 = FUNC_1(VAR_14);
  FUNC_9(VAR_15);
  goto out;
 }

 VAR_14->s_flags = VAR_9;

 VAR_14->s_flags |= VAR_4 | VAR_3;

 VAR_13 = FUNC_7(VAR_14);
 if (VAR_13)
  goto out_super;

 VAR_14->s_flags |= VAR_2;

 FUNC_15(VAR_12, VAR_14);
 goto out;

out_super:
 FUNC_10(VAR_14);
out:
 FUNC_4(VAR_16);
 return VAR_13;
out_mountdata:
 FUNC_11(VAR_15->mountdata);
out_cifs_sb:
 FUNC_11(VAR_15);
out_nls:
 FUNC_16(VAR_16->local_nls);
 goto out;
}
