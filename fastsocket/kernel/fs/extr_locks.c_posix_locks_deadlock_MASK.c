
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file_lock*,struct file_lock*) ;
 struct file_lock* FUNC_1 (struct file_lock*) ;

__attribute__((used)) static int FUNC_2(struct file_lock *VAR_1,
    struct file_lock *VAR_2)
{
 int VAR_3 = 0;

 while ((VAR_2 = FUNC_1(VAR_2))) {
  if (VAR_3++ > VAR_0)
   return 0;
  if (FUNC_0(VAR_1, VAR_2))
   return 1;
 }
 return 0;
}
