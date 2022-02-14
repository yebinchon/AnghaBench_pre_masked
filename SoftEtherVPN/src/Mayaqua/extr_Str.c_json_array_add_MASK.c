
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int count; int capacity; TYPE_1__** items; } ;
struct TYPE_7__ {int parent; } ;
typedef TYPE_1__ JSON_VALUE ;
typedef TYPE_2__ JSON_ARRAY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static UINT FUNC_3(JSON_ARRAY *VAR_3, JSON_VALUE *VAR_4) {
 if (VAR_3->count >= VAR_3->capacity) {
  UINT VAR_5 = FUNC_1(VAR_3->capacity * 2, VAR_2);
  if (FUNC_2(VAR_3, VAR_5) == VAR_0) {
   return VAR_0;
  }
 }
 VAR_4->parent = FUNC_0(VAR_3);
 VAR_3->items[VAR_3->count] = VAR_4;
 VAR_3->count++;
 return VAR_1;
}
