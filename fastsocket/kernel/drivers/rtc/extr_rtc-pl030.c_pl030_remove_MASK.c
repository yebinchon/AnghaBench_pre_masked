
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl030_rtc {scalar_t__ base; int rtc; } ;
struct amba_device {int * irq; } ;


 scalar_t__ VAR_0 ;
 struct pl030_rtc* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct amba_device*) ;
 int FUNC_2 (struct amba_device*,int *) ;
 int FUNC_3 (int ,struct pl030_rtc*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct pl030_rtc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct amba_device *VAR_1)
{
 struct pl030_rtc *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_1, ((void*)0));

 FUNC_7(0, VAR_2->base + VAR_0);

 FUNC_3(VAR_1->irq[0], VAR_2);
 FUNC_6(VAR_2->rtc);
 FUNC_4(VAR_2->base);
 FUNC_5(VAR_2);
 FUNC_1(VAR_1);

 return 0;
}
