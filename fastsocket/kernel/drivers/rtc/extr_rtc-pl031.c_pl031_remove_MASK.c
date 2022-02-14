
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl031_local {int base; int rtc; } ;
struct amba_device {int * irq; int dev; } ;


 int FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct amba_device*,int *) ;
 struct pl031_local* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pl031_local*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct amba_device *VAR_0)
{
 struct pl031_local *VAR_1 = FUNC_2(&VAR_0->dev);

 FUNC_1(VAR_0, ((void*)0));
 FUNC_3(VAR_0->irq[0], VAR_1->rtc);
 FUNC_6(VAR_1->rtc);
 FUNC_4(VAR_1->base);
 FUNC_5(VAR_1);
 FUNC_0(VAR_0);

 return 0;
}
