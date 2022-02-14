
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_10__ {scalar_t__ size; scalar_t__ order; int inputType; scalar_t__ hasNull; int blockStatus; } ;
struct TYPE_9__ {int hasResult; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_2__*,scalar_t__) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_2__*,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(SQLFunctionCtx *VAR_2) {
  if (VAR_2->size == 0) {
    return;
  }






  if (!FUNC_2(VAR_2->blockStatus) || VAR_2->order == VAR_1) {
    return;
  }

  int32_t VAR_3 = 0;


  for (int32_t VAR_4 = 0; VAR_4 < VAR_2->size; ++VAR_4) {
    char *VAR_5 = FUNC_0(VAR_2, VAR_4);
    if (VAR_2->hasNull && FUNC_5(VAR_5, VAR_2->inputType)) {
      continue;
    }

    FUNC_4(VAR_2, VAR_5, VAR_4);

    SResultInfo *VAR_6 = FUNC_1(VAR_2);
    VAR_6->hasResult = VAR_0;

    VAR_3++;
    break;
  }

  FUNC_3(VAR_2, VAR_3, 1);
}
