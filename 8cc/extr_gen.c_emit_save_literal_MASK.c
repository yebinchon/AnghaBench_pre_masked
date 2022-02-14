
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef long uint64_t ;
typedef long uint32_t ;
struct TYPE_7__ {int kind; } ;
typedef TYPE_1__ Type ;
struct TYPE_8__ {long ival; float fval; } ;
typedef TYPE_2__ Node ;
 int FUNC_0 (char*,long,int) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(Node *VAR_0, Type *VAR_1, int VAR_2) {
    switch (VAR_1->kind) {
    case 137: FUNC_0("movb $%d, %d(#rbp)", !!VAR_0->ival, VAR_2); break;
    case 136: FUNC_0("movb $%d, %d(#rbp)", VAR_0->ival, VAR_2); break;
    case 128: FUNC_0("movw $%d, %d(#rbp)", VAR_0->ival, VAR_2); break;
    case 133: FUNC_0("movl $%d, %d(#rbp)", VAR_0->ival, VAR_2); break;
    case 130:
    case 131:
    case 129: {
        FUNC_0("movl $%lu, %d(#rbp)", ((uint64_t)VAR_0->ival) & ((1L << 32) - 1), VAR_2);
        FUNC_0("movl $%lu, %d(#rbp)", ((uint64_t)VAR_0->ival) >> 32, VAR_2 + 4);
        break;
    }
    case 134: {
        float VAR_3 = VAR_0->fval;
        FUNC_0("movl $%u, %d(#rbp)", *(uint32_t *)&VAR_3, VAR_2);
        break;
    }
    case 135:
    case 132: {
        FUNC_0("movl $%lu, %d(#rbp)", *(uint64_t *)&VAR_0->fval & ((1L << 32) - 1), VAR_2);
        FUNC_0("movl $%lu, %d(#rbp)", *(uint64_t *)&VAR_0->fval >> 32, VAR_2 + 4);
        break;
    }
    default:
        FUNC_1("internal error: <%s> <%s> <%d>", FUNC_2(VAR_0), FUNC_3(VAR_1), VAR_2);
    }
}
