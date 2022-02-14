
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int loff_t ;
typedef int SYSCALL_DEFINE ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int,int ,int ) ;
 struct file* FUNC_1 (int) ;
 int FUNC_2 (struct file*) ;

SYSCALL_DEFINE(FUNC_3)(int VAR_1, int VAR_2, loff_t VAR_3, loff_t VAR_4)
{
 struct file *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_5);
 }

 return VAR_6;
}
