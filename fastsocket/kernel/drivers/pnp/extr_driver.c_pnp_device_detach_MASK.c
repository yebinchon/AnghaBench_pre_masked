
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pnp_dev*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct pnp_dev *VAR_3)
{
 FUNC_1(&VAR_2);
 if (VAR_3->status == VAR_0)
  VAR_3->status = VAR_1;
 FUNC_2(&VAR_2);
 FUNC_0(VAR_3);
}
