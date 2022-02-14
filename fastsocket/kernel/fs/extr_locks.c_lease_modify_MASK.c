
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file_lock*,int) ;
 int FUNC_1 (struct file_lock**) ;
 int FUNC_2 (struct file_lock*) ;

int FUNC_3(struct file_lock **VAR_1, int VAR_2)
{
 struct file_lock *VAR_3 = *VAR_1;
 int VAR_4 = FUNC_0(VAR_3, VAR_2);

 if (VAR_4)
  return VAR_4;
 FUNC_2(VAR_3);
 if (VAR_2 == VAR_0)
  FUNC_1(VAR_1);
 return 0;
}
