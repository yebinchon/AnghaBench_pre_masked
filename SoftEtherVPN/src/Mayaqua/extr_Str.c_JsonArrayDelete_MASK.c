
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int items; int count; } ;
typedef int JSON_VALUE ;
typedef TYPE_1__ JSON_ARRAY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int,int) ;

UINT FUNC_4(JSON_ARRAY *VAR_2, UINT VAR_3) {
 UINT VAR_4 = 0;
 if (VAR_2 == ((void*)0) || VAR_3 >= FUNC_1(VAR_2)) {
  return VAR_0;
 }
 FUNC_2(FUNC_0(VAR_2, VAR_3));
 VAR_4 = (FUNC_1(VAR_2) - 1 - VAR_3) * sizeof(JSON_VALUE*);
 FUNC_3(VAR_2->items + VAR_3, VAR_2->items + VAR_3 + 1, VAR_4);
 VAR_2->count -= 1;
 return VAR_1;
}
