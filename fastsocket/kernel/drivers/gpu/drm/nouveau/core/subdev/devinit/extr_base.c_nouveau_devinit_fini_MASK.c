
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_devinit {int post; int base; } ;


 int FUNC_0 (int *,int) ;

int
FUNC_1(struct nouveau_devinit *VAR_0, bool VAR_1)
{

 if (VAR_1)
  VAR_0->post = 1;

 return FUNC_0(&VAR_0->base, VAR_1);
}
