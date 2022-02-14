
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_5__ {scalar_t__ kind; char const* name; int pos; } ;
typedef int Stmt ;
typedef TYPE_1__ Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,char const*,int *,TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 () ;
 int * FUNC_5 () ;
 int VAR_4 ;

Stmt *FUNC_6(Expr *VAR_5) {
    if (FUNC_2(VAR_3)) {
        if (VAR_5->kind != VAR_0) {
            FUNC_0(":= must be preceded by a name");
            return ((void*)0);
        }
        return FUNC_3(VAR_5->pos, VAR_5->name, ((void*)0), FUNC_4(), 0);
    } else if (FUNC_2(VAR_2)) {
        if (VAR_5->kind != VAR_0) {
            FUNC_0(": must be preceded by a name");
            return ((void*)0);
        }
        const char *VAR_6 = VAR_5->name;
        Typespec *VAR_7 = FUNC_5();
        Expr *VAR_8 = ((void*)0);
        bool VAR_9 = 0;
        if (FUNC_2(VAR_1)) {
            VAR_9 = FUNC_1(VAR_4);
            if (!VAR_9) {
                VAR_8 = FUNC_4();
            }
        }
        return FUNC_3(VAR_5->pos, VAR_6, VAR_7, VAR_8, VAR_9);
    } else {
        return ((void*)0);
    }
}
