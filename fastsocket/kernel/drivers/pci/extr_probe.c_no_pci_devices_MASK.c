
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 struct device* FUNC_0 (int *,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*) ;

int FUNC_2(void)
{
 struct device *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(&VAR_1, ((void*)0), ((void*)0), VAR_0);
 VAR_3 = (VAR_2 == ((void*)0));
 FUNC_1(VAR_2);
 return VAR_3;
}
