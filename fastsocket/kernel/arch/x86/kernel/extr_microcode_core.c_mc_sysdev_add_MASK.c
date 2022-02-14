
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int id; int kobj; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct sys_device *VAR_3)
{
 int VAR_4, VAR_5 = VAR_3->id;

 if (!FUNC_0(VAR_5))
  return 0;

 FUNC_2("microcode: CPU%d added\n", VAR_5);

 VAR_4 = FUNC_3(&VAR_3->kobj, &VAR_2);
 if (VAR_4)
  return VAR_4;

 if (FUNC_1(VAR_5) == VAR_1)
  VAR_4 = -VAR_0;

 return VAR_4;
}
