
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_devmap {int features; int device; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 size_t FUNC_1 (struct dasd_devmap*) ;
 struct dasd_devmap* FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_5, struct device_attribute *VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 struct dasd_devmap *VAR_9;
 ssize_t VAR_10;
 unsigned long VAR_11;

 VAR_9 = FUNC_2(FUNC_6(VAR_5));
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 if ((FUNC_5(VAR_7, 10, &VAR_11) != 0) || VAR_11 > 1)
  return -VAR_2;

 FUNC_3(&VAR_4);

 VAR_10 = VAR_8;
 if (!VAR_9->device && !(VAR_9->features & VAR_0)) {
  if (VAR_11)
   VAR_9->features |= VAR_1;
  else
   VAR_9->features &= ~VAR_1;
 } else
  VAR_10 = -VAR_3;
 FUNC_4(&VAR_4);
 return VAR_10;
}
