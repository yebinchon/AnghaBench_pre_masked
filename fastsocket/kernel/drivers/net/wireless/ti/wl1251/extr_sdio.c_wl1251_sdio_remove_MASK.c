
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251_sdio {int dummy; } ;
struct wl1251 {scalar_t__ irq; struct wl1251_sdio* if_priv; } ;
struct sdio_func {int dev; } ;


 int FUNC_0 (scalar_t__,struct wl1251*) ;
 int FUNC_1 (struct wl1251_sdio*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*) ;
 struct wl1251* FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct wl1251*) ;

__attribute__((used)) static void FUNC_9(struct sdio_func *VAR_0)
{
 struct wl1251 *VAR_1 = FUNC_5(VAR_0);
 struct wl1251_sdio *VAR_2 = VAR_1->if_priv;


 FUNC_2(&VAR_0->dev);

 if (VAR_1->irq)
  FUNC_0(VAR_1->irq, VAR_1);
 FUNC_8(VAR_1);
 FUNC_1(VAR_2);

 FUNC_3(VAR_0);
 FUNC_7(VAR_0);
 FUNC_4(VAR_0);
 FUNC_6(VAR_0);
}
