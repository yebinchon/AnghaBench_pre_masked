
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ VAR_2 ;

int FUNC_1(struct file *VAR_3,
   unsigned long VAR_4, unsigned long VAR_5)
{
 if (VAR_5 & ~VAR_1)
  return -VAR_0;
 if (VAR_4 & ~VAR_1)
  return -VAR_0;
 if (FUNC_0(VAR_4) != VAR_2)
  return -VAR_0;

 return 0;
}
