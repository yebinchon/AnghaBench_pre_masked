
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc6393xb {int lock; scalar_t__ scr; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct fb_videomode {int pixclock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 struct tc6393xb* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct platform_device* FUNC_4 (int ) ;

int FUNC_5(struct platform_device *VAR_1,
     const struct fb_videomode *VAR_2) {
 struct platform_device *VAR_3 = FUNC_4(VAR_1->dev.parent);
 struct tc6393xb *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5;

 FUNC_2(&VAR_4->lock, VAR_5);

 FUNC_0(VAR_2->pixclock, VAR_4->scr + VAR_0 + 0);
 FUNC_0(VAR_2->pixclock >> 16, VAR_4->scr + VAR_0 + 2);

 FUNC_3(&VAR_4->lock, VAR_5);

 return 0;
}
