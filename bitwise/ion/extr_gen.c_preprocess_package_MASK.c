
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ name; size_t num_args; TYPE_3__* args; } ;
struct TYPE_14__ {scalar_t__ kind; int pos; TYPE_4__ note; } ;
struct TYPE_9__ {char* val; } ;
struct TYPE_13__ {scalar_t__ kind; TYPE_1__ str_lit; } ;
struct TYPE_11__ {char const* name; int pos; TYPE_5__* expr; } ;
struct TYPE_10__ {char* path; size_t num_decls; TYPE_6__** decls; void* external_name; } ;
typedef TYPE_2__ Package ;
typedef TYPE_3__ NoteArg ;
typedef TYPE_4__ Note ;
typedef TYPE_5__ Expr ;
typedef TYPE_6__ Decl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,TYPE_2__*,char const*) ;
 void* FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(Package *VAR_6) {
    if (!VAR_6->external_name) {
        char *VAR_7 = ((void*)0);
        for (const char *VAR_8 = VAR_6->path; *VAR_8; VAR_8++) {
            FUNC_2(VAR_7, "%c", *VAR_8 == '/' ? '_' : *VAR_8);
        }
        FUNC_2(VAR_7, "_");
        VAR_6->external_name = FUNC_6(VAR_7);
    }
    const char *VAR_9 = FUNC_6("header");
    const char *VAR_10 = FUNC_6("source");
    const char *VAR_11 = FUNC_6("preamble");
    const char *VAR_12 = FUNC_6("postamble");
    for (size_t VAR_13 = 0; VAR_13 < VAR_6->num_decls; VAR_13++) {
        Decl *VAR_14 = VAR_6->decls[VAR_13];
        if (VAR_14->kind != VAR_0) {
            continue;
        }
        Note VAR_15 = VAR_14->note;
        if (VAR_15.name == VAR_3) {
            for (size_t VAR_16 = 0; VAR_16 < VAR_15.num_args; VAR_16++) {
                NoteArg VAR_17 = VAR_15.args[VAR_16];
                Expr *VAR_18 = VAR_15.args[VAR_16].expr;
                if (VAR_18->kind != VAR_1) {
                    FUNC_3(VAR_14->pos, "#foreign argument must be a string");
                }
                const char *VAR_19 = VAR_18->str_lit.val;
                if (VAR_17.name == VAR_9) {
                    char VAR_20[VAR_2];
                    FUNC_5(VAR_20, VAR_6, VAR_19);
                    FUNC_0(VAR_20);
                } else if (VAR_17.name == VAR_10) {
                    char VAR_21[VAR_2];
                    FUNC_5(VAR_21, VAR_6, VAR_19);
                    FUNC_1(VAR_21);
                } else if (VAR_17.name == VAR_11) {
                    FUNC_4(&VAR_5, VAR_17.pos);
                    FUNC_2(VAR_5, "%s\n", VAR_19);
                } else if (VAR_17.name == VAR_12) {
                    FUNC_4(&VAR_4, VAR_17.pos);
                    FUNC_2(VAR_4, "%s\n", VAR_19);
                } else {
                    FUNC_3(VAR_14->pos, "Unknown #foreign named argument '%s'", VAR_17.name);
                }
            }
        }
    }
}
