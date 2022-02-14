
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_type; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,char*) ;
 struct sas_rphy* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct sas_rphy *VAR_3 = FUNC_2(VAR_0);

 if (!VAR_3->identify.device_type)
  return FUNC_1(VAR_2, 20, "none\n");
 return FUNC_0(
   VAR_3->identify.device_type, VAR_2);
}
