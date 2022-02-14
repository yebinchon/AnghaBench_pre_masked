
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcma_drv_cc {int ticks_per_ms; } ;
struct bcm47xx_wdt {int dummy; } ;


 struct bcma_drv_cc* FUNC_0 (struct bcm47xx_wdt*) ;
 int FUNC_1 (struct bcma_drv_cc*,int) ;

__attribute__((used)) static u32 FUNC_2(struct bcm47xx_wdt *VAR_0,
       u32 VAR_1)
{
 struct bcma_drv_cc *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_2->ticks_per_ms * VAR_1);
 return VAR_3 / VAR_2->ticks_per_ms;
}
