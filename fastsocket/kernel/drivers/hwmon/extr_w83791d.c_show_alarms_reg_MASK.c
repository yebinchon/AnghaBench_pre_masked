
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83791d_data {int alarms; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct w83791d_data* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct w83791d_data *VAR_3 = FUNC_1(VAR_0);
 return FUNC_0(VAR_2, "%u\n", VAR_3->alarms);
}
