
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g760a_data {int fan_sta; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct g760a_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct g760a_data *VAR_4 = FUNC_0(VAR_1);

 int VAR_5 = (VAR_4->fan_sta & VAR_0) ? 1 : 0;

 return FUNC_1(VAR_3, "%d\n", VAR_5);
}
