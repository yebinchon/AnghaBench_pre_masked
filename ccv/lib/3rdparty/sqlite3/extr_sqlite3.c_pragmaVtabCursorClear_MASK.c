
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* azArg; scalar_t__ pPragma; } ;
typedef TYPE_1__ PragmaVtabCursor ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(PragmaVtabCursor *VAR_0){
  int VAR_1;
  FUNC_1(VAR_0->pPragma);
  VAR_0->pPragma = 0;
  for(VAR_1=0; VAR_1<FUNC_0(VAR_0->azArg); VAR_1++){
    FUNC_2(VAR_0->azArg[VAR_1]);
    VAR_0->azArg[VAR_1] = 0;
  }
}
