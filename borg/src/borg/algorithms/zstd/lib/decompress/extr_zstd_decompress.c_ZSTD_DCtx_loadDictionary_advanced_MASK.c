
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_dictLoadMethod_e ;
typedef int ZSTD_dictContentType_e ;
struct TYPE_3__ {scalar_t__ streamStage; int * ddictLocal; int * ddict; int customMem; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 size_t FUNC_0 (int ) ;
 int * FUNC_1 (void const*,size_t,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

size_t FUNC_3(ZSTD_DCtx* VAR_3,
                                   const void* VAR_4, size_t VAR_5,
                                         ZSTD_dictLoadMethod_e VAR_6,
                                         ZSTD_dictContentType_e VAR_7)
{
    if (VAR_3->streamStage != VAR_2) return FUNC_0(VAR_1);
    FUNC_2(VAR_3->ddictLocal);
    if (VAR_4 && VAR_5 >= 8) {
        VAR_3->ddictLocal = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_3->customMem);
        if (VAR_3->ddictLocal == ((void*)0)) return FUNC_0(VAR_0);
    } else {
        VAR_3->ddictLocal = ((void*)0);
    }
    VAR_3->ddict = VAR_3->ddictLocal;
    return 0;
}
