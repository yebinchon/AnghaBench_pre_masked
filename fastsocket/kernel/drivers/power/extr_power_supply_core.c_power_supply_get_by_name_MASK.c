
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int ,int *,char*,int ) ;
 struct power_supply* FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;

struct power_supply *FUNC_2(char *VAR_2)
{
 struct device *VAR_3 = FUNC_0(VAR_0, ((void*)0), VAR_2,
     VAR_1);

 return VAR_3 ? FUNC_1(VAR_3) : ((void*)0);
}
