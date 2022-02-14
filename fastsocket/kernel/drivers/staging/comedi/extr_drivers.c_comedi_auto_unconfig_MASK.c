
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (unsigned int*) ;

void FUNC_5(struct device *VAR_1)
{
 unsigned *VAR_2 = (unsigned *)FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(*VAR_2 >= VAR_0);

 FUNC_1(*VAR_2);
 FUNC_3(VAR_1, ((void*)0));
 FUNC_4(VAR_2);
}
