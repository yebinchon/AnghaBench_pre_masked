
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {scalar_t__ size; scalar_t__ order; int inputType; scalar_t__ hasNull; } ;
typedef TYPE_1__ SQLFunctionCtx ;


 char* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(SQLFunctionCtx *VAR_1, int32_t VAR_2) {
  if (VAR_1->size == 0) {
    return;
  }

  char *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_1->hasNull && FUNC_3(VAR_3, VAR_1->inputType)) {
    return;
  }

  if (VAR_1->order == VAR_0) {
    return;
  }

  FUNC_2(VAR_1, VAR_3, VAR_2);

  FUNC_1(VAR_1, 1, 1);
}
