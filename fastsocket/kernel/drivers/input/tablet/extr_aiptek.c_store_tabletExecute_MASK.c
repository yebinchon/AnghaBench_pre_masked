
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aiptek_settings {int dummy; } ;
struct aiptek {int newSetting; int curSetting; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct aiptek*) ;
 struct aiptek* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct aiptek *VAR_5 = FUNC_1(VAR_1);




 FUNC_2(&VAR_5->curSetting, &VAR_5->newSetting,
        sizeof(struct aiptek_settings));

 if (FUNC_0(VAR_5) < 0)
  return -VAR_0;

 return VAR_4;
}
