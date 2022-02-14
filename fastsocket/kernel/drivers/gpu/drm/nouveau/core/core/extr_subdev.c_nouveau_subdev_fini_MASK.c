
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_subdev {int unit; int base; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nouveau_subdev*,int,int,int) ;

int
FUNC_2(struct nouveau_subdev *VAR_0, bool VAR_1)
{
 if (VAR_0->unit) {
  FUNC_1(VAR_0, 0x000200, VAR_0->unit, 0x00000000);
  FUNC_1(VAR_0, 0x000200, VAR_0->unit, VAR_0->unit);
 }

 return FUNC_0(&VAR_0->base, VAR_1);
}
