
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int initialized; int complete; int hasResult; scalar_t__ bufLen; int interResultBuf; scalar_t__ numOfRes; } ;
typedef TYPE_1__ SResultInfo ;


 int FUNC_0 (int ,int ,size_t) ;

void FUNC_1(SResultInfo *VAR_0) {
  VAR_0->initialized = 1;

  VAR_0->complete = 0;
  VAR_0->hasResult = 0;
  VAR_0->numOfRes = 0;

  FUNC_0(VAR_0->interResultBuf, 0, (size_t)VAR_0->bufLen);
}
