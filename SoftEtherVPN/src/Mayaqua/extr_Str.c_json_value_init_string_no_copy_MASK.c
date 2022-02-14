
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* string; } ;
struct TYPE_5__ {TYPE_1__ value; int type; int * parent; } ;
typedef TYPE_2__ JSON_VALUE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static JSON_VALUE * FUNC_1(char *VAR_1) {
 JSON_VALUE *VAR_2 = (JSON_VALUE*)FUNC_0(sizeof(JSON_VALUE));
 if (!VAR_2) {
  return ((void*)0);
 }
 VAR_2->parent = ((void*)0);
 VAR_2->type = VAR_0;
 VAR_2->value.string = VAR_1;
 return VAR_2;
}
