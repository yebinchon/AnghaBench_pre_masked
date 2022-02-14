
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_rb_root {int count; } ;
struct throtl_grp {int dummy; } ;
struct throtl_data {struct throtl_rb_root tg_service_tree; } ;


 int FUNC_0 (struct throtl_rb_root*,struct throtl_grp*) ;
 int FUNC_1 (struct throtl_grp*) ;

__attribute__((used)) static void FUNC_2(struct throtl_data *VAR_0, struct throtl_grp *VAR_1)
{
 struct throtl_rb_root *VAR_2 = &VAR_0->tg_service_tree;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_1);
 VAR_2->count++;
}
