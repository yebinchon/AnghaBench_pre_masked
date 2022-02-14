
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int count; int capacity; int ** items; } ;
typedef int JSON_VALUE ;
typedef TYPE_1__ JSON_ARRAY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int **,int) ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static UINT FUNC_3(JSON_ARRAY *VAR_2, UINT VAR_3) {
 JSON_VALUE **VAR_4 = ((void*)0);
 if (VAR_3 == 0) {
  return VAR_0;
 }
 VAR_4 = (JSON_VALUE**)FUNC_2(VAR_3 * sizeof(JSON_VALUE*));
 if (VAR_4 == ((void*)0)) {
  return VAR_0;
 }
 if (VAR_2->items != ((void*)0) && VAR_2->count > 0) {
  FUNC_0(VAR_4, VAR_2->items, VAR_2->count * sizeof(JSON_VALUE*));
 }
 FUNC_1(VAR_2->items);
 VAR_2->items = VAR_4;
 VAR_2->capacity = VAR_3;
 return VAR_1;
}
