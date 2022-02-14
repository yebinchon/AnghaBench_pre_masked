
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {int state; } ;
typedef int ssize_t ;
 int FUNC_0 (struct dasd_device*) ;
 int VAR_0 ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct dasd_device *VAR_4;
 ssize_t VAR_5;

 VAR_4 = FUNC_1(FUNC_4(VAR_1));
 if (!FUNC_0(VAR_4)) {
  switch (VAR_4->state) {
  case 131:
   VAR_5 = FUNC_3(VAR_3, VAR_0, "new\n");
   break;
  case 132:
   VAR_5 = FUNC_3(VAR_3, VAR_0, "detected\n");
   break;
  case 133:
   VAR_5 = FUNC_3(VAR_3, VAR_0, "basic\n");
   break;
  case 128:
   VAR_5 = FUNC_3(VAR_3, VAR_0, "unformatted\n");
   break;
  case 129:
   VAR_5 = FUNC_3(VAR_3, VAR_0, "ready\n");
   break;
  case 130:
   VAR_5 = FUNC_3(VAR_3, VAR_0, "online\n");
   break;
  default:
   VAR_5 = FUNC_3(VAR_3, VAR_0, "no stat\n");
   break;
  }
  FUNC_2(VAR_4);
 } else
  VAR_5 = FUNC_3(VAR_3, VAR_0, "unknown\n");
 return VAR_5;
}
