
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int s_options; } ;


 int FUNC_0 (struct seq_file*,char const*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct seq_file*,char) ;

int FUNC_5(struct seq_file *VAR_0, struct vfsmount *VAR_1)
{
 const char *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_1->mnt_sb->s_options);

 if (VAR_2 != ((void*)0) && VAR_2[0]) {
  FUNC_4(VAR_0, ',');
  FUNC_0(VAR_0, VAR_2);
 }
 FUNC_3();

 return 0;
}
