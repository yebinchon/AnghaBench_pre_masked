
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_devmap {int features; TYPE_1__* device; } ;
typedef int ssize_t ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 int FUNC_1 (struct dasd_devmap*) ;
 struct dasd_devmap* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 struct dasd_devmap *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(FUNC_6(VAR_3));
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 VAR_8 = 0;
 FUNC_3(&VAR_2);
 if (FUNC_5("ignore", VAR_5))
  VAR_7->features &= ~VAR_0;
 else if (FUNC_5("fail", VAR_5))
  VAR_7->features |= VAR_0;
 else
  VAR_8 = -VAR_1;
 if (VAR_7->device)
  VAR_7->device->features = VAR_7->features;
 FUNC_4(&VAR_2);
 if (VAR_8)
  return VAR_8;
 else
  return VAR_6;
}
