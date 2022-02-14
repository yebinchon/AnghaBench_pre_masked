
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_devmap {int features; struct dasd_device* device; } ;
struct dasd_device {TYPE_1__* block; int flags; int features; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ gdp; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 size_t FUNC_1 (struct dasd_devmap*) ;
 struct dasd_devmap* FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char const*,char**,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_4, struct device_attribute *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 struct dasd_devmap *VAR_8;
 struct dasd_device *VAR_9;
 int VAR_10;
 char *VAR_11;

 VAR_8 = FUNC_2(FUNC_8(VAR_4));
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_10 = FUNC_4(VAR_6, &VAR_11, 0);
 if (((VAR_11 + 1) < (VAR_6 + VAR_7)) || (VAR_10 > 1))
  return -VAR_2;

 FUNC_5(&VAR_3);
 if (VAR_10)
  VAR_8->features |= VAR_0;
 else
  VAR_8->features &= ~VAR_0;
 VAR_9 = VAR_8->device;
 if (VAR_9) {
  VAR_9->features = VAR_8->features;
  VAR_10 = VAR_10 || FUNC_7(VAR_1, &VAR_9->flags);
 }
 FUNC_6(&VAR_3);
 if (VAR_9 && VAR_9->block && VAR_9->block->gdp)
  FUNC_3(VAR_9->block->gdp, VAR_10);
 return VAR_7;
}
