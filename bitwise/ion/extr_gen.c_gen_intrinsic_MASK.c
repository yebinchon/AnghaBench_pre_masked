
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int num_fields; TYPE_1__* fields; } ;
struct TYPE_20__ {struct TYPE_20__* base; TYPE_2__ aggregate; } ;
typedef TYPE_4__ Type ;
struct TYPE_19__ {int num_args; TYPE_6__** args; } ;
struct TYPE_22__ {int pos; TYPE_3__ call; } ;
struct TYPE_21__ {scalar_t__ name; } ;
struct TYPE_17__ {TYPE_4__* type; } ;
typedef TYPE_5__ Sym ;
typedef TYPE_6__ Expr ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (char*,...) ;
 TYPE_4__* FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 TYPE_4__* FUNC_9 (TYPE_4__*) ;

void FUNC_10(Sym *VAR_0, Expr *VAR_1) {
    Type *VAR_2 = FUNC_4(VAR_1->call.args[0]);
    Type *VAR_3 = FUNC_6(VAR_2) ? FUNC_9(VAR_2->base) : 0;
    Type *VAR_4 = VAR_3 && FUNC_5(VAR_3) && VAR_3->aggregate.num_fields == 2 ? VAR_3->aggregate.fields[0].type : 0;
    Type *VAR_5 = VAR_3 && FUNC_5(VAR_3) && VAR_3->aggregate.num_fields == 2 ? VAR_3->aggregate.fields[1].type : 0;
    if (VAR_0->name == FUNC_7("va_copy") || VAR_0->name == FUNC_7("va_start") || VAR_0->name == FUNC_7("va_end")) {
        FUNC_3("%s(", VAR_0->name);
        for (int VAR_6 = 0; VAR_6 < VAR_1->call.num_args; VAR_6++) {
            if (VAR_6 != 0) {
                FUNC_3(", ");
            }
            FUNC_2(VAR_1->call.args[VAR_6]);
        }
        FUNC_3(")");
    } else if (VAR_0->name == FUNC_7("va_arg")) {
        FUNC_0(VAR_1->call.num_args == 2);
        FUNC_2(VAR_1->call.args[1]);
        FUNC_3(" = va_arg(");
        FUNC_2(VAR_1->call.args[0]);
        Type *VAR_7 = FUNC_4(VAR_1->call.args[1]);
        FUNC_3(", %s)", FUNC_8(VAR_7, ""));
    } else if (VAR_0->name == FUNC_7("apush") || VAR_0->name == FUNC_7("aputv") || VAR_0->name == FUNC_7("adelv") ||
        VAR_0->name == FUNC_7("agetvi") || VAR_0->name == FUNC_7("agetvp") || VAR_0->name == FUNC_7("agetv") ||
        VAR_0->name == FUNC_7("asetcap") || VAR_0->name == FUNC_7("afit") || VAR_0->name == FUNC_7("acat") ||
        VAR_0->name == FUNC_7("adeli") || VAR_0->name == FUNC_7("aindexv") || VAR_0->name == FUNC_7("asetlen")) {

        FUNC_3("%s(%s, (", VAR_0->name, FUNC_8(VAR_3, ""));
        FUNC_2(VAR_1->call.args[0]);
        FUNC_3("), (");
        FUNC_2(VAR_1->call.args[1]);
        FUNC_3("))");
    } else if (VAR_0->name == FUNC_7("adefault")) {

        FUNC_3("%s(%s, %s, (", VAR_0->name, FUNC_8(VAR_3, ""), FUNC_8(VAR_5, ""));
        FUNC_2(VAR_1->call.args[0]);
        FUNC_3("), (");
        FUNC_2(VAR_1->call.args[1]);
        FUNC_3("))");
    } else if (VAR_0->name == FUNC_7("afill")) {

        FUNC_3("%s(%s, (", VAR_0->name, FUNC_8(VAR_3, ""));
        FUNC_2(VAR_1->call.args[0]);
        FUNC_3("), (");
        FUNC_2(VAR_1->call.args[1]);
        FUNC_3("), (");
        FUNC_2(VAR_1->call.args[2]);
        FUNC_3("))");
    } else if (VAR_0->name == FUNC_7("acatn") || VAR_0->name == FUNC_7("adeln")) {
        FUNC_3("%s(%s, (", VAR_0->name, FUNC_8(VAR_3, ""));
        FUNC_2(VAR_1->call.args[0]);
        FUNC_3("), (");
        FUNC_2(VAR_1->call.args[1]);
        FUNC_3("), (");
        FUNC_2(VAR_1->call.args[2]);
        FUNC_3("))");
    } else if (VAR_0->name == FUNC_7("aindex") || VAR_0->name == FUNC_7("ageti") || VAR_0->name == FUNC_7("adel")) {
        FUNC_3("%s(%s, %s, (", VAR_0->name, FUNC_8(VAR_3, ""), FUNC_8(VAR_4, ""));
        FUNC_2(VAR_1->call.args[0]);
        FUNC_3("), (");
        FUNC_2(VAR_1->call.args[1]);
        FUNC_3("))");
    } else if (VAR_0->name == FUNC_7("agetp") || VAR_0->name == FUNC_7("aget")) {
        FUNC_3("%s(%s, %s, %s, (", VAR_0->name, FUNC_8(VAR_3, ""), FUNC_8(VAR_4, ""), FUNC_8(VAR_5, ""));
        FUNC_2(VAR_1->call.args[0]);
        FUNC_3("), (");
        FUNC_2(VAR_1->call.args[1]);
        FUNC_3("))");
    } else if (VAR_0->name == FUNC_7("aput")) {
        FUNC_3("%s(%s, %s, (", VAR_0->name, FUNC_8(VAR_3, ""), FUNC_8(VAR_4, ""));
        FUNC_2(VAR_1->call.args[0]);
        FUNC_3("), (");
        FUNC_2(VAR_1->call.args[1]);
        FUNC_3("), (");
        FUNC_2(VAR_1->call.args[2]);
        FUNC_3("))");
    } else if (VAR_0->name == FUNC_7("ahdrsize") || VAR_0->name == FUNC_7("ahdralign") || VAR_0->name == FUNC_7("ahdr") ||
        VAR_0->name == FUNC_7("alen") || VAR_0->name == FUNC_7("acap") || VAR_0->name == FUNC_7("afree") ||
        VAR_0->name == FUNC_7("aclear") || VAR_0->name == FUNC_7("apop")) {
        FUNC_3("%s(%s, (", VAR_0->name, FUNC_8(VAR_3, ""));
        FUNC_2(VAR_1->call.args[0]);
        FUNC_3("))");
    } else if (VAR_0->name == FUNC_7("anew")) {
        Type *VAR_8 = FUNC_4(VAR_1);
        FUNC_0(FUNC_6(VAR_8));
        FUNC_3("%s(%s, ", VAR_0->name, FUNC_8(VAR_8->base, ""));
        FUNC_2(VAR_1->call.args[0]);
        FUNC_3(")");
    } else {
        FUNC_1(VAR_1->pos, "Call to unimplemented intrinsic %s", VAR_0->name);
    }
}
