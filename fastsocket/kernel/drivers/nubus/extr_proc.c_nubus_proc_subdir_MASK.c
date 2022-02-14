
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
struct nubus_dirent {int type; } ;
struct nubus_dir {int dummy; } ;
struct nubus_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc_dir_entry* FUNC_0 (char*,int,struct proc_dir_entry*) ;
 int FUNC_1 (struct nubus_dir*,struct nubus_dirent*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct nubus_dev* VAR_3,
         struct proc_dir_entry* VAR_4,
         struct nubus_dir* VAR_5)
{
 struct nubus_dirent VAR_6;


 while (FUNC_1(VAR_5, &VAR_6) != -1) {
  char VAR_7[8];
  struct proc_dir_entry* VAR_8;

  FUNC_2(VAR_7, "%x", VAR_6.type);
  VAR_8 = FUNC_0(VAR_7, VAR_0 | VAR_1 |
          VAR_2, VAR_4);
  if (!VAR_8) return;
 }
}
