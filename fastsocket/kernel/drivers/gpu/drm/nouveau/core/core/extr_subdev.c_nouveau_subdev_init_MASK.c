
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_subdev {int base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct nouveau_subdev *VAR_0)
{
 int VAR_1 = FUNC_0(&VAR_0->base);
 if (VAR_1)
  return VAR_1;

 FUNC_1(&VAR_0->base);
 return 0;
}
