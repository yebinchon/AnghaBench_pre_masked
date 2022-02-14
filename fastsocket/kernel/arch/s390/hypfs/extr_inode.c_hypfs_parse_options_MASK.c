
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct super_block {struct hypfs_sb_info* s_fs_info; } ;
struct hypfs_sb_info {int uid; int gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (char*,int ,int *) ;



 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_3, struct super_block *VAR_4)
{
 char *VAR_5;
 substring_t VAR_6[VAR_1];

 if (!VAR_3)
  return 0;
 while ((VAR_5 = FUNC_3(&VAR_3, ",")) != ((void*)0)) {
  int VAR_7, VAR_8;
  struct hypfs_sb_info *VAR_9 = VAR_4->s_fs_info;

  if (!*VAR_5)
   continue;
  VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_6);
  switch (VAR_7) {
  case 128:
   if (FUNC_0(&VAR_6[0], &VAR_8))
    return -VAR_0;
   VAR_9->uid = VAR_8;
   break;
  case 129:
   if (FUNC_0(&VAR_6[0], &VAR_8))
    return -VAR_0;
   VAR_9->gid = VAR_8;
   break;
  case 130:
  default:
   FUNC_2("%s is not a valid mount option\n", VAR_5);
   return -VAR_0;
  }
 }
 return 0;
}
