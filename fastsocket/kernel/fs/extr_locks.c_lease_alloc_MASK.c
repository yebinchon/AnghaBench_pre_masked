
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct file_lock* FUNC_0 (int) ;
 int FUNC_1 (struct file*,int,struct file_lock*) ;
 struct file_lock* FUNC_2 () ;
 int FUNC_3 (struct file_lock*) ;

__attribute__((used)) static struct file_lock *FUNC_4(struct file *VAR_1, int VAR_2)
{
 struct file_lock *VAR_3 = FUNC_2();
 int VAR_4 = -VAR_0;

 if (VAR_3 == ((void*)0))
  return FUNC_0(VAR_4);

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_3);
  return FUNC_0(VAR_4);
 }
 return VAR_3;
}
