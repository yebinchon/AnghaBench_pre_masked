
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ xTilt; } ;
struct aiptek {TYPE_1__ curSetting; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct aiptek* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct aiptek *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->curSetting.xTilt == VAR_0) {
  return FUNC_1(VAR_4, VAR_1, "disable\n");
 } else {
  return FUNC_1(VAR_4, VAR_1, "%d\n",
    VAR_5->curSetting.xTilt);
 }
}
