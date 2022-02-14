
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_15__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;
typedef int Token ;
struct TYPE_16__ {TYPE_1__* ty; } ;
typedef TYPE_2__ Node ;


 TYPE_2__* FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int *,char*,int ) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,char) ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (char) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_2__*) ;

__attribute__((used)) static Vector *FUNC_15(Vector *VAR_2) {
    Vector *VAR_3 = FUNC_8();
    int VAR_4 = 0;
    for (;;) {
        if (FUNC_9(')')) break;
        Node *VAR_5 = FUNC_1(FUNC_10());
        Type *VAR_6;
        if (VAR_4 < FUNC_13(VAR_2)) {
            VAR_6 = FUNC_12(VAR_2, VAR_4++);
        } else {
            VAR_6 = FUNC_5(VAR_5->ty) ? VAR_0 :
                FUNC_6(VAR_5->ty) ? VAR_1 :
                VAR_5->ty;
        }
        FUNC_2(VAR_6, VAR_5->ty);
        if (VAR_6->kind != VAR_5->ty->kind)
            VAR_5 = FUNC_0(VAR_6, VAR_5);
        FUNC_14(VAR_3, VAR_5);
        Token *VAR_7 = FUNC_4();
        if (FUNC_7(VAR_7, ')')) break;
        if (!FUNC_7(VAR_7, ','))
            FUNC_3(VAR_7, "unexpected token: '%s'", FUNC_11(VAR_7));
    }
    return VAR_3;
}
