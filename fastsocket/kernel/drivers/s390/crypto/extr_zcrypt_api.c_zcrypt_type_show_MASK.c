
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_device {char* type_string; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct zcrypt_device* private; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 TYPE_1__* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct zcrypt_device *VAR_4 = FUNC_1(VAR_1)->private;
 return FUNC_0(VAR_3, VAR_0, "%s\n", VAR_4->type_string);
}
