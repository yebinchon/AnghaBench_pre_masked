
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct pnp_dev *VAR_4)
{
 FUNC_0(&VAR_3);
 if (VAR_4->status != VAR_2) {
  FUNC_1(&VAR_3);
  return -VAR_0;
 }
 VAR_4->status = VAR_1;
 FUNC_1(&VAR_3);
 return 0;
}
