
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1251_sdio {int elp_val; struct sdio_func* func; } ;
struct wl1251 {struct wl1251_sdio* if_priv; } ;
struct sdio_func {int dummy; } ;


 int FUNC_0 (struct sdio_func*) ;
 int FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*,int ,int,int*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct wl1251 *VAR_0, int VAR_1, u32 *VAR_2)
{
 int VAR_3 = 0;
 struct wl1251_sdio *VAR_4 = VAR_0->if_priv;
 struct sdio_func *VAR_5 = VAR_4->func;







 FUNC_0(VAR_5);
 *VAR_2 = FUNC_2(VAR_5, VAR_4->elp_val, VAR_1, &VAR_3);
 FUNC_1(VAR_5);

 if (VAR_3)
  FUNC_3("sdio_readb failed (%d)", VAR_3);
}
