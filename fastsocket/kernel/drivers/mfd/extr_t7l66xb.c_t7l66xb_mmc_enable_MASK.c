
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct t7l66xb {int lock; scalar_t__ scr; int clk32k; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct t7l66xb* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 struct platform_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_6(VAR_2->dev.parent);
 struct t7l66xb *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5;
 u8 VAR_6;

 FUNC_0(VAR_4->clk32k);

 FUNC_2(&VAR_4->lock, VAR_5);

 VAR_6 = FUNC_4(VAR_4->scr + VAR_0);
 VAR_6 |= VAR_1;
 FUNC_5(VAR_6, VAR_4->scr + VAR_0);

 FUNC_3(&VAR_4->lock, VAR_5);

 return 0;
}
