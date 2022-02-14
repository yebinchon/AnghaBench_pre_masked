
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct block_lock {struct task_struct** holders; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned FUNC_1(struct block_lock *VAR_1,
         struct task_struct *VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1->holders[VAR_3] == VAR_2)
   break;

 FUNC_0(VAR_3 == VAR_0);
 return VAR_3;
}
