
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__ order; char* aOutputBuf; int inputBytes; int outputBytes; } ;
typedef TYPE_1__ SQLFunctionCtx ;


 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_4(SQLFunctionCtx *VAR_1) {
  FUNC_2(VAR_1, VAR_1->size);

  char *VAR_2 = 0;
  if (VAR_1->order == VAR_0) {
    VAR_2 = VAR_1->aOutputBuf;
  } else {
    VAR_2 = VAR_1->aOutputBuf - (VAR_1->size - 1) * VAR_1->inputBytes;
  }

  char *VAR_3 = FUNC_1(VAR_1);
  FUNC_3(VAR_2, VAR_3, (size_t)VAR_1->size * VAR_1->inputBytes);

  VAR_1->aOutputBuf += VAR_1->size * VAR_1->outputBytes * FUNC_0(VAR_1->order);
}
