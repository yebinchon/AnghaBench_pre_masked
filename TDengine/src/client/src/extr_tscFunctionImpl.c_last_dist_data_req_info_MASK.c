
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {scalar_t__ hasResult; scalar_t__ ts; } ;
struct TYPE_4__ {scalar_t__ order; int inputBytes; TYPE_2__* aOutputBuf; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SQLFunctionCtx ;
typedef TYPE_2__ SFirstLastInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int32_t FUNC_0(SQLFunctionCtx *VAR_4, TSKEY VAR_5, TSKEY VAR_6, int32_t VAR_7,
                                       int32_t VAR_8) {
  if (VAR_4->order == VAR_3) {
    return VAR_1;
  }

  SFirstLastInfo *VAR_9 = (VAR_4->aOutputBuf + VAR_4->inputBytes);
  if (VAR_9->hasResult != VAR_2) {
    return VAR_0;
  } else {
    return (VAR_9->ts > VAR_6) ? VAR_1 : VAR_0;
  }
}
