
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w1_slave {int reg_num; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct w1_slave* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct w1_slave *VAR_3 = FUNC_0(VAR_0);
 ssize_t VAR_4 = sizeof(VAR_3->reg_num);

 FUNC_1(VAR_2, (u8 *)&VAR_3->reg_num, VAR_4);
 return VAR_4;
}
