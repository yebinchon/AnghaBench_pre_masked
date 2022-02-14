
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dme1737_data {long vrm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct dme1737_data* FUNC_0 (struct device*) ;
 long FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct dme1737_data *VAR_4 = FUNC_0(VAR_0);
 long VAR_5 = FUNC_1(VAR_2, ((void*)0), 10);

 VAR_4->vrm = VAR_5;
 return VAR_3;
}
