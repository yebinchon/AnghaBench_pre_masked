
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_rb_root {scalar_t__ min_disptime; int count; } ;
struct throtl_data {struct throtl_rb_root tg_service_tree; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct throtl_data*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct throtl_data*) ;
 int FUNC_4 (struct throtl_rb_root*) ;

__attribute__((used)) static void FUNC_5(struct throtl_data *VAR_1)
{
 struct throtl_rb_root *VAR_2 = &VAR_1->tg_service_tree;




 if (!FUNC_3(VAR_1))
  return;

 FUNC_0(!VAR_2->count);

 FUNC_4(VAR_2);

 if (FUNC_2(VAR_2->min_disptime, VAR_0))
  FUNC_1(VAR_1, 0);
 else
  FUNC_1(VAR_1, (VAR_2->min_disptime - VAR_0));
}
