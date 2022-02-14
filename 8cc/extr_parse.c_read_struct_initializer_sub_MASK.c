
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_11__ {int is_struct; scalar_t__ offset; int fields; } ;
typedef TYPE_1__ Type ;
struct TYPE_12__ {scalar_t__ kind; char* sval; } ;
typedef TYPE_2__ Token ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_2__*,char) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,TYPE_1__*,scalar_t__,int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 char* FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(Vector *VAR_1, Type *VAR_2, int VAR_3, bool VAR_4) {
    bool VAR_5 = FUNC_5();
    Vector *VAR_6 = FUNC_1(VAR_2->fields);
    int VAR_7 = 0;
    for (;;) {
        Token *VAR_8 = FUNC_3();
        if (FUNC_4(VAR_8, '}')) {
            if (!VAR_5)
                FUNC_11(VAR_8);
            return;
        }
        char *VAR_9;
        Type *VAR_10;
        if ((FUNC_4(VAR_8, '.') || FUNC_4(VAR_8, '[')) && !VAR_5 && !VAR_4) {
            FUNC_11(VAR_8);
            return;
        }
        if (FUNC_4(VAR_8, '.')) {
            VAR_8 = FUNC_3();
            if (!VAR_8 || VAR_8->kind != VAR_0)
                FUNC_2(VAR_8, "malformed desginated initializer: %s", FUNC_10(VAR_8));
            VAR_9 = VAR_8->sval;
            VAR_10 = FUNC_0(VAR_2->fields, VAR_9);
            if (!VAR_10)
                FUNC_2(VAR_8, "field does not exist: %s", FUNC_10(VAR_8));
            VAR_6 = FUNC_1(VAR_2->fields);
            VAR_7 = 0;
            while (VAR_7 < FUNC_13(VAR_6)) {
                char *VAR_11 = FUNC_12(VAR_6, VAR_7++);
                if (FUNC_9(VAR_9, VAR_11) == 0)
                    break;
            }
            VAR_4 = 1;
        } else {
            FUNC_11(VAR_8);
            if (VAR_7 == FUNC_13(VAR_6))
                break;
            VAR_9 = FUNC_12(VAR_6, VAR_7++);
            VAR_10 = FUNC_0(VAR_2->fields, VAR_9);
        }
        FUNC_7(VAR_1, VAR_10, VAR_3 + VAR_10->offset, VAR_4);
        FUNC_6();
        VAR_4 = 0;
        if (!VAR_2->is_struct)
            break;
    }
    if (VAR_5)
        FUNC_8();
}
