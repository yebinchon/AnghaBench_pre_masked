
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int kind; } ;
struct TYPE_10__ {int kind; char ival; char* fname; struct TYPE_10__* right; struct TYPE_10__* left; int label; struct TYPE_10__* operand; TYPE_5__* ty; int field; struct TYPE_10__* struc; int stmts; struct TYPE_10__* retval; struct TYPE_10__* els; struct TYPE_10__* then; struct TYPE_10__* cond; TYPE_5__* totype; int initoff; struct TYPE_10__* initval; int declinit; TYPE_1__* declvar; struct TYPE_10__* body; int params; int args; int varname; int lvarinit; int sval; int fval; } ;
struct TYPE_9__ {char* varname; TYPE_5__* ty; } ;
typedef TYPE_2__ Node ;
typedef int Buffer ;
 int const VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,TYPE_2__*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *,char*,TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(Buffer *VAR_1, Node *VAR_2) {
    if (!VAR_2) {
        FUNC_2(VAR_1, "(nil)");
        return;
    }
    switch (VAR_2->kind) {
    case 165:
        switch (VAR_2->ty->kind) {
        case 159:
            if (VAR_2->ival == '\n') FUNC_2(VAR_1, "'\n'");
            else if (VAR_2->ival == '\\') FUNC_2(VAR_1, "'\\\\'");
            else if (VAR_2->ival == '\0') FUNC_2(VAR_1, "'\\0'");
            else FUNC_2(VAR_1, "'%c'", VAR_2->ival);
            break;
        case 156:
            FUNC_2(VAR_1, "%d", VAR_2->ival);
            break;
        case 153:
            FUNC_2(VAR_1, "%ldL", VAR_2->ival);
            break;
        case 154:
            FUNC_2(VAR_1, "%lldL", VAR_2->ival);
            break;
        case 157:
        case 158:
        case 155:
            FUNC_2(VAR_1, "%f", VAR_2->fval);
            break;
        case 160:
            FUNC_2(VAR_1, "\"%s\"", FUNC_5(VAR_2->sval));
            break;
        default:
            FUNC_3("internal error");
        }
        break;
    case 166:
        FUNC_2(VAR_1, "%s:", VAR_2->label);
        break;
    case 164:
        FUNC_2(VAR_1, "lv=%s", VAR_2->varname);
        if (VAR_2->lvarinit) {
            FUNC_2(VAR_1, "(");
            FUNC_0(VAR_1, VAR_2->lvarinit);
            FUNC_2(VAR_1, ")");
        }
        break;
    case 169:
        FUNC_2(VAR_1, "gv=%s", VAR_2->varname);
        break;
    case 173:
    case 171: {
        FUNC_2(VAR_1, "(%s)%s(", FUNC_6(VAR_2->ty),
                   VAR_2->kind == 173 ? VAR_2->fname : FUNC_4(VAR_2));
        for (int VAR_3 = 0; VAR_3 < FUNC_9(VAR_2->args); VAR_3++) {
            if (VAR_3 > 0)
                FUNC_2(VAR_1, ",");
            FUNC_2(VAR_1, "%s", FUNC_4(FUNC_8(VAR_2->args, VAR_3)));
        }
        FUNC_2(VAR_1, ")");
        break;
    }
    case 172: {
        FUNC_2(VAR_1, "(funcdesg %s)", VAR_2->fname);
        break;
    }
    case 174: {
        FUNC_2(VAR_1, "(%s)%s(", FUNC_6(VAR_2->ty), VAR_2->fname);
        for (int VAR_4 = 0; VAR_4 < FUNC_9(VAR_2->params); VAR_4++) {
            if (VAR_4 > 0)
                FUNC_2(VAR_1, ",");
            Node *VAR_5 = FUNC_8(VAR_2->params, VAR_4);
            FUNC_2(VAR_1, "%s %s", FUNC_6(VAR_5->ty), FUNC_4(VAR_5));
        }
        FUNC_2(VAR_1, ")");
        FUNC_10(VAR_1, VAR_2->body);
        break;
    }
    case 170:
        FUNC_2(VAR_1, "goto(%s)", VAR_2->label);
        break;
    case 176:
        FUNC_2(VAR_1, "(decl %s %s",
                   FUNC_6(VAR_2->declvar->ty),
                   VAR_2->declvar->varname);
        if (VAR_2->declinit) {
            FUNC_2(VAR_1, " ");
            FUNC_0(VAR_1, VAR_2->declinit);
        }
        FUNC_2(VAR_1, ")");
        break;
    case 167:
        FUNC_2(VAR_1, "%s@%d", FUNC_4(VAR_2->initval), VAR_2->initoff, FUNC_6(VAR_2->totype));
        break;
    case 177:
        FUNC_2(VAR_1, "(conv %s=>%s)", FUNC_4(VAR_2->operand), FUNC_6(VAR_2->ty));
        break;
    case 168:
        FUNC_2(VAR_1, "(if %s %s",
                   FUNC_4(VAR_2->cond),
                   FUNC_4(VAR_2->then));
        if (VAR_2->els)
            FUNC_2(VAR_1, " %s", FUNC_4(VAR_2->els));
        FUNC_2(VAR_1, ")");
        break;
    case 161:
        FUNC_2(VAR_1, "(? %s %s %s)",
                   FUNC_4(VAR_2->cond),
                   FUNC_4(VAR_2->then),
                   FUNC_4(VAR_2->els));
        break;
    case 163:
        FUNC_2(VAR_1, "(return %s)", FUNC_4(VAR_2->retval));
        break;
    case 178: {
        FUNC_2(VAR_1, "{");
        for (int VAR_6 = 0; VAR_6 < FUNC_9(VAR_2->stmts); VAR_6++) {
            FUNC_10(VAR_1, FUNC_8(VAR_2->stmts, VAR_6));
            FUNC_2(VAR_1, ";");
        }
        FUNC_2(VAR_1, "}");
        break;
    }
    case 162:
        FUNC_10(VAR_1, VAR_2->struc);
        FUNC_2(VAR_1, ".");
        FUNC_2(VAR_1, VAR_2->field);
        break;
    case 179: FUNC_7(VAR_1, "addr", VAR_2); break;
    case 175: FUNC_7(VAR_1, "deref", VAR_2); break;
    case 130: FUNC_1(VAR_1, "<<", VAR_2); break;
    case 129:
    case 128: FUNC_1(VAR_1, ">>", VAR_2); break;
    case 140: FUNC_1(VAR_1, ">=", VAR_2); break;
    case 138: FUNC_1(VAR_1, "<=", VAR_2); break;
    case 135: FUNC_1(VAR_1, "!=", VAR_2); break;
    case 131: FUNC_7(VAR_1, "pre++", VAR_2); break;
    case 132: FUNC_7(VAR_1, "pre--", VAR_2); break;
    case 133: FUNC_7(VAR_1, "post++", VAR_2); break;
    case 134: FUNC_7(VAR_1, "post--", VAR_2); break;
    case 137: FUNC_1(VAR_1, "and", VAR_2); break;
    case 136: FUNC_1(VAR_1, "or", VAR_2); break;
    case 152: FUNC_1(VAR_1, "+=", VAR_2); break;
    case 143: FUNC_1(VAR_1, "-=", VAR_2); break;
    case 148: FUNC_1(VAR_1, "*=", VAR_2); break;
    case 150: FUNC_1(VAR_1, "/=", VAR_2); break;
    case 149: FUNC_1(VAR_1, "%=", VAR_2); break;
    case 151: FUNC_1(VAR_1, "&=", VAR_2); break;
    case 147: FUNC_1(VAR_1, "|=", VAR_2); break;
    case 142: FUNC_1(VAR_1, "^=", VAR_2); break;
    case 146: FUNC_1(VAR_1, "<<=", VAR_2); break;
    case 145:
    case 144: FUNC_1(VAR_1, ">>=", VAR_2); break;
    case '!': FUNC_7(VAR_1, "!", VAR_2); break;
    case '&': FUNC_1(VAR_1, "&", VAR_2); break;
    case '|': FUNC_1(VAR_1, "|", VAR_2); break;
    case 141: {
        FUNC_2(VAR_1, "((%s)=>(%s) %s)",
                   FUNC_6(VAR_2->operand->ty),
                   FUNC_6(VAR_2->ty),
                   FUNC_4(VAR_2->operand));
        break;
    }
    case 139:
        FUNC_2(VAR_1, "&&%s", VAR_2->label);
        break;
    default: {
        char *VAR_7 = FUNC_4(VAR_2->left);
        char *VAR_8 = FUNC_4(VAR_2->right);
        if (VAR_2->kind == VAR_0)
            FUNC_2(VAR_1, "(== ");
        else
            FUNC_2(VAR_1, "(%c ", VAR_2->kind);
        FUNC_2(VAR_1, "%s %s)", VAR_7, VAR_8);
    }
    }
}
