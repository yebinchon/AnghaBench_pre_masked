
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sdio_func*) ;

void FUNC_3(struct sdio_func *VAR_0)
{
 if (FUNC_2(VAR_0))
  FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_0->dev);
}
