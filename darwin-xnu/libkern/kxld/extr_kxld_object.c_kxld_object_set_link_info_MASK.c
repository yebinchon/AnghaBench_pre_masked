
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vmaddr_LINKEDIT; int vmaddr_LLVM_COV; int vmaddr_DATA_CONST; int vmaddr_DATA; int vmaddr_TEXT_EXEC; int vmaddr_TEXT; } ;
struct TYPE_8__ {int vmaddr_LINKEDIT; TYPE_1__ split_info; int vmaddr_LLVM_COV; int vmaddr_DATA_CONST; int vmaddr_DATA; int vmaddr_TEXT_EXEC; int vmaddr_TEXT; } ;
typedef TYPE_2__ splitKextLinkInfo ;
typedef TYPE_2__ KXLDObject ;


 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(KXLDObject *VAR_0, splitKextLinkInfo *VAR_1)
{
    FUNC_0(VAR_0);
    FUNC_0(VAR_1);

    VAR_0->split_info.vmaddr_TEXT = VAR_1->vmaddr_TEXT;
    VAR_0->split_info.vmaddr_TEXT_EXEC = VAR_1->vmaddr_TEXT_EXEC;
    VAR_0->split_info.vmaddr_DATA = VAR_1->vmaddr_DATA;
    VAR_0->split_info.vmaddr_DATA_CONST = VAR_1->vmaddr_DATA_CONST;
    VAR_0->split_info.vmaddr_LLVM_COV = VAR_1->vmaddr_LLVM_COV;
    VAR_0->split_info.vmaddr_LINKEDIT = VAR_1->vmaddr_LINKEDIT;

    return;
}
