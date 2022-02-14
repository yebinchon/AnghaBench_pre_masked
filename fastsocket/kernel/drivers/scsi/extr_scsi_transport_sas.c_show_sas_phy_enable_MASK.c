
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_phy {int enabled; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int,char*,int) ;
 struct sas_phy* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct sas_phy *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, 20, "%d", VAR_3->enabled);
}
