
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_system_type {struct file_system_type* next; } ;


 int VAR_0 ;
 struct file_system_type* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct file_system_type * VAR_3)
{
 struct file_system_type ** VAR_4;

 FUNC_0(&VAR_2);
 VAR_4 = &VAR_1;
 while (*VAR_4) {
  if (VAR_3 == *VAR_4) {
   *VAR_4 = VAR_3->next;
   VAR_3->next = ((void*)0);
   FUNC_1(&VAR_2);
   return 0;
  }
  VAR_4 = &(*VAR_4)->next;
 }
 FUNC_1(&VAR_2);
 return -VAR_0;
}
