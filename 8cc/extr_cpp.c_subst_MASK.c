
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_31__ {scalar_t__ kind; int position; int * hideset; scalar_t__ is_vararg; } ;
typedef TYPE_1__ Vector ;
typedef TYPE_1__ Token ;
struct TYPE_32__ {TYPE_1__* body; } ;
typedef int Set ;
typedef TYPE_3__ Macro ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char) ;
 TYPE_1__* FUNC_4 () ;
 TYPE_1__* FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static Vector *FUNC_13(Macro *VAR_2, Vector *VAR_3, Set *VAR_4) {
    Vector *VAR_5 = FUNC_4();
    int VAR_6 = FUNC_9(VAR_2->body);
    for (int VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        Token *VAR_8 = FUNC_7(VAR_2->body, VAR_7);
        Token *VAR_9 = (VAR_7 == VAR_6 - 1) ? ((void*)0) : FUNC_7(VAR_2->body, VAR_7 + 1);
        bool VAR_10 = (VAR_8->kind == VAR_1);
        bool VAR_11 = (VAR_9 && VAR_9->kind == VAR_1);

        if (FUNC_3(VAR_8, '#') && VAR_11) {
            FUNC_11(VAR_5, FUNC_5(VAR_8, FUNC_7(VAR_3, VAR_9->position)));
            VAR_7++;
            continue;
        }
        if (FUNC_3(VAR_8, VAR_0) && VAR_11) {
            Vector *VAR_12 = FUNC_7(VAR_3, VAR_9->position);



            if (VAR_9->is_vararg && FUNC_9(VAR_5) > 0 && FUNC_3(FUNC_12(VAR_5), ',')) {
                if (FUNC_9(VAR_12) > 0)
                    FUNC_6(VAR_5, VAR_12);
                else
                    FUNC_10(VAR_5);
            } else if (FUNC_9(VAR_12) > 0) {
                FUNC_2(VAR_5, FUNC_8(VAR_12));
                for (int VAR_13 = 1; VAR_13 < FUNC_9(VAR_12); VAR_13++)
                    FUNC_11(VAR_5, FUNC_7(VAR_12, VAR_13));
            }
            VAR_7++;
            continue;
        }
        if (FUNC_3(VAR_8, VAR_0) && VAR_9) {
            VAR_4 = VAR_9->hideset;
            FUNC_2(VAR_5, VAR_9);
            VAR_7++;
            continue;
        }
        if (VAR_10 && VAR_9 && FUNC_3(VAR_9, VAR_0)) {
            VAR_4 = VAR_9->hideset;
            Vector *VAR_14 = FUNC_7(VAR_3, VAR_8->position);
            if (FUNC_9(VAR_14) == 0)
                VAR_7++;
            else
                FUNC_6(VAR_5, VAR_14);
            continue;
        }
        if (VAR_10) {
            Vector *VAR_15 = FUNC_7(VAR_3, VAR_8->position);
            FUNC_6(VAR_5, FUNC_1(VAR_15, VAR_8));
            continue;
        }
        FUNC_11(VAR_5, VAR_8);
    }
    return FUNC_0(VAR_5, VAR_4);
}
