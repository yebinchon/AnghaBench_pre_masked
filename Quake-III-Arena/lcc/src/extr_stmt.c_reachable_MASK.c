
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; struct TYPE_3__* prev; } ;
typedef TYPE_1__* Code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;

int FUNC_0(int VAR_5) {
 Code VAR_6;

 if (VAR_5 > VAR_2) {
  Code VAR_7;
  for (VAR_7 = VAR_4; VAR_7->kind < VAR_1; )
   VAR_7 = VAR_7->prev;
  if (VAR_7->kind == VAR_0 || VAR_7->kind == VAR_3)
   return 0;
 }
 return 1;
}
