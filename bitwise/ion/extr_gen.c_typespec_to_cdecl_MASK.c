
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t num_args; TYPE_2__* ret; int has_varargs; TYPE_2__** args; } ;
struct TYPE_9__ {int kind; TYPE_1__ func; int num_elems; struct TYPE_9__* base; } ;
typedef TYPE_2__ Typespec ;
struct TYPE_10__ {char const* typeid; } ;
typedef TYPE_3__ Type ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,...) ;
 char* FUNC_2 (char*,char const) ;
 char const* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*) ;
 char* FUNC_6 (char*,char const*,...) ;

char *FUNC_7(Typespec *VAR_0, const char *VAR_1) {
    if (!VAR_0) {
        return FUNC_6("void%s%s", *VAR_1 ? " " : "", VAR_1);
    }
    switch (VAR_0->kind) {
    case 130:
        return FUNC_6("%s%s%s", FUNC_4(VAR_0), *VAR_1 ? " " : "", VAR_1);
    case 129:
        return FUNC_7(VAR_0->base, FUNC_2(FUNC_6("*%s", VAR_1), *VAR_1));
    case 132:
        return FUNC_7(VAR_0->base, VAR_1);

    case 133:
        if (VAR_0->num_elems == 0) {
            return FUNC_7(VAR_0->base, FUNC_2(FUNC_6("%s[]", VAR_1), *VAR_1));
        } else {
            return FUNC_7(VAR_0->base, FUNC_2(FUNC_6("%s[%s]", VAR_1, FUNC_3(VAR_0->num_elems)), *VAR_1));
        }
    case 131: {
        char *VAR_2 = ((void*)0);
        FUNC_1(VAR_2, "(*%s)(", VAR_1);
        if (VAR_0->func.num_args == 0) {
            FUNC_1(VAR_2, "void");
        } else {
            for (size_t VAR_3 = 0; VAR_3 < VAR_0->func.num_args; VAR_3++) {
                FUNC_1(VAR_2, "%s%s", VAR_3 == 0 ? "" : ", ", FUNC_7(VAR_0->func.args[VAR_3], ""));
            }
        }
        if (VAR_0->func.has_varargs) {
            FUNC_1(VAR_2, ", ...");
        }
        FUNC_1(VAR_2, ")");
        return FUNC_7(VAR_0->func.ret, VAR_2);
    }
    case 128: {
        Type *VAR_4 = FUNC_5(VAR_0);
        return FUNC_6("tuple%d %s", VAR_4->typeid, VAR_1);
    }
    default:
        FUNC_0(0);
        return ((void*)0);
    }
}
