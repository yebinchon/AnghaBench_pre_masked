
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulist {scalar_t__ nodes_alloced; int nodes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct ulist *VAR_1)
{




 if (VAR_1->nodes_alloced > VAR_0)
  FUNC_0(VAR_1->nodes);
 VAR_1->nodes_alloced = 0;
}
