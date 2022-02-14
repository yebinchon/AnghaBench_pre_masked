
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int wheel; } ;
struct aiptek {TYPE_1__ newSetting; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct aiptek* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,long*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct aiptek *VAR_5 = FUNC_0(VAR_1);
 long VAR_6;

 if (FUNC_1(VAR_3, 10, &VAR_6)) return -VAR_0;

 VAR_5->newSetting.wheel = (int)VAR_6;
 return VAR_4;
}
