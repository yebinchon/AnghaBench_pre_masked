
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_1__ Token ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,char) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 () ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_11() {
    Vector *VAR_2 = FUNC_4();
    bool VAR_3 = 0;
    for (;;) {
        Token *VAR_4 = FUNC_1();
        FUNC_10(VAR_2, VAR_4);
        if (VAR_4->kind == VAR_0)
            FUNC_0("premature end of input");
        if (FUNC_2(VAR_4, ';'))
            break;
        if (FUNC_3(VAR_4))
            continue;
        if (FUNC_2(VAR_4, '(')) {
            FUNC_6(VAR_2);
            continue;
        }
        if (VAR_4->kind != VAR_1)
            continue;
        if (!FUNC_2(FUNC_5(), '('))
            continue;
        FUNC_10(VAR_2, FUNC_1());
        FUNC_6(VAR_2);
        VAR_3 = (FUNC_2(FUNC_5(), '{') || FUNC_3(FUNC_5()));
        break;
    }
    while (FUNC_8(VAR_2) > 0)
        FUNC_7(FUNC_9(VAR_2));
    return VAR_3;
}
