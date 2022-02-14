
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rb_node; } ;
struct rb_node {int dummy; } ;


 struct request* FUNC_0 (struct rb_node*) ;
 struct rb_node* FUNC_1 (int *) ;

__attribute__((used)) static inline struct request *
FUNC_2(struct request *VAR_0)
{
 struct rb_node *VAR_1 = FUNC_1(&VAR_0->rb_node);

 if (VAR_1)
  return FUNC_0(VAR_1);

 return ((void*)0);
}
