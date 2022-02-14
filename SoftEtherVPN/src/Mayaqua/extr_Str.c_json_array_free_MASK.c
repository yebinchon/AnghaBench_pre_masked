
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t count; struct TYPE_5__* items; } ;
typedef TYPE_1__ JSON_ARRAY ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(JSON_ARRAY *VAR_0) {
 UINT VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++) {
  FUNC_0(VAR_0->items[VAR_1]);
 }
 FUNC_1(VAR_0->items);
 FUNC_1(VAR_0);
}
