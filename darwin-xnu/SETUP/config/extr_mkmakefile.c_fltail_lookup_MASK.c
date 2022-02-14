
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {char* f_fn; struct file_list* f_next; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 struct file_list* VAR_0 ;
 int FUNC_1 (char*) ;

struct file_list *
FUNC_2(char *VAR_1)
{
 struct file_list *VAR_2;

 for (VAR_2 = VAR_0 ; VAR_2 != 0; VAR_2 = VAR_2->f_next) {
  if (FUNC_0(FUNC_1(VAR_2->f_fn), FUNC_1(VAR_1)))
   return (VAR_2);
 }
 return (0);
}
