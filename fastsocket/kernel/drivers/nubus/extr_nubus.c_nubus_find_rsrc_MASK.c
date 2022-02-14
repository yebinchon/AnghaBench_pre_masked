
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nubus_dirent {unsigned char type; } ;
struct nubus_dir {int dummy; } ;


 int FUNC_0 (struct nubus_dir*,struct nubus_dirent*) ;

int
FUNC_1(struct nubus_dir* VAR_0, unsigned char VAR_1,
  struct nubus_dirent* VAR_2)
{
 while (FUNC_0(VAR_0, VAR_2) != -1) {
  if (VAR_2->type == VAR_1)
   return 0;
 }
 return -1;
}
