
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_driver {struct console* cons; } ;
struct device_node {int dummy; } ;
struct console {int index; int name; } ;


 int FUNC_0 (int ,int,int *) ;
 struct device_node* VAR_0 ;
 char* VAR_1 ;

int FUNC_1(struct console *VAR_2, struct device_node *VAR_3,
       struct uart_driver *VAR_4, int VAR_5, bool VAR_6)
{
 if (!VAR_2 || VAR_0 != VAR_3)
  return 0;

 if (!VAR_6) {
  int VAR_7 = 0;

  if (VAR_1 &&
      *VAR_1 == 'b')
   VAR_7 = 1;

  if ((VAR_5 & 1) != VAR_7)
   return 0;
 }

 VAR_2->index = VAR_5;
 VAR_4->cons = VAR_2;
 FUNC_0(VAR_2->name, VAR_5, ((void*)0));

 return 1;
}
