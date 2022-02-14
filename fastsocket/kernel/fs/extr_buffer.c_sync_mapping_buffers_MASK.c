
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int private_list; int private_lock; struct address_space* assoc_mapping; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(struct address_space *VAR_0)
{
 struct address_space *VAR_1 = VAR_0->assoc_mapping;

 if (VAR_1 == ((void*)0) || FUNC_1(&VAR_0->private_list))
  return 0;

 return FUNC_0(&VAR_1->private_lock,
     &VAR_0->private_list);
}
