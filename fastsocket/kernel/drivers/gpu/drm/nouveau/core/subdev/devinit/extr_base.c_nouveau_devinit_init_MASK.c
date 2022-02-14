
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_devinit {int post; int base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

int
FUNC_2(struct nouveau_devinit *VAR_0)
{
 int VAR_1 = FUNC_0(&VAR_0->base);
 if (VAR_1)
  return VAR_1;

 return FUNC_1(&VAR_0->base, VAR_0->post);
}
