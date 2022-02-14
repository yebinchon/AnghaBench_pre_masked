
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 u32 VAR_4;

 FUNC_0(FUNC_2(VAR_1),
         VAR_0, &VAR_4);
 return FUNC_1(VAR_3, "%u\n", (VAR_4 >> 21) * 125);
}
