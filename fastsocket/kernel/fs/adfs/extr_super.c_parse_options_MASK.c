
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct super_block {int dummy; } ;
struct adfs_sb_info {int s_uid; int s_gid; int s_owner_mask; int s_other_mask; } ;


 struct adfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char**,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_3, char *VAR_4)
{
 char *VAR_5;
 struct adfs_sb_info *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 if (!VAR_4)
  return 0;

 while ((VAR_5 = FUNC_5(&VAR_4, ",")) != ((void*)0)) {
  substring_t VAR_8[VAR_1];
  int VAR_9;
  if (!*VAR_5)
   continue;

  VAR_9 = FUNC_3(VAR_5, VAR_2, VAR_8);
  switch (VAR_9) {
  case 128:
   if (FUNC_1(VAR_8, &VAR_7))
    return -VAR_0;
   VAR_6->s_uid = VAR_7;
   break;
  case 131:
   if (FUNC_1(VAR_8, &VAR_7))
    return -VAR_0;
   VAR_6->s_gid = VAR_7;
   break;
  case 129:
   if (FUNC_2(VAR_8, &VAR_7))
    return -VAR_0;
   VAR_6->s_owner_mask = VAR_7;
   break;
  case 130:
   if (FUNC_2(VAR_8, &VAR_7))
    return -VAR_0;
   VAR_6->s_other_mask = VAR_7;
   break;
  default:
   FUNC_4("ADFS-fs: unrecognised mount option \"%s\" "
     "or missing value\n", VAR_5);
   return -VAR_0;
  }
 }
 return 0;
}
