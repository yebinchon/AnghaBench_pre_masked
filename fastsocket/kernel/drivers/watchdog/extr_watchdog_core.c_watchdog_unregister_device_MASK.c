
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct watchdog_device {int * dev; int id; TYPE_1__ cdev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 (struct watchdog_device*) ;
 int VAR_1 ;

void FUNC_4(struct watchdog_device *VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return;

 VAR_4 = VAR_2->cdev.dev;
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  FUNC_2("error unregistering /dev/watchdog (err=%d)\n", VAR_3);
 FUNC_0(VAR_0, VAR_4);
 FUNC_1(&VAR_1, VAR_2->id);
 VAR_2->dev = ((void*)0);
}
