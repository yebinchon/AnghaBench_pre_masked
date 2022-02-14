
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct platform_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 struct task_struct* VAR_0 ;
 struct task_struct* FUNC_2 (int ,int *,char*) ;
 struct task_struct* FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct task_struct *VAR_4;

 VAR_0 = FUNC_3();
 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_0);


 VAR_1 = 1;
 FUNC_4();


 VAR_4 = FUNC_2(VAR_2, ((void*)0), "krpcserversd");
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return 0;
}
