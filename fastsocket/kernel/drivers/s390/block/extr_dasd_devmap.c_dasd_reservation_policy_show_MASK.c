
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_devmap {int features; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dasd_devmap* FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
         struct device_attribute *VAR_4,
         char *VAR_5)
{
 struct dasd_devmap *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_1(FUNC_2(VAR_3));
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_3(VAR_5, VAR_1, "ignore\n");
 } else {
  FUNC_4(&VAR_2);
  if (VAR_6->features & VAR_0)
   VAR_7 = FUNC_3(VAR_5, VAR_1, "fail\n");
  else
   VAR_7 = FUNC_3(VAR_5, VAR_1, "ignore\n");
  FUNC_5(&VAR_2);
 }
 return VAR_7;
}
