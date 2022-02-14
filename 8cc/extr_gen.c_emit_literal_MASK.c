
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
typedef void* uint32_t ;
struct TYPE_5__ {float fval; void* slabel; TYPE_1__* ty; int sval; void* flabel; void* ival; } ;
struct TYPE_4__ {int kind; int size; } ;
typedef TYPE_2__ Node ;
 int VAR_0 ;
 int FUNC_0 (char*,void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 () ;
 void* FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(Node *VAR_1) {
    VAR_0;
    switch (VAR_1->ty->kind) {
    case 136:
    case 135:
    case 128:
        FUNC_0("mov $%u, #rax", VAR_1->ival);
        break;
    case 132:
        FUNC_0("mov $%u, #rax", VAR_1->ival);
        break;
    case 129:
    case 130: {
        FUNC_0("mov $%lu, #rax", VAR_1->ival);
        break;
    }
    case 133: {
        if (!VAR_1->flabel) {
            VAR_1->flabel = FUNC_4();
            float VAR_2 = VAR_1->fval;
            FUNC_2(".data");
            FUNC_1(VAR_1->flabel);
            FUNC_0(".long %d", *(uint32_t *)&VAR_2);
            FUNC_2(".text");
        }
        FUNC_0("movss %s(#rip), #xmm0", VAR_1->flabel);
        break;
    }
    case 134:
    case 131: {
        if (!VAR_1->flabel) {
            VAR_1->flabel = FUNC_4();
            FUNC_2(".data");
            FUNC_1(VAR_1->flabel);
            FUNC_0(".quad %lu", *(uint64_t *)&VAR_1->fval);
            FUNC_2(".text");
        }
        FUNC_0("movsd %s(#rip), #xmm0", VAR_1->flabel);
        break;
    }
    case 137: {
        if (!VAR_1->slabel) {
            VAR_1->slabel = FUNC_4();
            FUNC_2(".data");
            FUNC_1(VAR_1->slabel);
            FUNC_0(".string \"%s\"", FUNC_5(VAR_1->sval, VAR_1->ty->size - 1));
            FUNC_2(".text");
        }
        FUNC_0("lea %s(#rip), #rax", VAR_1->slabel);
        break;
    }
    default:
        FUNC_3("internal error");
    }
}
