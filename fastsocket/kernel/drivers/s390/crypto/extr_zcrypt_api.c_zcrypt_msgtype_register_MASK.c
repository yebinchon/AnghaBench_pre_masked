
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_ops {int list; scalar_t__ owner; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(struct zcrypt_ops *VAR_2)
{
 if (VAR_2->owner) {
  FUNC_1(&VAR_1);
  FUNC_0(&VAR_2->list, &VAR_0);
  FUNC_2(&VAR_1);
 }
}
