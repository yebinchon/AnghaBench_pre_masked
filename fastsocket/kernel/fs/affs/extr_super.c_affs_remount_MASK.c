
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct super_block {int s_flags; int s_dirt; } ;
struct affs_sb_info {unsigned long s_flags; int s_mode; int s_gid; int s_uid; int s_volume; int s_prefix; } ;
typedef int gid_t ;


 struct affs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int *,int *,int*,int*,int*,int*,int *,int ,unsigned long*) ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (struct super_block*,char*) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(struct super_block *VAR_4, int *VAR_5, char *VAR_6)
{
 struct affs_sb_info *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;
 uid_t VAR_9;
 gid_t VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 unsigned long VAR_14;
 int VAR_15 = 0;
 char *VAR_16 = FUNC_5(VAR_6, VAR_1);

 FUNC_8("AFFS: remount(flags=0x%x,opts=\"%s\")\n",*VAR_5,VAR_6);

 *VAR_5 |= VAR_2;

 if (!FUNC_7(VAR_6, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13,
      &VAR_8, &VAR_7->s_prefix, VAR_7->s_volume,
      &VAR_14)) {
  FUNC_4(VAR_16);
  return -VAR_0;
 }
 FUNC_6();
 FUNC_9(VAR_4, VAR_16);

 VAR_7->s_flags = VAR_14;
 VAR_7->s_mode = VAR_11;
 VAR_7->s_uid = VAR_9;
 VAR_7->s_gid = VAR_10;

 if ((*VAR_5 & VAR_3) == (VAR_4->s_flags & VAR_3)) {
  FUNC_10();
  return 0;
 }
 if (*VAR_5 & VAR_3) {
  VAR_4->s_dirt = 1;
  while (VAR_4->s_dirt)
   FUNC_3(VAR_4);
  FUNC_1(VAR_4);
 } else
  VAR_15 = FUNC_2(VAR_4, VAR_5);

 FUNC_10();
 return VAR_15;
}
