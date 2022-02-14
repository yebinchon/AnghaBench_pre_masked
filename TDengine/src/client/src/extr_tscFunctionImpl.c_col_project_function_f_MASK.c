
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_11__ {int aOutputBuf; int inputBytes; int order; TYPE_1__* param; } ;
struct TYPE_10__ {int numOfRes; } ;
struct TYPE_9__ {int i64Key; } ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5(SQLFunctionCtx *VAR_0, int32_t VAR_1) {
  SResultInfo *VAR_2 = FUNC_2(VAR_0);


  if (VAR_0->param[0].i64Key == 1 && VAR_2->numOfRes >= 1) {
    return;
  }

  FUNC_3(VAR_0, 1);
  char *VAR_3 = FUNC_1(VAR_0, VAR_1);
  FUNC_4(VAR_0->aOutputBuf, VAR_3, VAR_0->inputBytes);

  VAR_0->aOutputBuf += VAR_0->inputBytes * FUNC_0(VAR_0->order);
}
