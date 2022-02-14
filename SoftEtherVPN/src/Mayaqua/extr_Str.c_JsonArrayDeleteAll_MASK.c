
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ count; } ;
typedef TYPE_1__ JSON_ARRAY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

UINT FUNC_3(JSON_ARRAY *VAR_2) {
 UINT VAR_3 = 0;
 if (VAR_2 == ((void*)0)) {
  return VAR_0;
 }
 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_2); VAR_3++) {
  FUNC_2(FUNC_0(VAR_2, VAR_3));
 }
 VAR_2->count = 0;
 return VAR_1;
}
