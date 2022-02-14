
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_system_type {struct file_system_type* next; } ;


 struct file_system_type* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct file_system_type * VAR_2;
 int VAR_3;

 FUNC_0(&VAR_1);
 for (VAR_2 = VAR_0, VAR_3 = 0 ; VAR_2 ; VAR_2 = VAR_2->next, VAR_3++)
  ;
 FUNC_1(&VAR_1);
 return VAR_3;
}
