
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_devmap {int features; TYPE_1__* device; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 size_t FUNC_1 (struct dasd_devmap*) ;
 struct dasd_devmap* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char const*,char**,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3, struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 struct dasd_devmap *VAR_7;
 int VAR_8;
 char *VAR_9;

 VAR_7 = FUNC_2(FUNC_6(VAR_3));
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = FUNC_3(VAR_5, &VAR_9, 0);
 if (((VAR_9 + 1) < (VAR_5 + VAR_6)) || (VAR_8 > 1))
  return -VAR_1;

 FUNC_4(&VAR_2);
 if (VAR_8)
  VAR_7->features |= VAR_0;
 else
  VAR_7->features &= ~VAR_0;
 if (VAR_7->device)
  VAR_7->device->features = VAR_7->features;
 FUNC_5(&VAR_2);
 return VAR_6;
}
