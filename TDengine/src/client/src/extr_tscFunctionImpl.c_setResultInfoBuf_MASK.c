
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {int superTableQ; int * interResultBuf; scalar_t__ bufLen; } ;
typedef TYPE_1__ SResultInfo ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int,size_t) ;

void FUNC_2(SResultInfo *VAR_0, int32_t VAR_1, bool VAR_2) {
  FUNC_0(VAR_0->interResultBuf == ((void*)0));

  VAR_0->bufLen = VAR_1;
  VAR_0->superTableQ = VAR_2;

  VAR_0->interResultBuf = FUNC_1(1, (size_t)VAR_1);
}
