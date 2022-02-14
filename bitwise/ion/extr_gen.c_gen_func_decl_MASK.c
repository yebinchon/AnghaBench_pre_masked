
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ num_params; scalar_t__ ret_type; scalar_t__ has_varargs; TYPE_2__* params; } ;
struct TYPE_8__ {scalar_t__ kind; TYPE_1__ func; int pos; } ;
struct TYPE_7__ {char* name; scalar_t__ type; } ;
typedef TYPE_2__ FuncParam ;
typedef TYPE_3__ Decl ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ,char*) ;

void FUNC_8(Decl *VAR_1) {
    FUNC_0(VAR_1->kind == VAR_0);
    char *VAR_2 = ((void*)0);
    FUNC_1(VAR_2, "%s(", FUNC_4(VAR_1));
    if (VAR_1->func.num_params == 0) {
        FUNC_1(VAR_2, "void");
    } else {
        for (size_t VAR_3 = 0; VAR_3 < VAR_1->func.num_params; VAR_3++) {
            FuncParam VAR_4 = VAR_1->func.params[VAR_3];
            if (VAR_3 != 0) {
                FUNC_1(VAR_2, ", ");
            }
            FUNC_1(VAR_2, "%s", FUNC_7(FUNC_6(FUNC_5(VAR_4.type)), VAR_4.name));
        }
    }
    if (VAR_1->func.has_varargs) {
        FUNC_1(VAR_2, ", ...");
    }
    FUNC_1(VAR_2, ")");
    FUNC_2(VAR_1->pos);
    if (VAR_1->func.ret_type) {
        FUNC_3("%s", FUNC_7(FUNC_6(FUNC_5(VAR_1->func.ret_type)), VAR_2));
    } else {
        FUNC_3("void %s", VAR_2);
    }
}
