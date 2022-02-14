
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_rb_root {scalar_t__ left; int rb; } ;
struct cfq_group {int dummy; } ;


 struct cfq_group* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static struct cfq_group *FUNC_2(struct cfq_rb_root *VAR_0)
{
 if (!VAR_0->left)
  VAR_0->left = FUNC_1(&VAR_0->rb);

 if (VAR_0->left)
  return FUNC_0(VAR_0->left);

 return ((void*)0);
}
