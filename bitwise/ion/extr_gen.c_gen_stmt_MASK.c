
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_21__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_39__ {long long ll; } ;
typedef TYPE_8__ Val ;
struct TYPE_40__ {TYPE_14__* start; TYPE_14__* end; } ;
struct TYPE_32__ {int stmts; } ;
struct TYPE_38__ {TYPE_21__ block; TYPE_12__* next; TYPE_14__* cond; TYPE_12__* init; } ;
struct TYPE_37__ {TYPE_14__* cond; TYPE_21__ block; } ;
struct TYPE_36__ {size_t num_elseifs; TYPE_12__* init; TYPE_21__ else_block; TYPE_15__* elseifs; TYPE_21__ then_block; TYPE_14__* cond; } ;
struct TYPE_35__ {int name; } ;
struct TYPE_34__ {char* name; int pos; TYPE_14__* expr; } ;
struct TYPE_33__ {char* val; } ;
struct TYPE_31__ {size_t num_cases; TYPE_10__* cases; TYPE_14__* expr; } ;
struct TYPE_30__ {TYPE_21__ block; TYPE_14__* cond; } ;
struct TYPE_29__ {TYPE_2__ str_lit; int pos; int kind; } ;
struct TYPE_28__ {int num_args; int pos; TYPE_3__* args; int name; } ;
struct TYPE_27__ {int kind; int label; TYPE_1__ switch_stmt; TYPE_7__ for_stmt; TYPE_6__ while_stmt; TYPE_5__ if_stmt; TYPE_4__ init; int pos; TYPE_13__ note; TYPE_21__ block; TYPE_14__* expr; } ;
struct TYPE_26__ {size_t num_stmts; TYPE_12__** stmts; } ;
struct TYPE_25__ {size_t num_patterns; TYPE_11__ block; int is_default; TYPE_9__* patterns; } ;
typedef TYPE_9__ SwitchCasePattern ;
typedef TYPE_10__ SwitchCase ;
typedef TYPE_11__ StmtList ;
typedef TYPE_12__ Stmt ;
typedef TYPE_13__ Note ;
typedef TYPE_14__ Expr ;
typedef TYPE_15__ ElseIf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_14__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_12__*) ;
 int FUNC_7 (TYPE_21__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,...) ;
 TYPE_8__ FUNC_12 (TYPE_14__*) ;
 TYPE_13__* FUNC_13 (TYPE_12__*,int ) ;
 int FUNC_14 (TYPE_14__*) ;
 char* FUNC_15 (char*) ;

void FUNC_16(Stmt *VAR_7) {
    FUNC_8(VAR_7->pos);
    switch (VAR_7->kind) {
    case 130:
        FUNC_11("return");
        if (VAR_7->expr) {
            FUNC_9(" ");
            FUNC_5(VAR_7->expr);
        }
        FUNC_9(";");
        break;
    case 138:
        FUNC_11("break;");
        break;
    case 137:
        FUNC_11("continue;");
        break;
    case 139:
        FUNC_10();
        FUNC_7(VAR_7->block);
        break;
    case 131: {
        Note VAR_8 = VAR_7->note;
        if (VAR_8.name == VAR_1) {
            FUNC_11("assert(");
            FUNC_0(VAR_8.num_args == 1);
            FUNC_5(VAR_8.args[0].expr);
            FUNC_9(");");
        } else if (VAR_8.name == VAR_3) {
            const char *VAR_9 = FUNC_15("preamble");
            const char *VAR_10 = FUNC_15("postamble");
            for (size_t VAR_11 = 0; VAR_11 < VAR_8.num_args; VAR_11++) {
                const char *VAR_12 = VAR_8.args[VAR_11].name;
                Expr *VAR_13 = VAR_8.args[VAR_11].expr;
                if (VAR_13->kind != VAR_0) {
                    FUNC_2(VAR_13->pos, "#foreign argument must be a string");
                }
                const char *VAR_14 = VAR_13->str_lit.val;
                if (VAR_12 == VAR_9) {
                    FUNC_3(&VAR_6, VAR_8.args[VAR_11].pos);
                    FUNC_1(VAR_6, "%s\n", VAR_14);
                } else if (VAR_12 == VAR_10) {
                    FUNC_3(&VAR_5, VAR_8.args[VAR_11].pos);
                    FUNC_1(VAR_5, "%s\n", VAR_14);
                }
            }
        }
        break;
    }
    case 133:
        if (VAR_7->if_stmt.init) {
            FUNC_11("{");
            VAR_4++;
            FUNC_16(VAR_7->if_stmt.init);
        }
        FUNC_8(VAR_7->pos);
        FUNC_11("if (");
        if (VAR_7->if_stmt.cond) {
            FUNC_5(VAR_7->if_stmt.cond);
        } else {
            FUNC_9("%s", VAR_7->if_stmt.init->init.name);
        }
        FUNC_9(") ");
        FUNC_7(VAR_7->if_stmt.then_block);
        for (size_t VAR_15 = 0; VAR_15 < VAR_7->if_stmt.num_elseifs; VAR_15++) {
            ElseIf VAR_16 = VAR_7->if_stmt.elseifs[VAR_15];
            FUNC_9(" else if (");
            FUNC_5(VAR_16.cond);
            FUNC_9(") ");
            FUNC_7(VAR_16.block);
        }
        if (VAR_7->if_stmt.else_block.stmts) {
            FUNC_9(" else ");
            FUNC_7(VAR_7->if_stmt.else_block);
        } else {
            Note *VAR_17 = FUNC_13(VAR_7, VAR_2);
            if (VAR_17) {
                FUNC_9(" else {");
                VAR_4++;
                FUNC_8(VAR_17->pos);
                FUNC_11("assert(\"@complete if/elseif chain failed to handle case\" && 0);");
                VAR_4--;
                FUNC_11("}");
            }
        }
        if (VAR_7->if_stmt.init) {
            VAR_4--;
            FUNC_11("}");
        }
        break;
    case 128:
        FUNC_11("while (");
        FUNC_5(VAR_7->while_stmt.cond);
        FUNC_9(") ");
        FUNC_7(VAR_7->while_stmt.block);
        break;
    case 136:
        FUNC_11("do ");
        FUNC_7(VAR_7->while_stmt.block);
        FUNC_9(" while (");
        FUNC_5(VAR_7->while_stmt.cond);
        FUNC_9(");");
        break;
    case 135:
        FUNC_11("for (");
        if (VAR_7->for_stmt.init) {
            FUNC_6(VAR_7->for_stmt.init);
        }
        FUNC_9(";");
        if (VAR_7->for_stmt.cond) {
            FUNC_9(" ");
            FUNC_5(VAR_7->for_stmt.cond);
        }
        FUNC_9(";");
        if (VAR_7->for_stmt.next) {
            FUNC_9(" ");
            FUNC_6(VAR_7->for_stmt.next);
        }
        FUNC_9(") ");
        FUNC_7(VAR_7->for_stmt.block);
        break;
    case 129: {
        FUNC_11("switch (");
        FUNC_5(VAR_7->switch_stmt.expr);
        FUNC_9(") {");
        bool VAR_18 = 0;
        for (size_t VAR_19 = 0; VAR_19 < VAR_7->switch_stmt.num_cases; VAR_19++) {
            SwitchCase VAR_20 = VAR_7->switch_stmt.cases[VAR_19];
            for (size_t VAR_21 = 0; VAR_21 < VAR_20.num_patterns; VAR_21++) {
                SwitchCasePattern VAR_22 = VAR_20.patterns[VAR_21];
                if (VAR_22.end) {
                    Val VAR_23 = FUNC_12(VAR_22.start);
                    Val VAR_24 = FUNC_12(VAR_22.end);
                    if (FUNC_14(VAR_22.start) && FUNC_14(VAR_22.end)) {
                        FUNC_10();
                        for (int VAR_25 = (int)VAR_23.ll; VAR_25 <= (int)VAR_24.ll; VAR_25++) {
                            FUNC_9("case ");
                            FUNC_4(VAR_25);
                            FUNC_9(": ");
                        }
                    } else {
                        FUNC_11("// ");
                        FUNC_5(VAR_22.start);
                        FUNC_9("...");
                        FUNC_5(VAR_22.end);
                        FUNC_10();
                        for (long long VAR_26 = VAR_23.ll; VAR_26 <= VAR_24.ll; VAR_26++) {
                            FUNC_9("case %lld: ", VAR_26);
                        }
                    }
                } else {
                    FUNC_11("case ");
                    FUNC_5(VAR_22.start);
                    FUNC_9(":");
                }
            }
            if (VAR_20.is_default) {
                VAR_18 = 1;
                FUNC_11("default:");
            }
            FUNC_9(" ");
            FUNC_9("{");
            VAR_4++;
            StmtList VAR_27 = VAR_20.block;
            for (size_t VAR_28 = 0; VAR_28 < VAR_27.num_stmts; VAR_28++) {
                FUNC_16(VAR_27.stmts[VAR_28]);
            }
            FUNC_11("break;");
            VAR_4--;
            FUNC_11("}");
        }
        if (!VAR_18) {
            Note *VAR_29 = FUNC_13(VAR_7, VAR_2);
            if (VAR_29) {
                FUNC_11("default:");
                VAR_4++;
                FUNC_11("assert(\"@complete switch failed to handle case\" && 0);");
                FUNC_11("break;");
                VAR_4--;
            }
        }
        FUNC_11("}");
        break;
    }
    case 132:
        FUNC_11("%s: ;", VAR_7->label);
        break;
    case 134:
        FUNC_11("goto %s;", VAR_7->label);
        break;
    default:
        FUNC_10();
        FUNC_6(VAR_7);
        FUNC_9(";");
        break;
    }
}
