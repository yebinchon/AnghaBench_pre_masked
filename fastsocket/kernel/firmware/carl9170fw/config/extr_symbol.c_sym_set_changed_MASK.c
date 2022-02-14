
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {struct property* prop; int flags; } ;
struct property {TYPE_1__* menu; struct property* next; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct symbol *VAR_2)
{
 struct property *VAR_3;

 VAR_2->flags |= VAR_1;
 for (VAR_3 = VAR_2->prop; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->menu)
   VAR_3->menu->flags |= VAR_0;
 }
}
