
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct display_device {int lock; TYPE_1__* driver; } ;
struct device {int dummy; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int (* suspend ) (struct display_device*,int ) ;} ;


 struct display_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int (*) (struct display_device*,int )) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct display_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, pm_message_t VAR_1)
{
 struct display_device *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->lock);
 if (FUNC_1(VAR_2->driver->suspend))
  VAR_2->driver->suspend(VAR_2, VAR_1);
 FUNC_3(&VAR_2->lock);
 return 0;
}
