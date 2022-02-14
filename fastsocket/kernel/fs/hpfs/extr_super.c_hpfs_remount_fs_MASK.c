
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int uid_t ;
struct super_block {int dummy; } ;
struct hpfs_sb_info {int sb_mode; int sb_lowercase; int sb_conv; int sb_eas; int sb_chk; int sb_chkdsk; int sb_err; int sb_timeshift; int sb_gid; int sb_uid; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 struct hpfs_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (char*,int *,int *,int*,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct super_block*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct super_block*) ;
 int FUNC_12 (struct super_block*) ;

__attribute__((used)) static int FUNC_13(struct super_block *VAR_4, int *VAR_5, char *VAR_6)
{
 uid_t VAR_7;
 gid_t VAR_8;
 umode_t VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;
 struct hpfs_sb_info *VAR_18 = FUNC_1(VAR_4);
 char *VAR_19 = FUNC_3(VAR_6, VAR_1);

 *VAR_5 |= VAR_2;

 FUNC_4();
 FUNC_5(VAR_4);
 VAR_7 = VAR_18->sb_uid; VAR_8 = VAR_18->sb_gid;
 VAR_9 = 0777 & ~VAR_18->sb_mode;
 VAR_10 = VAR_18->sb_lowercase; VAR_11 = VAR_18->sb_conv;
 VAR_12 = VAR_18->sb_eas; VAR_13 = VAR_18->sb_chk; VAR_15 = VAR_18->sb_chkdsk;
 VAR_14 = VAR_18->sb_err; VAR_16 = VAR_18->sb_timeshift;

 if (!(VAR_17 = FUNC_7(VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11,
     &VAR_12, &VAR_13, &VAR_14, &VAR_15, &VAR_16))) {
  FUNC_8("HPFS: bad mount options.\n");
  goto out_err;
 }
 if (VAR_17 == 2) {
  FUNC_0();
  goto out_err;
 }
 if (VAR_16 != VAR_18->sb_timeshift) {
  FUNC_8("HPFS: timeshift can't be changed using remount.\n");
  goto out_err;
 }

 FUNC_12(VAR_4);

 VAR_18->sb_uid = VAR_7; VAR_18->sb_gid = VAR_8;
 VAR_18->sb_mode = 0777 & ~VAR_9;
 VAR_18->sb_lowercase = VAR_10; VAR_18->sb_conv = VAR_11;
 VAR_18->sb_eas = VAR_12; VAR_18->sb_chk = VAR_13; VAR_18->sb_chkdsk = VAR_15;
 VAR_18->sb_err = VAR_14; VAR_18->sb_timeshift = VAR_16;

 if (!(*VAR_5 & VAR_3)) FUNC_6(VAR_4);

 FUNC_9(VAR_4, VAR_19);

 FUNC_11(VAR_4);
 FUNC_10();
 return 0;

out_err:
 FUNC_11(VAR_4);
 FUNC_10();
 FUNC_2(VAR_19);
 return -VAR_0;
}
