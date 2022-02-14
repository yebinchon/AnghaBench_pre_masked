
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int mouseButtonLeft; } ;
struct aiptek {TYPE_1__ newSetting; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct aiptek* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,char const*,size_t) ;
 int VAR_2 ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_3, struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct aiptek *VAR_7 = FUNC_0(VAR_3);
 int VAR_8 = FUNC_1(VAR_2, VAR_5, VAR_6);

 if (VAR_8 == VAR_0)
  return -VAR_1;

 VAR_7->newSetting.mouseButtonLeft = VAR_8;
 return VAR_6;
}
