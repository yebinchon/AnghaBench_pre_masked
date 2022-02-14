
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t num_fields; TYPE_2__* fields; } ;
struct TYPE_8__ {size_t num_params; TYPE_4__* ret; int has_varargs; TYPE_4__** params; } ;
struct TYPE_11__ {size_t kind; TYPE_3__ aggregate; TYPE_1__ func; int num_elems; struct TYPE_11__* base; TYPE_7__* sym; } ;
typedef TYPE_4__ Type ;
struct TYPE_12__ {int name; } ;
struct TYPE_9__ {TYPE_4__* type; } ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (char*,char*,...) ;
 char** VAR_0 ;
 TYPE_4__* VAR_1 ;

void FUNC_2(char **VAR_2, Type *VAR_3) {
    const char *VAR_4 = VAR_0[VAR_3->kind];
    if (VAR_4) {
        FUNC_1(*VAR_2, "%s", VAR_4);
    } else {
        switch (VAR_3->kind) {
        case 130:
        case 128:
        case 134:
        case 132:
            FUNC_0(VAR_3->sym);
            FUNC_1(*VAR_2, "%s", VAR_3->sym->name);
            break;
        case 135:
            FUNC_2(VAR_2, VAR_3->base);
            FUNC_1(*VAR_2, " const");
            break;
        case 131:
            FUNC_2(VAR_2, VAR_3->base);
            FUNC_1(*VAR_2, "*");
            break;
        case 136:
            FUNC_2(VAR_2, VAR_3->base);
            FUNC_1(*VAR_2, "[%zu]", VAR_3->num_elems);
            break;
        case 133:
            FUNC_1(*VAR_2, "func(");
            for (size_t VAR_5 = 0; VAR_5 < VAR_3->func.num_params; VAR_5++) {
                if (VAR_5 != 0) {
                    FUNC_1(*VAR_2, ", ");
                }
                FUNC_2(VAR_2, VAR_3->func.params[VAR_5]);
            }
            if (VAR_3->func.has_varargs) {
                FUNC_1(*VAR_2, "...");
            }
            FUNC_1(*VAR_2, ")");
            if (VAR_3->func.ret != VAR_1) {
                FUNC_1(*VAR_2, ": ");
                FUNC_2(VAR_2, VAR_3->func.ret);
            }
            break;
        case 129:
            FUNC_1(*VAR_2, "{");
            for (size_t VAR_6 = 0; VAR_6 < VAR_3->aggregate.num_fields; VAR_6++) {
                if (VAR_6 != 0) {
                    FUNC_1(*VAR_2, ", ");
                }
                FUNC_2(VAR_2, VAR_3->aggregate.fields[VAR_6].type);
            }
            FUNC_1(*VAR_2, "}");
            break;
        default:
            FUNC_0(0);
            break;
        }
    }
}
