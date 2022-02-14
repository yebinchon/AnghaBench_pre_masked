
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; int flags; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,int) ;

int FUNC_1(struct device_node *VAR_2, int VAR_3, struct resource *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_2, VAR_3);



 if (VAR_4 && VAR_5 != VAR_1) {
  VAR_4->start = VAR_4->end = VAR_5;
  VAR_4->flags = VAR_0;
 }

 return VAR_5;
}
