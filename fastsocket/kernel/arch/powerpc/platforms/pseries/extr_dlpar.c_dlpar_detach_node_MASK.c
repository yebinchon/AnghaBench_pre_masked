
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct property {struct property* next; int name; } ;
struct device_node {TYPE_1__* pde; struct property* properties; struct device_node* parent; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_1__*) ;

int FUNC_4(struct device_node *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->parent;
 struct property *VAR_4 = VAR_2->properties;
 FUNC_0(&VAR_1,
       VAR_0, VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 return 0;
}
