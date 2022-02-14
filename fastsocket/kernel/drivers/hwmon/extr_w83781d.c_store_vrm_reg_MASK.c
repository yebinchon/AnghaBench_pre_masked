
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct w83781d_data {int vrm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct w83781d_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct w83781d_data *VAR_4 = FUNC_0(VAR_0);
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_2, ((void*)0), 10);
 VAR_4->vrm = VAR_5;

 return VAR_3;
}
