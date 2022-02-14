
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_sdio_glue {int core; } ;
struct sdio_func {int dev; } ;


 int FUNC_0 (struct wl12xx_sdio_glue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct wl12xx_sdio_glue* FUNC_3 (struct sdio_func*) ;

__attribute__((used)) static void FUNC_4(struct sdio_func *VAR_0)
{
 struct wl12xx_sdio_glue *VAR_1 = FUNC_3(VAR_0);


 FUNC_2(&VAR_0->dev);

 FUNC_1(VAR_1->core);
 FUNC_0(VAR_1);
}
