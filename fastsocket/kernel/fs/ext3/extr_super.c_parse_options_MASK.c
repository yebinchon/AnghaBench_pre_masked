
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ from; scalar_t__ to; } ;
typedef TYPE_1__ substring_t ;
struct super_block {int dummy; } ;
struct ext3_sb_info {int s_mount_opt; int s_resuid; int s_resgid; int s_commit_interval; char** s_qf_names; int s_jquota_fmt; } ;
typedef int ext3_fsblk_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct ext3_sb_info* FUNC_0 (struct super_block*) ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (int) ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 int FUNC_2 (int,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct super_block*,int ,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int*) ;
 char* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,int ,TYPE_1__*) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (int,size_t) ;
 int FUNC_11 (char*,char) ;
 int FUNC_12 (char*,char*) ;
 char* FUNC_13 (char**,char*) ;
 int VAR_35 ;

__attribute__((used)) static int FUNC_14 (char *VAR_36, struct super_block *VAR_37,
     unsigned int *VAR_38, unsigned long *VAR_39,
     ext3_fsblk_t *VAR_40, int VAR_41)
{
 struct ext3_sb_info *VAR_42 = FUNC_0(VAR_37);
 char * VAR_43;
 substring_t VAR_44[VAR_20];
 int VAR_45 = 0;
 int VAR_46;





 if (!VAR_36)
  return 1;

 while ((VAR_43 = FUNC_13 (&VAR_36, ",")) != ((void*)0)) {
  int VAR_47;
  if (!*VAR_43)
   continue;




  VAR_44[0].to = VAR_44[0].from = 0;
  VAR_47 = FUNC_8(VAR_43, VAR_35, VAR_44);
  switch (VAR_47) {
  case 172:
   FUNC_2 (VAR_42->s_mount_opt, VAR_21);
   break;
  case 151:
   FUNC_10 (VAR_42->s_mount_opt, VAR_21);
   break;
  case 161:
   FUNC_10 (VAR_42->s_mount_opt, VAR_14);
   break;
  case 146:
   FUNC_2 (VAR_42->s_mount_opt, VAR_14);
   break;
  case 132:
   if (FUNC_6(&VAR_44[0], &VAR_46))
    return 0;
   VAR_42->s_resuid = VAR_46;
   break;
  case 134:
   if (FUNC_6(&VAR_44[0], &VAR_46))
    return 0;
   VAR_42->s_resgid = VAR_46;
   break;
  case 131:


   break;
  case 163:
   FUNC_2 (VAR_42->s_mount_opt, VAR_5);
   FUNC_2 (VAR_42->s_mount_opt, VAR_7);
   FUNC_10 (VAR_42->s_mount_opt, VAR_6);
   break;
  case 162:
   FUNC_2 (VAR_42->s_mount_opt, VAR_5);
   FUNC_2 (VAR_42->s_mount_opt, VAR_6);
   FUNC_10 (VAR_42->s_mount_opt, VAR_7);
   break;
  case 164:
   FUNC_2 (VAR_42->s_mount_opt, VAR_7);
   FUNC_2 (VAR_42->s_mount_opt, VAR_6);
   FUNC_10 (VAR_42->s_mount_opt, VAR_5);
   break;
  case 142:
   FUNC_10 (VAR_42->s_mount_opt, VAR_24);
   break;
  case 147:
   FUNC_2 (VAR_42->s_mount_opt, VAR_2);
   break;
  case 165:
   FUNC_10 (VAR_42->s_mount_opt, VAR_4);
   break;
  case 138:
   FUNC_10 (VAR_42->s_mount_opt, VAR_25);
   break;
  case 137:
   FUNC_2 (VAR_42->s_mount_opt, VAR_25);
   break;
  case 130:
  case 141:
   FUNC_4(VAR_37, VAR_19,
    "(no)user_xattr options not supported");
   break;
  case 175:
  case 150:
   FUNC_4(VAR_37, VAR_19,
    "(no)acl options not supported");
   break;

  case 135:
   FUNC_10(VAR_42->s_mount_opt, VAR_31);
   break;
  case 143:
   FUNC_2(VAR_42->s_mount_opt, VAR_31);
   break;
  case 155:





   if (VAR_41) {
    FUNC_4(VAR_37, VAR_18, "error: cannot specify "
     "journal on remount");
    return 0;
   }
   FUNC_10 (VAR_42->s_mount_opt, VAR_32);
   break;
  case 156:
   if (VAR_41) {
    FUNC_4(VAR_37, VAR_18, "error: cannot specify "
           "journal on remount");
    return 0;
   }
   if (FUNC_6(&VAR_44[0], &VAR_46))
    return 0;
   *VAR_38 = VAR_46;
   break;
  case 157:
   if (VAR_41) {
    FUNC_4(VAR_37, VAR_18, "error: cannot specify "
           "journal on remount");
    return 0;
   }
   if (FUNC_6(&VAR_44[0], &VAR_46))
    return 0;
   *VAR_39 = VAR_46;
   break;
  case 145:
   FUNC_10 (VAR_42->s_mount_opt, VAR_23);
   break;
  case 171:
   if (FUNC_6(&VAR_44[0], &VAR_46))
    return 0;
   if (VAR_46 < 0)
    return 0;
   if (VAR_46 == 0)
    VAR_46 = VAR_17;
   VAR_42->s_commit_interval = VAR_16 * VAR_46;
   break;
  case 168:
   VAR_45 = VAR_10;
   goto datacheck;
  case 167:
   VAR_45 = VAR_11;
   goto datacheck;
  case 166:
   VAR_45 = VAR_13;
  datacheck:
   if (VAR_41) {
    if ((VAR_42->s_mount_opt & VAR_8)
      == VAR_45)
     break;
    FUNC_4(VAR_37, VAR_18,
     "error: cannot change "
     "data mode on remount. The filesystem "
     "is mounted in data=%s mode and you "
     "try to remount it in data=%s mode.",
     FUNC_3(VAR_42->s_mount_opt &
       VAR_8),
     FUNC_3(VAR_45));
    return 0;
   } else {
    VAR_42->s_mount_opt &= ~VAR_8;
    VAR_42->s_mount_opt |= VAR_45;
   }
   break;
  case 170:
   FUNC_10(VAR_42->s_mount_opt, VAR_3);
   break;
  case 169:
   FUNC_2(VAR_42->s_mount_opt, VAR_3);
   break;
  case 136:
  case 128:
  case 159:
   FUNC_4(VAR_37, VAR_18,
    "error: quota options not supported.");
   break;
  case 129:
  case 160:
  case 139:
  case 140:
  case 154:
  case 153:
  case 152:
   FUNC_4(VAR_37, VAR_18,
    "error: journaled quota options not "
    "supported.");
   break;
  case 144:
   break;

  case 176:
   FUNC_10(VAR_42->s_mount_opt, VAR_0);
   break;
  case 149:
   FUNC_2(VAR_42->s_mount_opt, VAR_1);
   break;
  case 174:
   if (VAR_44[0].from) {
    if (FUNC_6(&VAR_44[0], &VAR_46))
     return 0;
   } else
    VAR_46 = 1;
   if (VAR_46)
    FUNC_10(VAR_42->s_mount_opt, VAR_1);
   else
    FUNC_2(VAR_42->s_mount_opt, VAR_1);
   break;
  case 158:
   break;
  case 133:
   if (!VAR_41) {
    FUNC_4(VAR_37, VAR_18,
     "error: resize option only available "
     "for remount");
    return 0;
   }
   if (FUNC_6(&VAR_44[0], &VAR_46) != 0)
    return 0;
   *VAR_40 = VAR_46;
   break;
  case 148:
   FUNC_10(VAR_42->s_mount_opt, VAR_22);
   break;
  case 173:
   FUNC_2(VAR_42->s_mount_opt, VAR_22);
   break;
  default:
   FUNC_4(VAR_37, VAR_18,
    "error: unrecognized mount option \"%s\" "
    "or missing value", VAR_43);
   return 0;
  }
 }
 return 1;
}
