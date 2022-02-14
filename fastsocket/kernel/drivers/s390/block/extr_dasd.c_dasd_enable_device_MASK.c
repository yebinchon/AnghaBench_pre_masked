
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {scalar_t__ state; TYPE_1__* discipline; } ;
struct TYPE_2__ {int (* kick_validate ) (struct dasd_device*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dasd_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*,int ) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct dasd_device *VAR_4)
{
 FUNC_2(VAR_4, VAR_2);
 if (VAR_4->state <= VAR_0)

  FUNC_2(VAR_4, VAR_1);

 FUNC_4(VAR_3, FUNC_0(VAR_4));

 FUNC_1(VAR_4);
 if (VAR_4->discipline->kick_validate)
  VAR_4->discipline->kick_validate(VAR_4);
}
