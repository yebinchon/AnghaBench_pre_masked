
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tc6393xb {int lock; scalar_t__ scr; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tc6393xb* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct tc6393xb *VAR_4 = FUNC_0(VAR_3->dev.parent);
 unsigned long VAR_5;
 u16 VAR_6;

 FUNC_1(&VAR_4->lock, VAR_5);

 VAR_6 = FUNC_3(VAR_4->scr + VAR_0);
 VAR_6 &= ~VAR_2;
 VAR_6 |= VAR_1;
 FUNC_4(VAR_6, VAR_4->scr + VAR_0);

 FUNC_2(&VAR_4->lock, VAR_5);

 return 0;
}
