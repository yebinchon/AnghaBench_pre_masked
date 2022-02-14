
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {struct dasd_block* block; int flags; } ;
struct dasd_block {int dummy; } ;
struct ccw_device {int * handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 struct dasd_device* FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct dasd_block*) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct ccw_device*) ;
 int FUNC_6 (struct dasd_device*,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9(struct ccw_device *VAR_3)
{
 struct dasd_device *VAR_4;
 struct dasd_block *VAR_5;

 VAR_3->handler = ((void*)0);

 VAR_4 = FUNC_2(VAR_3);
 if (FUNC_0(VAR_4))
  return;
 if (FUNC_7(VAR_0, &VAR_4->flags) &&
     !FUNC_8(VAR_1, &VAR_4->flags)) {

  FUNC_4(VAR_4);
  return;
 }





 FUNC_6(VAR_4, VAR_2);

 VAR_5 = VAR_4->block;
 FUNC_1(VAR_4);




 if (VAR_5)
  FUNC_3(VAR_5);

 FUNC_5(VAR_3);
}
