
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int rcu_head; int ref; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct throtl_grp *VAR_1)
{
 FUNC_0(FUNC_2(&VAR_1->ref) <= 0);
 if (!FUNC_1(&VAR_1->ref))
  return;
 FUNC_3(&VAR_1->rcu_head, VAR_0);
}
