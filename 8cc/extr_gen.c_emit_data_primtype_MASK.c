
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_10__ {int kind; TYPE_9__* ptr; } ;
typedef TYPE_1__ Type ;
struct TYPE_12__ {int const kind; int size; } ;
struct TYPE_11__ {float fval; int glabel; int kind; struct TYPE_11__* operand; TYPE_1__* ty; int sval; int newlabel; } ;
typedef TYPE_2__ Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__**) ;
 char* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(Type *VAR_5, Node *VAR_6, int VAR_7) {
    switch (VAR_5->kind) {
    case 133: {
        float VAR_8 = VAR_6->fval;
        FUNC_1(".long %d", *(uint32_t *)&VAR_8);
        break;
    }
    case 134:
        FUNC_1(".quad %ld", *(uint64_t *)&VAR_6->fval);
        break;
    case 136:
        FUNC_1(".byte %d", !!FUNC_4(VAR_6, ((void*)0)));
        break;
    case 135:
        FUNC_1(".byte %d", FUNC_4(VAR_6, ((void*)0)));
        break;
    case 128:
        FUNC_1(".short %d", FUNC_4(VAR_6, ((void*)0)));
        break;
    case 132:
        FUNC_1(".long %d", FUNC_4(VAR_6, ((void*)0)));
        break;
    case 130:
    case 131:
    case 129:
        if (VAR_6->kind == VAR_4) {
            FUNC_1(".quad %s", VAR_6->newlabel);
            break;
        }
        bool VAR_9 = (VAR_6->operand->ty->kind == VAR_3 && VAR_6->operand->ty->ptr->kind == 135);
        if (VAR_9) {
            FUNC_2(VAR_6->operand->sval, VAR_7);
        } else if (VAR_6->kind == VAR_2) {
            FUNC_1(".quad %s", VAR_6->glabel);
        } else {
            Node *VAR_10 = ((void*)0);
            int VAR_11 = FUNC_4(VAR_6, &VAR_10);
            if (VAR_10 == ((void*)0)) {
                FUNC_1(".quad %u", VAR_11);
                break;
            }
            Type *VAR_12 = VAR_10->ty;
            if (VAR_10->kind == VAR_1 || VAR_10->kind == VAR_0)
                VAR_10 = VAR_10->operand;
            if (VAR_10->kind != VAR_2)
                FUNC_3("global variable expected, but got %s", FUNC_5(VAR_10));
            FUNC_0(VAR_12->ptr);
            FUNC_1(".quad %s+%u", VAR_10->glabel, VAR_11 * VAR_12->ptr->size);
        }
        break;
    default:
        FUNC_3("don't know how to handle\n  <%s>\n  <%s>", FUNC_6(VAR_5), FUNC_5(VAR_6));
    }
}
