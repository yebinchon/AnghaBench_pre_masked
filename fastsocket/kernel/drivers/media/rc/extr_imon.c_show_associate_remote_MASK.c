
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imon_context {int lock; scalar_t__ rf_isassociating; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct imon_context* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct imon_context *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_4->lock);
 if (VAR_4->rf_isassociating)
  FUNC_4(VAR_3, "associating\n");
 else
  FUNC_4(VAR_3, "closed\n");

 FUNC_1(VAR_1, "Visit http://www.lirc.org/html/imon-24g.html for "
   "instructions on how to associate your iMON 2.4G DT/LT "
   "remote\n");
 FUNC_3(&VAR_4->lock);
 return FUNC_5(VAR_3);
}
