
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc6393xb {int lock; scalar_t__ scr; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct tc6393xb* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;
 struct platform_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_6(VAR_0->dev.parent);
 struct tc6393xb *VAR_2 = FUNC_2(VAR_1);
 unsigned long VAR_3;

 FUNC_3(&VAR_2->lock, VAR_3);


 FUNC_1(&VAR_1->dev, "SMD buffer on\n");
 FUNC_5(0xff, VAR_2->scr + FUNC_0(1));

 FUNC_4(&VAR_2->lock, VAR_3);

 return 0;
}
