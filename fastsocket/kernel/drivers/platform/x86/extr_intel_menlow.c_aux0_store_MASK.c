
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_menlow_attribute {int handle; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char const*,char*,int*) ;
 struct intel_menlow_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct intel_menlow_attribute *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;
 int VAR_7;


 if (!FUNC_2(VAR_3, "%d", &VAR_6))
  return -VAR_0;

 if (VAR_6 < 0)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5->handle, 0, FUNC_0(VAR_6));
 return VAR_7 ? VAR_7 : VAR_4;
}
