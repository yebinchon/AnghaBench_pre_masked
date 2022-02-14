
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* next; } ;
struct TYPE_7__ {struct TYPE_7__** child; struct TYPE_7__* next; TYPE_1__ versions; } ;
typedef TYPE_2__ CheckasmFuncVersion ;
typedef TYPE_2__ CheckasmFunc ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(CheckasmFunc *VAR_0)
{
    if (VAR_0) {
        CheckasmFuncVersion *VAR_1 = VAR_0->versions.next;
        while (VAR_1) {
            CheckasmFuncVersion *VAR_2 = VAR_1->next;
            FUNC_0(VAR_1);
            VAR_1 = VAR_2;
        }

        FUNC_1(VAR_0->child[0]);
        FUNC_1(VAR_0->child[1]);
        FUNC_0(VAR_0);
    }
}
