
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {struct device_node* parent; } ;
struct TYPE_2__ {int eeh_mode; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct device_node*) ;

struct device_node * FUNC_1(struct device_node *VAR_1)
{
 while ((VAR_1->parent) && FUNC_0(VAR_1->parent) &&
       (FUNC_0(VAR_1->parent)->eeh_mode & VAR_0)) {
  VAR_1 = VAR_1->parent;
 }
 return VAR_1;
}
