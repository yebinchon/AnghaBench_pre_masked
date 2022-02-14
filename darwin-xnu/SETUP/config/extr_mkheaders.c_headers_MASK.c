
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {scalar_t__ f_needs; struct file_list* f_next; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 struct file_list* VAR_0 ;

void
FUNC_1(void)
{
 struct file_list *VAR_1;

 for (VAR_1 = VAR_0; VAR_1 != 0; VAR_1 = VAR_1->f_next)
  if (VAR_1->f_needs != 0)
   FUNC_0(VAR_1->f_needs, VAR_1->f_needs, 1);
}
