
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* Type ;
struct TYPE_9__ {int size; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_6__ {int op; int size; struct TYPE_6__* type; } ;
 int FUNC_0 (int ) ;
 TYPE_5__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 int const FUNC_1 (int ) ;
 TYPE_2__* VAR_2 ;

int FUNC_2(Type VAR_3) {
 switch (VAR_3->op) {
 case 138: case 128: case 138 +128:
  return FUNC_2(VAR_3->type);
 case 129: case 134: case 130: case 136:
  return VAR_3->op + FUNC_1(VAR_3->size);
 case 133:
  return 133 + FUNC_1(VAR_2->size);
 case 135:
  return 133 + FUNC_1(VAR_0->size);
 case 139: case 132: case 131:
  return 132;
 case 137:
  return 134 + FUNC_1(VAR_1->size);
 }
 FUNC_0(0); return 134;
}
