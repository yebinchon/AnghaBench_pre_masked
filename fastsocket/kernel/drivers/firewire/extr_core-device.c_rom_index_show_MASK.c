
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_unit {scalar_t__ directory; } ;
struct fw_device {scalar_t__ config_rom; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct fw_device* FUNC_0 (int ) ;
 struct fw_unit* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct fw_device *VAR_4 = FUNC_0(VAR_1->parent);
 struct fw_unit *VAR_5 = FUNC_1(VAR_1);

 return FUNC_2(VAR_3, VAR_0, "%d\n",
   (int)(VAR_5->directory - VAR_4->config_rom));
}
