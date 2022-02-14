
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct b43_sdio {int ssb; } ;


 int FUNC_0 (struct b43_sdio*) ;
 int FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*) ;
 struct b43_sdio* FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct sdio_func *VAR_0)
{
 struct b43_sdio *VAR_1 = FUNC_3(VAR_0);

 FUNC_6(&VAR_1->ssb);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
 FUNC_0(VAR_1);
 FUNC_5(VAR_0, ((void*)0));
}
