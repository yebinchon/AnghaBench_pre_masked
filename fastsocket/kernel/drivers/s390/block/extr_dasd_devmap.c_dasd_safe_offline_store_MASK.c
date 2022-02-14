
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {int flags; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct ccw_device*) ;
 struct dasd_device* FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 struct ccw_device* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_4, struct device_attribute *VAR_5,
   const char *VAR_6, size_t VAR_7)
{
 struct ccw_device *VAR_8 = FUNC_7(VAR_4);
 struct dasd_device *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_8);
 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
  goto out;
 }

 if (FUNC_6(VAR_0, &VAR_9->flags) ||
     FUNC_6(VAR_2, &VAR_9->flags)) {

  FUNC_4(VAR_9);
  VAR_10 = -VAR_3;
  goto out;
 }

 FUNC_5(VAR_1, &VAR_9->flags);
 FUNC_4(VAR_9);

 VAR_10 = FUNC_2(VAR_8);

out:
 return VAR_10 ? VAR_10 : VAR_7;
}
