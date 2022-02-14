
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_3, "%u\n", VAR_4);
}
