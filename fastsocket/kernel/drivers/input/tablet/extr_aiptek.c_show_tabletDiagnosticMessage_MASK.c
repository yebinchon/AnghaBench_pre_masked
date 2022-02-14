
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int pointerMode; } ;
struct aiptek {int diagnostic; TYPE_1__ curSetting; } ;
typedef int ssize_t ;






 int VAR_0 ;
 int VAR_1 ;
 struct aiptek* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct aiptek *VAR_5 = FUNC_0(VAR_2);
 char *VAR_6;

 switch (VAR_5->diagnostic) {
 case 131:
  VAR_6 = "no errors\n";
  break;

 case 129:
  VAR_6 = "Error: receiving relative reports\n";
  break;

 case 130:
  VAR_6 = "Error: receiving absolute reports\n";
  break;

 case 128:
  if (VAR_5->curSetting.pointerMode ==
      VAR_0) {
   VAR_6 = "Error: receiving stylus reports\n";
  } else {
   VAR_6 = "Error: receiving mouse reports\n";
  }
  break;

 default:
  return 0;
 }
 return FUNC_1(VAR_4, VAR_1, VAR_6);
}
