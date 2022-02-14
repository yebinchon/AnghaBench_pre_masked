
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rb_node; } ;
struct qib_ibport {TYPE_1__ mcast_tree; } ;



int FUNC_0(struct qib_ibport *VAR_0)
{
 return VAR_0->mcast_tree.rb_node == ((void*)0);
}
