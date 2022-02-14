
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 struct task_struct* FUNC_1 (int ,int ) ;

struct task_struct *FUNC_2(void)
{
 struct task_struct *VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  FUNC_0((atomic_t *)(VAR_2+1), 1);
 return VAR_2;
}
