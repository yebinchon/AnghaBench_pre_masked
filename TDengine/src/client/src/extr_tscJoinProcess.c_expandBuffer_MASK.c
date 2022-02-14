
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__ allocSize; scalar_t__ len; char* rawBuf; } ;
typedef TYPE_1__ STSList ;


 char* FUNC_0 (char*,size_t) ;

__attribute__((used)) static void FUNC_1(STSList* VAR_0, int32_t VAR_1) {
  if (VAR_0->allocSize - VAR_0->len < VAR_1) {
    int32_t VAR_2 = VAR_1 + VAR_0->len;
    char* VAR_3 = FUNC_0(VAR_0->rawBuf, (size_t)VAR_2);
    if (VAR_3 == ((void*)0)) {

    }

    VAR_0->rawBuf = VAR_3;
    VAR_0->allocSize = VAR_2;
  }
}
