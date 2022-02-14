
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sir_dev {struct dongle_driver* dongle_drv; } ;
struct dongle_driver {int owner; int (* close ) (struct sir_dev*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sir_dev*) ;

int FUNC_2(struct sir_dev *VAR_0)
{
 const struct dongle_driver *VAR_1 = VAR_0->dongle_drv;

 if (VAR_1) {
  if (VAR_1->close)
   VAR_1->close(VAR_0);

  VAR_0->dongle_drv = ((void*)0);
  FUNC_0(VAR_1->owner);
 }

 return 0;
}
