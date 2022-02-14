
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int umode_t ;
typedef int uid_t ;
struct super_block {TYPE_2__* s_root; } ;
typedef int gid_t ;
struct TYPE_6__ {int setuid; int setgid; int uid; int gid; int mode; } ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int i_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct super_block*,char*) ;
 int FUNC_6 (char*,char*,int*,char*) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_4, int *VAR_5, char *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 uid_t VAR_9 = 0;
 gid_t VAR_10 = 0;
 umode_t VAR_11 = 0600;
 char *VAR_12;
 char *VAR_13 = FUNC_1(VAR_6, VAR_1);

 VAR_12 = ((void*)0);
 while ((VAR_12 = FUNC_7(&VAR_6, ",")) != ((void*)0)) {
  int VAR_14;
  char VAR_15;
  if (!*VAR_12)
   continue;
  if (FUNC_6(VAR_12, "uid=%i%c", &VAR_14, &VAR_15) == 1) {
   VAR_7 = 1;
   VAR_9 = VAR_14;
  } else if (FUNC_6(VAR_12, "gid=%i%c", &VAR_14, &VAR_15) == 1) {
   VAR_8 = 1;
   VAR_10 = VAR_14;
  } else if (FUNC_6(VAR_12, "mode=%o%c", &VAR_14, &VAR_15) == 1)
   VAR_11 = VAR_14 & ~VAR_2;
  else {
   FUNC_0(VAR_13);
   FUNC_4("capifs: called with bogus options\n");
   return -VAR_0;
  }
 }

 FUNC_2(&VAR_4->s_root->d_inode->i_mutex);

 FUNC_5(VAR_4, VAR_13);
 VAR_3.setuid = VAR_7;
 VAR_3.setgid = VAR_8;
 VAR_3.uid = VAR_9;
 VAR_3.gid = VAR_10;
 VAR_3.mode = VAR_11;

 FUNC_3(&VAR_4->s_root->d_inode->i_mutex);

 return 0;
}
