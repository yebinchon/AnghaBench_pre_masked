
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_devmap {int device; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 int FUNC_1 (struct dasd_devmap*) ;
 struct dasd_devmap* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,char**,int ) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct dasd_devmap *VAR_6;
 int VAR_7, VAR_8;
 char *VAR_9;

 VAR_6 = FUNC_2(FUNC_6(VAR_2));
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 if (!VAR_6->device)
  return -VAR_1;

 VAR_7 = FUNC_5(VAR_4, &VAR_9, 0);
 if (((VAR_9 + 1) < (VAR_4 + VAR_5)) || (VAR_7 > 1))
  return -VAR_0;

 if (VAR_7) {
  VAR_8 = FUNC_4(VAR_6->device);
  if (VAR_8)
   return VAR_8;
 } else
  FUNC_3(VAR_6->device);
 return VAR_5;
}
