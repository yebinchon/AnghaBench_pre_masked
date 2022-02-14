
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int count; int capacity; TYPE_1__** values; int ** names; } ;
struct TYPE_8__ {int parent; } ;
typedef TYPE_1__ JSON_VALUE ;
typedef TYPE_2__ JSON_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 int * FUNC_4 (char*) ;

__attribute__((used)) static UINT FUNC_5(JSON_OBJECT *VAR_3, char *VAR_4, JSON_VALUE *VAR_5) {
 UINT VAR_6 = 0;
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
  return VAR_0;
 }
 if (FUNC_0(VAR_3, VAR_4) != ((void*)0)) {
  return VAR_0;
 }
 if (VAR_3->count >= VAR_3->capacity) {
  UINT VAR_7 = FUNC_2(VAR_3->capacity * 2, VAR_2);
  if (FUNC_3(VAR_3, VAR_7) == VAR_0) {
   return VAR_0;
  }
 }
 VAR_6 = VAR_3->count;
 VAR_3->names[VAR_6] = FUNC_4(VAR_4);
 if (VAR_3->names[VAR_6] == ((void*)0)) {
  return VAR_0;
 }
 VAR_5->parent = FUNC_1(VAR_3);
 VAR_3->values[VAR_6] = VAR_5;
 VAR_3->count++;
 return VAR_1;
}
