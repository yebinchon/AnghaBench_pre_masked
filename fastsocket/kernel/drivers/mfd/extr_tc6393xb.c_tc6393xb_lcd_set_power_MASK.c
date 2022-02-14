
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tc6393xb {int lock; scalar_t__ scr; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct tc6393xb* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct platform_device* FUNC_5 (int ) ;

int FUNC_6(struct platform_device *VAR_2, bool VAR_3)
{
 struct platform_device *VAR_4 = FUNC_5(VAR_2->dev.parent);
 struct tc6393xb *VAR_5 = FUNC_2(VAR_4);
 u8 VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_5->lock, VAR_7);

 VAR_6 = FUNC_0(VAR_5->scr + VAR_0);
 if (VAR_3)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;
 FUNC_1(VAR_6, VAR_5->scr + VAR_0);

 FUNC_4(&VAR_5->lock, VAR_7);

 return 0;
}
