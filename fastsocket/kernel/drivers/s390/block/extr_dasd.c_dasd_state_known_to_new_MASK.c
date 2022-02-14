
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {scalar_t__ block; int state; TYPE_1__* base_discipline; TYPE_2__* discipline; } ;
struct TYPE_4__ {int owner; int (* uncheck_device ) (struct dasd_device*) ;} ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dasd_device*) ;

__attribute__((used)) static int FUNC_5(struct dasd_device *VAR_1)
{

 FUNC_0(VAR_1);

 if (VAR_1->discipline) {
  if (VAR_1->discipline->uncheck_device)
   VAR_1->discipline->uncheck_device(VAR_1);
  FUNC_3(VAR_1->discipline->owner);
 }
 VAR_1->discipline = ((void*)0);
 if (VAR_1->base_discipline)
  FUNC_3(VAR_1->base_discipline->owner);
 VAR_1->base_discipline = ((void*)0);
 VAR_1->state = VAR_0;

 if (VAR_1->block)
  FUNC_1(VAR_1->block);


 FUNC_2(VAR_1);
 return 0;
}
