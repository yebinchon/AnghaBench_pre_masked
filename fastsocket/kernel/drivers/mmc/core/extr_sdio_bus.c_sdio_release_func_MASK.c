
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {struct sdio_func* info; } ;
struct device {int dummy; } ;


 struct sdio_func* FUNC_0 (struct device*) ;
 int FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct sdio_func *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);

 if (VAR_1->info)
  FUNC_1(VAR_1->info);

 FUNC_1(VAR_1);
}
