
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_22__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_17__ ;
typedef struct TYPE_32__ TYPE_15__ ;
typedef struct TYPE_31__ TYPE_13__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef int Type ;
struct TYPE_43__ {int is_break_legal; int is_continue_legal; } ;
struct TYPE_33__ {int num_stmts; TYPE_10__** stmts; } ;
struct TYPE_42__ {size_t num_patterns; TYPE_17__ block; int is_default; TYPE_7__* patterns; } ;
struct TYPE_41__ {TYPE_12__* end; TYPE_12__* start; } ;
struct TYPE_40__ {size_t num_cases; TYPE_8__* cases; int expr; } ;
struct TYPE_39__ {TYPE_17__ block; TYPE_10__* next; int cond; TYPE_10__* init; } ;
struct TYPE_38__ {TYPE_17__ block; int cond; } ;
struct TYPE_37__ {size_t num_elseifs; TYPE_17__ else_block; TYPE_13__* elseifs; TYPE_17__ then_block; TYPE_10__* init; int cond; } ;
struct TYPE_36__ {int name; } ;
struct TYPE_35__ {int num_args; int name; TYPE_1__* args; } ;
struct TYPE_34__ {int expr; } ;
struct TYPE_32__ {int ll; } ;
struct TYPE_31__ {TYPE_17__ block; int cond; } ;
struct TYPE_30__ {int pos; } ;
struct TYPE_29__ {TYPE_15__ val; int * type; } ;
struct TYPE_28__ {int kind; int label; int pos; int expr; TYPE_6__ switch_stmt; TYPE_5__ for_stmt; TYPE_4__ while_stmt; TYPE_3__ if_stmt; TYPE_2__ init; TYPE_22__ note; TYPE_17__ block; } ;
typedef int Sym ;
typedef TYPE_7__ SwitchCasePattern ;
typedef TYPE_8__ SwitchCase ;
typedef TYPE_9__ StmtCtx ;
typedef TYPE_10__ Stmt ;
typedef TYPE_11__ Operand ;
typedef TYPE_12__ Expr ;
typedef TYPE_13__ ElseIf ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_11__*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 TYPE_11__ FUNC_9 (TYPE_12__*) ;
 TYPE_11__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 TYPE_11__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_22__) ;
 int FUNC_15 (TYPE_10__*) ;
 int FUNC_16 (TYPE_17__,int *,TYPE_9__) ;
 int FUNC_17 (TYPE_10__*) ;
 int FUNC_18 (TYPE_12__*,TYPE_15__) ;
 int VAR_2 ;
 int * FUNC_19 () ;
 int FUNC_20 (int *) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_21 (int ,char*,...) ;

bool FUNC_22(Stmt *VAR_5, Type *VAR_6, StmtCtx VAR_7) {
    switch (VAR_5->kind) {
    case 130:
        if (VAR_5->expr) {
            Operand VAR_8 = FUNC_10(VAR_5->expr, VAR_6);
            if (!FUNC_1(&VAR_8, VAR_6)) {
                FUNC_3(VAR_5->pos, "Invalid type in return expression. Expected %s, got %s", FUNC_4(VAR_6), FUNC_4(VAR_8.type));
            }
        } else if (VAR_6 != VAR_4) {
            FUNC_3(VAR_5->pos, "Empty return expression for function with non-void return type");
        }
        return 1;
    case 140:
        if (!VAR_7.is_break_legal) {
            FUNC_3(VAR_5->pos, "Illegal break");
        }
        return 0;
    case 139:
        if (!VAR_7.is_continue_legal) {
            FUNC_3(VAR_5->pos, "Illegal continue");
        }
        return 0;
    case 141:
        return FUNC_16(VAR_5->block, VAR_6, VAR_7);
    case 131:
        if (VAR_5->note.name == VAR_0) {
            if (VAR_5->note.num_args != 1) {
                FUNC_3(VAR_5->pos, "#assert takes 1 argument");
            }
            FUNC_8(VAR_5->note.args[0].expr);
        } else if (VAR_5->note.name == VAR_2) {
            FUNC_14(VAR_5->note);
        } else if (VAR_5->note.name == VAR_1) {

        } else {
            FUNC_21(VAR_5->pos, "Unknown statement #directive '%s'", VAR_5->note.name);
        }
        return 0;
    case 134: {
        Sym *VAR_9 = FUNC_19();
        if (VAR_5->if_stmt.init) {
            FUNC_17(VAR_5->if_stmt.init);
        }
        if (VAR_5->if_stmt.cond) {
            FUNC_8(VAR_5->if_stmt.cond);
        } else if (!FUNC_5(FUNC_13(VAR_5->pos, VAR_5->if_stmt.init->init.name))) {
            FUNC_3(VAR_5->pos, "Conditional expression must have scalar type");
        }
        bool VAR_10 = FUNC_16(VAR_5->if_stmt.then_block, VAR_6, VAR_7);
        for (size_t VAR_11 = 0; VAR_11 < VAR_5->if_stmt.num_elseifs; VAR_11++) {
            ElseIf VAR_12 = VAR_5->if_stmt.elseifs[VAR_11];
            FUNC_8(VAR_12.cond);
            VAR_10 = FUNC_16(VAR_12.block, VAR_6, VAR_7) && VAR_10;
        }
        if (VAR_5->if_stmt.else_block.stmts) {
            VAR_10 = FUNC_16(VAR_5->if_stmt.else_block, VAR_6, VAR_7) && VAR_10;
        } else {
            VAR_10 = 0;
        }
        FUNC_20(VAR_9);
        return VAR_10;
    }
    case 128:
    case 138:
        FUNC_8(VAR_5->while_stmt.cond);
        VAR_7.is_break_legal = 1;
        VAR_7.is_continue_legal = 1;
        FUNC_16(VAR_5->while_stmt.block, VAR_6, VAR_7);
        return 0;
    case 136: {
        Sym *VAR_13 = FUNC_19();
        if (VAR_5->for_stmt.init) {
            FUNC_22(VAR_5->for_stmt.init, VAR_6, VAR_7);
        }
        if (VAR_5->for_stmt.cond) {
            FUNC_8(VAR_5->for_stmt.cond);
        }
        if (VAR_5->for_stmt.next) {
            FUNC_22(VAR_5->for_stmt.next, VAR_6, VAR_7);
        }
        VAR_7.is_break_legal = 1;
        VAR_7.is_continue_legal = 1;
        FUNC_16(VAR_5->for_stmt.block, VAR_6, VAR_7);
        FUNC_20(VAR_13);
        return 0;
    }
    case 129: {
        Operand VAR_14 = FUNC_12(VAR_5->switch_stmt.expr);
        if (!FUNC_6(VAR_14.type)) {
            FUNC_3(VAR_5->pos, "Switch expression must have integer type");
        }
        VAR_7.is_break_legal = 1;
        bool VAR_15 = 1;
        bool VAR_16 = 0;
        for (size_t VAR_17 = 0; VAR_17 < VAR_5->switch_stmt.num_cases; VAR_17++) {
            SwitchCase VAR_18 = VAR_5->switch_stmt.cases[VAR_17];
            for (size_t VAR_19 = 0; VAR_19 < VAR_18.num_patterns; VAR_19++) {
                SwitchCasePattern VAR_20 = VAR_18.patterns[VAR_19];
                Expr *VAR_21 = VAR_20.start;
                Operand VAR_22 = FUNC_9(VAR_21);
                if (!FUNC_1(&VAR_22, VAR_14.type)) {
                    FUNC_3(VAR_21->pos, "Invalid type in switch case expression. Expected %s, got %s", FUNC_4(VAR_14.type), FUNC_4(VAR_22.type));
                }
                Expr *VAR_23 = VAR_20.end;
                if (VAR_23) {
                    Operand VAR_24 = FUNC_9(VAR_23);
                    if (!FUNC_1(&VAR_24, VAR_14.type)) {
                        FUNC_3(VAR_23->pos, "Invalid type in switch case expression. Expected %s, got %s", FUNC_4(VAR_14.type), FUNC_4(VAR_24.type));
                    }
                    FUNC_1(&VAR_22, VAR_3);
                    FUNC_18(VAR_21, VAR_22.val);
                    FUNC_1(&VAR_24, VAR_3);
                    FUNC_18(VAR_23, VAR_24.val);
                    if (VAR_24.val.ll < VAR_22.val.ll) {
                        FUNC_3(VAR_21->pos, "Case range end value cannot be less thn start value");
                    }
                    if (VAR_24.val.ll - VAR_22.val.ll >= 256) {
                        FUNC_3(VAR_21->pos, "Case range cannot span more than 256 values");
                    }
                }
            }
            if (VAR_18.is_default) {
                if (VAR_16) {
                    FUNC_3(VAR_5->pos, "Switch statement has multiple default clauses");
                }
                VAR_16 = 1;
            }
            if (VAR_18.block.num_stmts > 1) {
                Stmt *VAR_25 = VAR_18.block.stmts[VAR_18.block.num_stmts - 1];
                if (VAR_25->kind == 140) {
                    FUNC_21(VAR_25->pos, "Case blocks already end with an implicit break");
                }
            }
            VAR_15 = FUNC_16(VAR_18.block, VAR_6, VAR_7) && VAR_15;
        }
        return VAR_15 && VAR_16;
    }
    case 142:
        FUNC_15(VAR_5);
        return 0;
    case 133:
        FUNC_17(VAR_5);
        return 0;
    case 137:
        FUNC_11(VAR_5->expr);
        return 0;
    case 132:
        FUNC_2(VAR_5->pos, VAR_5->label);
        return 0;
    case 135:
        FUNC_7(VAR_5->pos, VAR_5->label);
        return 0;
    default:
        FUNC_0(0);
        return 0;
    }
}
