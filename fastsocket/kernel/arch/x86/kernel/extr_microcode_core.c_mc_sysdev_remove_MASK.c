
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int id; int kobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct sys_device *VAR_1)
{
 int VAR_2 = VAR_1->id;

 if (!FUNC_0(VAR_2))
  return 0;

 FUNC_2("microcode: CPU%d removed\n", VAR_2);
 FUNC_1(VAR_2);
 FUNC_3(&VAR_1->kobj, &VAR_0);
 return 0;
}
