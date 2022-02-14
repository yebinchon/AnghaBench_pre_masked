
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int io_lock; scalar_t__ locked; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wm831x*,int ,int) ;

int FUNC_5(struct wm831x *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_4(VAR_1, VAR_0, 0x9716);
 if (VAR_2 == 0) {
  FUNC_1(VAR_1->dev, "Registers unlocked\n");

  FUNC_2(&VAR_1->io_lock);
  FUNC_0(!VAR_1->locked);
  VAR_1->locked = 0;
  FUNC_3(&VAR_1->io_lock);
 }

 return VAR_2;
}
