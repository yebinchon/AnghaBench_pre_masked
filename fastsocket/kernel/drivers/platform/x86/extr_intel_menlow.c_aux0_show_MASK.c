
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_menlow_attribute {int handle; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (int ,int ,unsigned long long*) ;
 int FUNC_2 (char*,char*,int ) ;
 struct intel_menlow_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct intel_menlow_attribute *VAR_3 = FUNC_3(VAR_1);
 unsigned long long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->handle, 0, &VAR_4);

 return VAR_5 ? VAR_5 : FUNC_2(VAR_2, "%lu", FUNC_0(VAR_4));
}
