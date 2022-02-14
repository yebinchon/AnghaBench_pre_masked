
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int active; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pnp_dev*) ;
 int FUNC_1 (struct pnp_dev*) ;

int FUNC_2(struct pnp_dev *VAR_1)
{
 int VAR_2;

 if (VAR_1->active)
  return 0;


 if (FUNC_0(VAR_1))
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_1->active = 1;
 return 0;
}
