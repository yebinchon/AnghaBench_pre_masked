
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int irq_work; int hw; } ;
struct sdio_func {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct wl1251* FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct sdio_func *VAR_1)
{
 struct wl1251 *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_0, "IRQ");


 FUNC_0(VAR_2->hw, &VAR_2->irq_work);
}
