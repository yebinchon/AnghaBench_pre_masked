
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {char* f_extra; struct file_list* f_next; scalar_t__ f_type; scalar_t__ f_flags; scalar_t__ f_needs; } ;


 struct file_list* VAR_0 ;
 struct file_list* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

struct file_list *
FUNC_1(void)
{
 struct file_list *VAR_2;

 VAR_2 = (struct file_list *) FUNC_0(sizeof *VAR_2);
 VAR_2->f_needs = 0;
 VAR_2->f_next = 0;
 VAR_2->f_flags = 0;
 VAR_2->f_type = 0;
 VAR_2->f_extra = (char *) 0;
 if (VAR_0 == 0)
  VAR_0 = VAR_1 = VAR_2;
 else
  VAR_0->f_next = VAR_2;
 VAR_0 = VAR_2;
 return (VAR_2);
}
