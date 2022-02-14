
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* Type ;
struct TYPE_7__ {int op; int size; } ;





 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static Type FUNC_0(Type VAR_3) {
 switch (VAR_3->op) {
 case 130:
  if (VAR_3->size < VAR_0->size)
   return VAR_0;
  break;
 case 128:
  if (VAR_3->size < VAR_2->size)
   return VAR_2;
  break;
 case 129:
  return VAR_1;
 }
 return VAR_3;
}
