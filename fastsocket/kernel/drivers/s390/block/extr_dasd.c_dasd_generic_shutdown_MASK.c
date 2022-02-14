
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {scalar_t__ block; } ;
struct ccw_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 struct dasd_device* FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct dasd_device*) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(struct ccw_device *VAR_1)
{
 struct dasd_device *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_2))
  return;

 if (VAR_2->block)
  FUNC_3(VAR_2->block);

 FUNC_4(VAR_2);

 FUNC_5(VAR_0, FUNC_1(VAR_2));
}
