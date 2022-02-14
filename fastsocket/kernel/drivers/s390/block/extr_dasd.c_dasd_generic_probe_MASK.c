
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_discipline {int dummy; } ;
struct ccw_device {int dev; int * handler; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ccw_device*,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct ccw_device*,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ccw_device *VAR_5,
         struct dasd_discipline *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_1, VAR_5, "%s",
    "dasd_generic_probe: could not add "
    "sysfs entries");
  return VAR_7;
 }
 VAR_5->handler = &VAR_4;






 if ((FUNC_4(VAR_5, VAR_0) > 0 ) ||
     (VAR_2 && FUNC_3(FUNC_5(&VAR_5->dev)) != 0))
  FUNC_1(VAR_3, VAR_5);
 return 0;
}
