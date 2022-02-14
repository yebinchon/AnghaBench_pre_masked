
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_rb_root {scalar_t__ left; int rb; int count; } ;
struct throtl_grp {int dummy; } ;


 struct throtl_grp* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static struct throtl_grp *FUNC_2(struct throtl_rb_root *VAR_0)
{

 if (!VAR_0->count)
  return ((void*)0);

 if (!VAR_0->left)
  VAR_0->left = FUNC_1(&VAR_0->rb);

 if (VAR_0->left)
  return FUNC_0(VAR_0->left);

 return ((void*)0);
}
