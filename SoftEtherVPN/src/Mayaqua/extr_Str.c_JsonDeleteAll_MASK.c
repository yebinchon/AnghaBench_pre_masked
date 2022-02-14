
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {scalar_t__ count; int * values; int * names; } ;
typedef TYPE_1__ JSON_OBJECT ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

UINT FUNC_3(JSON_OBJECT *VAR_2) {
 UINT VAR_3 = 0;
 if (VAR_2 == ((void*)0)) {
  return VAR_0;
 }
 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_2); VAR_3++) {
  FUNC_2(VAR_2->names[VAR_3]);
  FUNC_0(VAR_2->values[VAR_3]);
 }
 VAR_2->count = 0;
 return VAR_1;
}
