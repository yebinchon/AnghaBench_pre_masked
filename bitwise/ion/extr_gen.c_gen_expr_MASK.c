
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_61__ TYPE_9__ ;
typedef struct TYPE_60__ TYPE_8__ ;
typedef struct TYPE_59__ TYPE_7__ ;
typedef struct TYPE_58__ TYPE_6__ ;
typedef struct TYPE_57__ TYPE_5__ ;
typedef struct TYPE_56__ TYPE_4__ ;
typedef struct TYPE_55__ TYPE_3__ ;
typedef struct TYPE_54__ TYPE_2__ ;
typedef struct TYPE_53__ TYPE_29__ ;
typedef struct TYPE_52__ TYPE_1__ ;
typedef struct TYPE_51__ TYPE_18__ ;
typedef struct TYPE_50__ TYPE_17__ ;
typedef struct TYPE_49__ TYPE_16__ ;
typedef struct TYPE_48__ TYPE_15__ ;
typedef struct TYPE_47__ TYPE_14__ ;
typedef struct TYPE_46__ TYPE_13__ ;
typedef struct TYPE_45__ TYPE_12__ ;
typedef struct TYPE_44__ TYPE_11__ ;
typedef struct TYPE_43__ TYPE_10__ ;


struct TYPE_44__ {TYPE_10__* fields; } ;
struct TYPE_49__ {int typeid; int kind; TYPE_11__ aggregate; } ;
typedef TYPE_16__ Type ;
struct TYPE_61__ {size_t num_args; TYPE_18__** args; TYPE_18__* expr; } ;
struct TYPE_60__ {TYPE_18__* expr; int type; } ;
struct TYPE_59__ {int mod; int val; } ;
struct TYPE_58__ {size_t end; size_t start; int suffix; } ;
struct TYPE_57__ {size_t suffix; scalar_t__ val; int mod; } ;
struct TYPE_56__ {TYPE_18__* expr; } ;
struct TYPE_55__ {int op; int post; int expr; } ;
struct TYPE_54__ {int name; int type; } ;
struct TYPE_53__ {long long ll; } ;
struct TYPE_52__ {TYPE_18__* else_expr; TYPE_18__* then_expr; TYPE_18__* cond; } ;
struct TYPE_48__ {TYPE_18__* right; int op; TYPE_18__* left; } ;
struct TYPE_47__ {TYPE_18__* expr; int op; } ;
struct TYPE_46__ {char* name; TYPE_18__* expr; } ;
struct TYPE_45__ {TYPE_18__* index; TYPE_18__* expr; } ;
struct TYPE_51__ {int kind; TYPE_3__ modify; TYPE_2__ offsetof_field; struct TYPE_51__* typeof_type; struct TYPE_51__* typeof_expr; int alignof_type; struct TYPE_51__* alignof_expr; int sizeof_type; struct TYPE_51__* sizeof_expr; TYPE_1__ ternary; TYPE_15__ binary; TYPE_14__ unary; TYPE_13__ field; TYPE_12__ index; TYPE_9__ call; TYPE_8__ cast; int name; TYPE_7__ str_lit; TYPE_6__ float_lit; TYPE_5__ int_lit; TYPE_4__ paren; } ;
struct TYPE_50__ {int kind; } ;
struct TYPE_43__ {int name; } ;
typedef TYPE_17__ Sym ;
typedef TYPE_18__ Expr ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char) ;
 int FUNC_2 (TYPE_18__*) ;
 int FUNC_3 (TYPE_18__*) ;
 int FUNC_4 (TYPE_17__*,TYPE_18__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_16__*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (TYPE_17__*) ;
 int FUNC_10 (TYPE_18__*,int ) ;
 TYPE_17__* FUNC_11 (TYPE_18__*) ;
 TYPE_16__* FUNC_12 (TYPE_18__*) ;
 TYPE_29__ FUNC_13 (TYPE_18__*) ;
 int FUNC_14 (TYPE_16__*) ;
 int FUNC_15 (TYPE_18__*) ;
 int FUNC_16 (TYPE_17__*) ;
 TYPE_16__* FUNC_17 (TYPE_18__*) ;
 int FUNC_18 (int ) ;
 char** VAR_4 ;
 TYPE_16__* FUNC_19 (TYPE_18__*) ;
 int FUNC_20 (TYPE_16__*,char*) ;
 int FUNC_21 (int ,char*) ;
 TYPE_16__* FUNC_22 (TYPE_16__*) ;

void FUNC_23(Expr *VAR_5) {
    Type *VAR_6 = ((void*)0);
    Type *VAR_7 = FUNC_19(VAR_5);
    if (VAR_7) {
        FUNC_8("(%s)(", FUNC_20(VAR_7, ""));
    }
    bool VAR_8 = FUNC_15(VAR_5);
    if (VAR_8) {
        VAR_6 = FUNC_12(VAR_5);
        FUNC_8("(any){(%s[]){", FUNC_20(VAR_6, ""));
    }
    switch (VAR_5->kind) {
    case 139:
        FUNC_8("(");
        FUNC_23(VAR_5->paren.expr);
        FUNC_8(")");
        break;
    case 144: {
        const char *VAR_9 = VAR_4[VAR_5->int_lit.suffix];
        switch (VAR_5->int_lit.mod) {
        case 131:
        case 129:
            FUNC_8("0x%llx%s", VAR_5->int_lit.val, VAR_9);
            break;
        case 128:
            FUNC_8("0%llo%s", VAR_5->int_lit.val, VAR_9);
            break;
        case 130:
            FUNC_1((char)VAR_5->int_lit.val);
            break;
        default:
            FUNC_8("%llu%s", VAR_5->int_lit.val, VAR_9);
            break;
        }
        break;
    }
    case 146: {
        bool VAR_10 = VAR_5->float_lit.suffix == VAR_1;
        size_t VAR_11 = VAR_5->float_lit.end - VAR_5->float_lit.start;
        FUNC_8("%.*s%s", VAR_10 ? VAR_11-1 : VAR_11, VAR_5->float_lit.start, VAR_10 ? "" : "f");
        break;
    }
    case 136:
        FUNC_6(VAR_5->str_lit.val, VAR_5->str_lit.mod == VAR_0);
        break;
    case 142:
        FUNC_8("%s", FUNC_10(VAR_5, VAR_5->name));
        break;
    case 149:
        FUNC_8("(%s)(", FUNC_21(VAR_5->cast.type, ""));
        FUNC_23(VAR_5->cast.expr);
        FUNC_8(")");
        break;
    case 150: {
        Sym *VAR_12 = FUNC_11(VAR_5->call.expr);
        if (FUNC_16(VAR_12)) {
            FUNC_4(VAR_12, VAR_5);
        } else {
            if (VAR_12 && VAR_12->kind == VAR_2) {
                FUNC_8("(%s)", FUNC_9(VAR_12));
            } else {
                FUNC_23(VAR_5->call.expr);
            }
            FUNC_8("(");
            for (size_t VAR_13 = 0; VAR_13 < VAR_5->call.num_args; VAR_13++) {
                if (VAR_13 != 0) {
                    FUNC_8(", ");
                }
                FUNC_23(VAR_5->call.args[VAR_13]);
            }
            FUNC_8(")");
        }
        break;
    }
    case 145: {
        Type *VAR_14 = FUNC_22(FUNC_12(VAR_5->index.expr));
        if (FUNC_14(VAR_14)) {
            FUNC_23(VAR_5->index.expr);
            FUNC_8(".");
            long long VAR_15 = FUNC_13(VAR_5->index.index).ll;
            FUNC_8("%s", VAR_14->aggregate.fields[VAR_15].name);
        } else {
            FUNC_23(VAR_5->index.expr);
            FUNC_8("[");
            FUNC_23(VAR_5->index.index);
            FUNC_8("]");
        }
        break;
    }
    case 147: {
        Sym *VAR_16 = FUNC_11(VAR_5);
        if (VAR_16) {
            FUNC_8("(%s)", FUNC_9(VAR_16));
        } else {
            FUNC_23(VAR_5->field.expr);
            Type *VAR_17 = FUNC_22(FUNC_12(VAR_5->field.expr));
            const char *VAR_18 = VAR_5->field.name;
            FUNC_8("%s%s", VAR_17->kind == VAR_3 ? "->" : ".", VAR_18);
        }
        break;
    }
    case 148:
        FUNC_2(VAR_5);
        break;
    case 132:
        FUNC_8("%s(", FUNC_18(VAR_5->unary.op));
        FUNC_23(VAR_5->unary.expr);
        FUNC_8(")");
        break;
    case 151: {
        FUNC_8("(");
        Type *VAR_19 = FUNC_17(VAR_5->binary.left);
        if (VAR_19) {
            FUNC_8("(%s)", FUNC_20(VAR_19, ""));
        }
        FUNC_23(VAR_5->binary.left);
        FUNC_8(") %s (", FUNC_18(VAR_5->binary.op));
        Type *VAR_20 = FUNC_17(VAR_5->binary.right);
        if (VAR_20) {
            FUNC_8("(%s)", FUNC_20(VAR_20, ""));
        }
        FUNC_23(VAR_5->binary.right);
        FUNC_8(")");
        break;
    }
    case 135:
        FUNC_8("(");
        FUNC_23(VAR_5->ternary.cond);
        FUNC_8(" ? ");
        FUNC_23(VAR_5->ternary.then_expr);
        FUNC_8(" : ");
        FUNC_23(VAR_5->ternary.else_expr);
        FUNC_8(")");
        break;
    case 138:
        FUNC_8("sizeof(");
        FUNC_23(VAR_5->sizeof_expr);
        FUNC_8(")");
        break;
    case 137:
        FUNC_8("sizeof(%s)", FUNC_21(VAR_5->sizeof_type, ""));
        break;
    case 153:
        FUNC_8("alignof(%s)", FUNC_20(FUNC_12(VAR_5->alignof_expr), ""));
        break;
    case 152:
        FUNC_8("alignof(%s)", FUNC_21(VAR_5->alignof_type, ""));
        break;
    case 134: {
        Type *VAR_21 = FUNC_12(VAR_5->typeof_expr);
        FUNC_0(VAR_21->typeid);
        FUNC_7(VAR_21);
        break;
    }
    case 133: {
        Type *VAR_22 = FUNC_12(VAR_5->typeof_type);
        FUNC_0(VAR_22->typeid);
        FUNC_7(VAR_22);
        break;
    }
    case 140:
        FUNC_8("offsetof(%s, %s)", FUNC_21(VAR_5->offsetof_field.type, ""), VAR_5->offsetof_field.name);
        break;
    case 143:
        if (!VAR_5->modify.post) {
            FUNC_8("%s", FUNC_18(VAR_5->modify.op));
        }
        FUNC_5(VAR_5->modify.expr);
        if (VAR_5->modify.post) {
            FUNC_8("%s", FUNC_18(VAR_5->modify.op));
        }
        break;
    case 141:
        FUNC_3(VAR_5);
        break;
    default:
        FUNC_0(0);
    }
    if (VAR_8) {
        FUNC_8("}, ");
        FUNC_7(VAR_6);
        FUNC_8("}");
    }
    if (VAR_7) {
        FUNC_8(")");
    }
}
