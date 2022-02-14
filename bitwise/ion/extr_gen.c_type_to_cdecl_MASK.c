
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t num_params; TYPE_2__* ret; int has_varargs; TYPE_2__** params; } ;
struct TYPE_6__ {int kind; TYPE_1__ func; int num_elems; struct TYPE_6__* base; } ;
typedef TYPE_2__ Type ;






 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (char const*,char const) ;
 char* FUNC_3 (char*,char const*,...) ;

char *FUNC_4(Type *VAR_0, const char *VAR_1) {
    switch (VAR_0->kind) {
    case 128:
        return FUNC_4(VAR_0->base, FUNC_2(FUNC_3("*%s", VAR_1), *VAR_1));
    case 130:
        return FUNC_4(VAR_0->base, FUNC_3("const %s", FUNC_2(VAR_1, *VAR_1)));
    case 131:
        if (VAR_0->num_elems == 0) {
            return FUNC_4(VAR_0->base, FUNC_2(FUNC_3("%s[]", VAR_1), *VAR_1));
        } else {
            return FUNC_4(VAR_0->base, FUNC_2(FUNC_3("%s[%zu]", VAR_1, VAR_0->num_elems), *VAR_1));
        }
    case 129: {
        char *VAR_2 = ((void*)0);
        FUNC_0(VAR_2, "(*%s)(", VAR_1);
        if (VAR_0->func.num_params == 0) {
            FUNC_0(VAR_2, "void");
        } else {
            for (size_t VAR_3 = 0; VAR_3 < VAR_0->func.num_params; VAR_3++) {
                FUNC_0(VAR_2, "%s%s", VAR_3 == 0 ? "" : ", ", FUNC_4(VAR_0->func.params[VAR_3], ""));
            }
        }
        if (VAR_0->func.has_varargs) {
            FUNC_0(VAR_2, ", ...");
        }
        FUNC_0(VAR_2, ")");
        return FUNC_4(VAR_0->func.ret, VAR_2);
    }
    default:
        return FUNC_3("%s%s%s", FUNC_1(VAR_0), *VAR_1 ? " " : "", VAR_1);
    }
}
