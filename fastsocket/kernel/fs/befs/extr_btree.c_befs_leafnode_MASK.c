
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ overflow; } ;
struct TYPE_5__ {TYPE_1__ head; } ;
typedef TYPE_2__ befs_btree_node ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(befs_btree_node * VAR_1)
{

 if (VAR_1->head.overflow == VAR_0)
  return 1;
 else
  return 0;
}
