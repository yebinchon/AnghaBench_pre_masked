
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {struct device_node* parent; } ;
struct TYPE_2__ {int eeh_mode; scalar_t__ eeh_check_count; } ;


 TYPE_1__* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*,int) ;
 int VAR_0 ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6 (struct device_node *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 FUNC_4(&VAR_0, VAR_3);

 VAR_1 = FUNC_2 (VAR_1);


 if (!FUNC_3(VAR_1) && FUNC_0(VAR_1->parent))
  VAR_1 = VAR_1->parent;

 FUNC_0(VAR_1)->eeh_mode &= ~VAR_2;
 FUNC_0(VAR_1)->eeh_check_count = 0;
 FUNC_1(VAR_1, VAR_2);
 FUNC_5(&VAR_0, VAR_3);
}
