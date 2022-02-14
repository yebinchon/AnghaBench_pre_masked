
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_10__ {scalar_t__ kind; int bitsize; } ;
typedef TYPE_1__ Type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (int ,char) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,TYPE_1__*) ;
 TYPE_1__* FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (char**,TYPE_1__*,int *,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ,char*) ;

__attribute__((used)) static Vector *FUNC_15() {
    Vector *VAR_3 = FUNC_6();
    for (;;) {
        if (FUNC_7(VAR_2)) {
            FUNC_12();
            continue;
        }
        if (!FUNC_4(FUNC_8()))
            break;
        Type *VAR_4 = FUNC_10(((void*)0));
        if (VAR_4->kind == VAR_1 && FUNC_7(';')) {
            FUNC_13(VAR_3, FUNC_5(((void*)0), VAR_4));
            continue;
        }
        for (;;) {
            char *VAR_5 = ((void*)0);
            Type *VAR_6 = FUNC_11(&VAR_5, VAR_4, ((void*)0), VAR_0);
            FUNC_1(VAR_6);
            VAR_6 = FUNC_0(VAR_6);
            VAR_6->bitsize = FUNC_7(':') ? FUNC_9(VAR_5, VAR_6) : -1;
            FUNC_13(VAR_3, FUNC_5(VAR_5, VAR_6));
            if (FUNC_7(','))
                continue;
            if (FUNC_3(FUNC_8(), '}'))
                FUNC_14(FUNC_8(), "missing ';' at the end of field list");
            else
                FUNC_2(';');
            break;
        }
    }
    FUNC_2('}');
    return VAR_3;
}
