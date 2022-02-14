
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; int s_umount; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct super_block*,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct super_block *VAR_1)
{
 int VAR_2;





 FUNC_0(!FUNC_2(&VAR_1->s_umount));




 if (VAR_1->s_flags & VAR_0)
  return 0;

 VAR_2 = FUNC_1(VAR_1, 0);
 if (VAR_2 < 0)
  return VAR_2;
 return FUNC_1(VAR_1, 1);
}
