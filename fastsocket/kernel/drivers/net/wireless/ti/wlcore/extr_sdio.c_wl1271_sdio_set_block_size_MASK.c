
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_sdio_glue {int dev; } ;
struct sdio_func {int dummy; } ;
struct device {int parent; } ;


 struct wl12xx_sdio_glue* FUNC_0 (int ) ;
 struct sdio_func* FUNC_1 (int ) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0,
           unsigned int VAR_1)
{
 struct wl12xx_sdio_glue *VAR_2 = FUNC_0(VAR_0->parent);
 struct sdio_func *VAR_3 = FUNC_1(VAR_2->dev);

 FUNC_2(VAR_3);
 FUNC_4(VAR_3, VAR_1);
 FUNC_3(VAR_3);
}
