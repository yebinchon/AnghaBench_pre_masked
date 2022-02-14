
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct musb {int lock; int * clock; } ;


 int FUNC_0 (int *) ;
 struct musb* FUNC_1 (int *) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (struct musb*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_0)
{
 struct musb *VAR_1 = FUNC_1(&VAR_0->dev);
 unsigned long VAR_2;

 FUNC_4(&VAR_1->lock, VAR_2);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 if (VAR_1->clock) {
  FUNC_0(VAR_1->clock);
  VAR_1->clock = ((void*)0);
 }
 FUNC_5(&VAR_1->lock, VAR_2);


}
