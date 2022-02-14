
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int typeid; } ;
typedef TYPE_1__ Type ;
struct TYPE_15__ {int kind; } ;
struct TYPE_14__ {TYPE_3__* decl; } ;
typedef TYPE_2__ Sym ;
typedef TYPE_3__ Decl ;




 TYPE_2__** FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (char*,char*,char const*,...) ;
 char* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 TYPE_2__** VAR_0 ;
 TYPE_1__** VAR_1 ;

void FUNC_7(void) {
    for (int VAR_2 = 0; VAR_2 < FUNC_1(VAR_1); VAR_2++) {
        Type *VAR_3 = VAR_1[VAR_2];
        if (FUNC_6(VAR_3)) {
            FUNC_2("typedef struct tuple%d tuple%d;", VAR_3->typeid, VAR_3->typeid);
        }
    }
    for (Sym **VAR_4 = VAR_0; VAR_4 != FUNC_0(VAR_0); VAR_4++) {
        Sym *VAR_5 = *VAR_4;
        Decl *VAR_6 = VAR_5->decl;
        if (!VAR_6 || !FUNC_5(VAR_5)) {
            continue;
        }
        if (FUNC_4(VAR_6)) {
            continue;
        }
        switch (VAR_6->kind) {
        case 129:
        case 128: {
            const char *VAR_7 = FUNC_3(VAR_5);
            FUNC_2("typedef %s %s %s;", VAR_6->kind == 129 ? "struct" : "union", VAR_7, VAR_7);
            break;
        }
        default:

            break;
        }
    }
}
