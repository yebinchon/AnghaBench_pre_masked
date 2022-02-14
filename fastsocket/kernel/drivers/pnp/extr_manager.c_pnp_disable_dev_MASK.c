
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {scalar_t__ active; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pnp_dev*) ;
 int VAR_0 ;
 int FUNC_3 (struct pnp_dev*) ;

int FUNC_4(struct pnp_dev *VAR_1)
{
 int VAR_2;

 if (!VAR_1->active)
  return 0;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_1->active = 0;


 FUNC_0(&VAR_0);
 FUNC_2(VAR_1);
 FUNC_1(&VAR_0);

 return 0;
}
