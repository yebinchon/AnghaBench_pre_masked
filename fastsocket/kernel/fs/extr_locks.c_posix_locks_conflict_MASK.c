
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int dummy; } ;


 int FUNC_0 (struct file_lock*) ;
 int FUNC_1 (struct file_lock*,struct file_lock*) ;
 int FUNC_2 (struct file_lock*,struct file_lock*) ;
 scalar_t__ FUNC_3 (struct file_lock*,struct file_lock*) ;

__attribute__((used)) static int FUNC_4(struct file_lock *VAR_0, struct file_lock *VAR_1)
{



 if (!FUNC_0(VAR_1) || FUNC_3(VAR_0, VAR_1))
  return (0);


 if (!FUNC_2(VAR_0, VAR_1))
  return 0;

 return (FUNC_1(VAR_0, VAR_1));
}
