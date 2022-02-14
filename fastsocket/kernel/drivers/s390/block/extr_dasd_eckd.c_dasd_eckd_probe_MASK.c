
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ccw_device*,char*,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct ccw_device*,int) ;
 int VAR_4 ;
 int FUNC_2 (struct ccw_device*,int *) ;

__attribute__((used)) static int
FUNC_3 (struct ccw_device *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_1(VAR_5, VAR_0 |
         VAR_2 | VAR_1);
 if (VAR_6) {
  FUNC_0(VAR_3, VAR_5, "%s",
    "dasd_eckd_probe: could not set "
    "ccw-device options");
  return VAR_6;
 }
 VAR_6 = FUNC_2(VAR_5, &VAR_4);
 return VAR_6;
}
