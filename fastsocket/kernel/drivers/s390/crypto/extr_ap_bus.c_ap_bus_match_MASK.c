
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct ap_driver {struct ap_device_id* ids; } ;
struct ap_device_id {int match_flags; scalar_t__ dev_type; } ;
struct ap_device {scalar_t__ device_type; } ;


 int VAR_0 ;
 struct ap_device* FUNC_0 (struct device*) ;
 struct ap_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct device_driver *VAR_2)
{
 struct ap_device *VAR_3 = FUNC_0(VAR_1);
 struct ap_driver *VAR_4 = FUNC_1(VAR_2);
 struct ap_device_id *VAR_5;





 for (VAR_5 = VAR_4->ids; VAR_5->match_flags; VAR_5++) {
  if ((VAR_5->match_flags & VAR_0) &&
      (VAR_5->dev_type != VAR_3->device_type))
   continue;
  return 1;
 }
 return 0;
}
