
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {char** names; } ;
typedef TYPE_1__ JSON_OBJECT ;


 size_t FUNC_0 (TYPE_1__*) ;

char * FUNC_1(JSON_OBJECT *VAR_0, UINT VAR_1) {
 if (VAR_0 == ((void*)0) || VAR_1 >= FUNC_0(VAR_0)) {
  return ((void*)0);
 }
 return VAR_0->names[VAR_1];
}
