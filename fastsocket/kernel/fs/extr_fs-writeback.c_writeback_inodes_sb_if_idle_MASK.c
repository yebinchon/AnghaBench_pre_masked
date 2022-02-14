
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_umount; int s_bdi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*) ;

int FUNC_4(struct super_block *VAR_0)
{
 if (!FUNC_2(VAR_0->s_bdi)) {
  FUNC_0(&VAR_0->s_umount);
  FUNC_3(VAR_0);
  FUNC_1(&VAR_0->s_umount);
  return 1;
 } else
  return 0;
}
