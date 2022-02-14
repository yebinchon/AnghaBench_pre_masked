
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {int stopped; int flags; scalar_t__ block; TYPE_1__* discipline; } ;
struct ccw_device {int dummy; } ;
struct TYPE_2__ {int (* restore ) (struct dasd_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (int ,int *) ;
 struct dasd_device* FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct dasd_device*,int) ;
 int FUNC_5 (struct dasd_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct dasd_device*) ;
 int FUNC_8 (struct dasd_device*) ;

int FUNC_9(struct ccw_device *VAR_3)
{
 struct dasd_device *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = 0;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);


 FUNC_4(VAR_4,
         (VAR_1 | VAR_2));

 FUNC_7(VAR_4);





 if (VAR_4->discipline->restore && !(VAR_4->stopped))
  VAR_5 = VAR_4->discipline->restore(VAR_4);
 if (VAR_5 || VAR_4->stopped)




  VAR_4->stopped |= VAR_2;

 if (VAR_4->block)
  FUNC_6(VAR_4->block);

 FUNC_2(VAR_0, &VAR_4->flags);
 FUNC_5(VAR_4);
 return 0;
}
