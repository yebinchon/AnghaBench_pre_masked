
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bmc_device {int id; } ;
typedef int ssize_t ;


 struct bmc_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct bmc_device *VAR_3 = FUNC_0(VAR_0);

 return FUNC_3(VAR_2, 20, "%u.%u\n",
   FUNC_1(&VAR_3->id),
   FUNC_2(&VAR_3->id));
}
