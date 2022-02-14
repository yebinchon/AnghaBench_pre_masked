
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** names; scalar_t__ count; scalar_t__ capacity; int ** values; int * wrapping_value; } ;
typedef int JSON_VALUE ;
typedef TYPE_1__ JSON_OBJECT ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static JSON_OBJECT * FUNC_1(JSON_VALUE *VAR_0) {
 JSON_OBJECT *VAR_1 = (JSON_OBJECT*)FUNC_0(sizeof(JSON_OBJECT));
 if (VAR_1 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_1->wrapping_value = VAR_0;
 VAR_1->names = (char**)((void*)0);
 VAR_1->values = (JSON_VALUE**)((void*)0);
 VAR_1->capacity = 0;
 VAR_1->count = 0;
 return VAR_1;
}
