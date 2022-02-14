
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcore_wdt {scalar_t__ base; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mpcore_wdt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mpcore_wdt *VAR_4)
{
 FUNC_0(VAR_0, VAR_4->dev, "enabling watchdog.\n");

 FUNC_2(&VAR_3);

 FUNC_1(VAR_4);

 if (VAR_2) {

  FUNC_4(0x0000FF01, VAR_4->base + VAR_1);
 } else {

  FUNC_4(0x0000FF09, VAR_4->base + VAR_1);
 }
 FUNC_3(&VAR_3);
}
