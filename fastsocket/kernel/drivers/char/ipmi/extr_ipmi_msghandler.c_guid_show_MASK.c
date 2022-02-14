
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bmc_device {scalar_t__* guid; } ;
typedef int ssize_t ;


 struct bmc_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int,char*,long long,long long) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct bmc_device *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, 100, "%Lx%Lx\n",
   (long long) VAR_3->guid[0],
   (long long) VAR_3->guid[8]);
}
