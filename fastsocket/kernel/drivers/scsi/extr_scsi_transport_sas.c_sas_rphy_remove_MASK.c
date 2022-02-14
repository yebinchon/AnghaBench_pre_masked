
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_type; } ;
struct device {int dummy; } ;
struct sas_rphy {TYPE_1__ identify; struct device dev; } ;





 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct sas_rphy*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

void
FUNC_5(struct sas_rphy *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;

 switch (VAR_0->identify.device_type) {
 case 129:
  FUNC_3(VAR_1);
  break;
 case 130:
 case 128:
  FUNC_1(VAR_1);
  break;
 default:
  break;
 }

 FUNC_2(VAR_0);
 FUNC_4(VAR_1);
 FUNC_0(VAR_1);
}
