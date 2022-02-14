
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
struct TYPE_6__ {scalar_t__ hasResult; scalar_t__ ts; } ;
struct TYPE_5__ {scalar_t__ inputBytes; scalar_t__ aOutputBuf; scalar_t__* ptsList; } ;
typedef TYPE_1__ SQLFunctionCtx ;
typedef TYPE_2__ SFirstLastInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(SQLFunctionCtx *VAR_1, char *VAR_2, int32_t VAR_3) {
  int64_t *VAR_4 = VAR_1->ptsList;

  SFirstLastInfo *VAR_5 = (SFirstLastInfo *)(VAR_1->aOutputBuf + VAR_1->inputBytes);

  if (VAR_5->hasResult != VAR_0 || VAR_4[VAR_3] < VAR_5->ts) {
    FUNC_1(VAR_1->aOutputBuf, VAR_2, VAR_1->inputBytes);
    VAR_5->hasResult = VAR_0;
    VAR_5->ts = VAR_4[VAR_3];

    FUNC_0(VAR_1, VAR_5->ts);
  }
}
