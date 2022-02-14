
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_umount; scalar_t__ s_root; int s_count; int s_instances; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct super_block *VAR_1)
{
 FUNC_3(&VAR_0);
 if (FUNC_1(&VAR_1->s_instances)) {
  FUNC_4(&VAR_0);
  return 0;
 }

 VAR_1->s_count++;
 FUNC_4(&VAR_0);

 if (FUNC_0(&VAR_1->s_umount)) {
  if (VAR_1->s_root)
   return 1;
  FUNC_5(&VAR_1->s_umount);
 }

 FUNC_2(VAR_1);
 return 0;
}
