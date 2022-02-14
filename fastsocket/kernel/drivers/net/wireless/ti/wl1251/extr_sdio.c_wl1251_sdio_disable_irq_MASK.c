
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct sdio_func {int dummy; } ;


 int FUNC_0 (struct sdio_func*) ;
 int FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*) ;
 struct sdio_func* FUNC_3 (struct wl1251*) ;

__attribute__((used)) static void FUNC_4(struct wl1251 *VAR_0)
{
 struct sdio_func *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
