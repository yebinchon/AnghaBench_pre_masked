
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {scalar_t__ aOutputBuf; } ;
struct TYPE_9__ {scalar_t__ hasResult; scalar_t__ superTableQ; } ;
struct TYPE_8__ {scalar_t__ hasResult; } ;
typedef TYPE_1__ SSumInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(SQLFunctionCtx *VAR_1, int32_t VAR_2) {
  FUNC_1(VAR_1, VAR_2);


  SResultInfo *VAR_3 = FUNC_0(VAR_1);
  if (VAR_3->hasResult == VAR_0 && VAR_3->superTableQ) {
    SSumInfo *VAR_4 = (SSumInfo *)VAR_1->aOutputBuf;
    VAR_4->hasResult = VAR_0;
  }
}
