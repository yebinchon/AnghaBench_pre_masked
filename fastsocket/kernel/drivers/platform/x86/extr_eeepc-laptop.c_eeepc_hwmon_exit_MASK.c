
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 struct device* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct device *VAR_2;

 VAR_2 = VAR_0;
 if (!VAR_2)
  return ;
 FUNC_1(&VAR_2->kobj,
      &VAR_1);
 FUNC_0(VAR_2);
 VAR_0 = ((void*)0);
}
