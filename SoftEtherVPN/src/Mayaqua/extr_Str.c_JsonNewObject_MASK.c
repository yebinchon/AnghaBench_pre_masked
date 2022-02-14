
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int object; } ;
struct TYPE_7__ {TYPE_1__ value; int type; int * parent; } ;
typedef TYPE_2__ JSON_VALUE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

JSON_VALUE * FUNC_3(void) {
 JSON_VALUE *VAR_1 = (JSON_VALUE*)FUNC_2(sizeof(JSON_VALUE));
 if (!VAR_1) {
  return ((void*)0);
 }
 VAR_1->parent = ((void*)0);
 VAR_1->type = VAR_0;
 VAR_1->value.object = FUNC_0(VAR_1);
 if (!VAR_1->value.object) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }
 return VAR_1;
}
