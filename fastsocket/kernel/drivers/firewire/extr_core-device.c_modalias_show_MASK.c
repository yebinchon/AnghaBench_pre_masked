
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_unit {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct fw_unit* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fw_unit*,char*,int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct fw_unit *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_0);
 FUNC_2(VAR_3 + VAR_5, "\n");

 return VAR_5 + 1;
}
