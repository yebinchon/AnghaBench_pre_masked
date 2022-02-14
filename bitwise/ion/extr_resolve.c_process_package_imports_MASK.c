
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {size_t num_names; char** names; scalar_t__ import_all; scalar_t__ is_relative; } ;
struct TYPE_14__ {scalar_t__ name; } ;
struct TYPE_18__ {scalar_t__ kind; char* name; TYPE_2__ import; int pos; TYPE_1__ note; } ;
struct TYPE_17__ {size_t num_decls; int always_reachable; int path; TYPE_5__** decls; } ;
struct TYPE_16__ {TYPE_4__* package; } ;
typedef TYPE_3__ Sym ;
typedef TYPE_4__ Package ;
typedef TYPE_5__ Decl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,...) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*,TYPE_3__*) ;
 TYPE_3__* FUNC_8 (int ,char const*,TYPE_5__*) ;

void FUNC_9(Package *VAR_4) {
    for (size_t VAR_5 = 0; VAR_5 < VAR_4->num_decls; VAR_5++) {
        Decl *VAR_6 = VAR_4->decls[VAR_5];
        if (VAR_6->kind == VAR_1) {
            if (VAR_6->note.name == VAR_3) {
                VAR_4->always_reachable = 1;
            }
        } else if (VAR_6->kind == VAR_0) {
            char *VAR_7 = ((void*)0);
            if (VAR_6->import.is_relative) {
                FUNC_1(VAR_7, "%s/", VAR_4->path);
            }
            for (size_t VAR_8 = 0; VAR_8 < VAR_6->import.num_names; VAR_8++) {
                if (!FUNC_6(VAR_6->import.names[VAR_8])) {
                    FUNC_2(VAR_6->pos, "Import name must be lower case: '%s'", VAR_6->import.names[VAR_8]);
                }
                FUNC_1(VAR_7, "%s%s", VAR_8 == 0 ? "" : "/", VAR_6->import.names[VAR_8]);
            }
            Package *VAR_9 = FUNC_4(VAR_7);
            if (!VAR_9) {
                FUNC_2(VAR_6->pos, "Failed to import package '%s'", VAR_7);
            }
            FUNC_0(VAR_7);
            FUNC_5(VAR_6, VAR_9);
            if (VAR_6->import.import_all) {
                FUNC_3(VAR_9);
            }
            const char *VAR_10 = VAR_6->name ? VAR_6->name : VAR_6->import.names[VAR_6->import.num_names - 1];
            Sym *VAR_11 = FUNC_8(VAR_2, VAR_10, VAR_6);
            VAR_11->package = VAR_9;
            FUNC_7(VAR_10, VAR_11);
        }
    }
}
