
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int substring_t ;
struct super_block {int dummy; } ;
struct inode {int i_uid; int i_gid; int i_mode; } ;
struct TYPE_2__ {int debug; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (char*,int ,int *) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;
 int VAR_2 ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static int
FUNC_5(struct super_block *VAR_3, char *VAR_4, struct inode *VAR_5)
{
 char *VAR_6;
 substring_t VAR_7[VAR_0];

 while ((VAR_6 = FUNC_4(&VAR_4, ",")) != ((void*)0)) {
  int VAR_8, VAR_9;

  if (!*VAR_6)
   continue;

  VAR_8 = FUNC_2(VAR_6, VAR_2, VAR_7);
  switch (VAR_8) {
  case 128:
   if (FUNC_0(&VAR_7[0], &VAR_9))
    return 0;
   VAR_5->i_uid = VAR_9;
   break;
  case 130:
   if (FUNC_0(&VAR_7[0], &VAR_9))
    return 0;
   VAR_5->i_gid = VAR_9;
   break;
  case 129:
   if (FUNC_1(&VAR_7[0], &VAR_9))
    return 0;
   VAR_5->i_mode = VAR_9 | VAR_1;
   break;
  case 131:
   FUNC_3(VAR_3)->debug = 1;
   break;
  default:
   return 0;
  }
 }
 return 1;
}
