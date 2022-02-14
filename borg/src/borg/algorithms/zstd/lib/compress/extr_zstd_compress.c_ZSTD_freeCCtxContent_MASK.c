
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ staticSize; int * mtctx; int * cdictLocal; int * workSpace; int customMem; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(ZSTD_CCtx* VAR_0)
{
    FUNC_3(VAR_0 != ((void*)0));
    FUNC_3(VAR_0->staticSize == 0);
    FUNC_1(VAR_0->workSpace, VAR_0->customMem); VAR_0->workSpace = ((void*)0);
    FUNC_2(VAR_0->cdictLocal); VAR_0->cdictLocal = ((void*)0);



}
