
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_mode; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline loff_t FUNC_1(struct file *VAR_4)
{
 if ((VAR_4->f_mode & VAR_2) ||
     (!(VAR_4->f_mode & VAR_3) && FUNC_0()))
  return VAR_0;
 else
  return VAR_1;
}
