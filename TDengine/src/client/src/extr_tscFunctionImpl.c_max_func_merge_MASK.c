
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_5__ {int inputBytes; char* aOutputBuf; } ;
typedef TYPE_1__ SQLFunctionCtx ;


 char VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,char*,int ) ;

__attribute__((used)) static void FUNC_2(SQLFunctionCtx *VAR_1) {
  int32_t VAR_2 = FUNC_1(VAR_1, VAR_1->inputBytes, VAR_1->aOutputBuf, 0);

  FUNC_0(VAR_1, VAR_2, 1);
  if (VAR_2 > 0) {
    char *VAR_3 = VAR_1->aOutputBuf + VAR_1->inputBytes;
    *VAR_3 = VAR_0;
  }
}
