
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_rb_root {int min_disptime; } ;
struct throtl_grp {int disptime; } ;


 struct throtl_grp* FUNC_0 (struct throtl_rb_root*) ;

__attribute__((used)) static void FUNC_1(struct throtl_rb_root *VAR_0)
{
 struct throtl_grp *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return;

 VAR_0->min_disptime = VAR_1->disptime;
}
