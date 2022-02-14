
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_3__ {scalar_t__ kind; int varname; int ty; struct TYPE_3__* declvar; } ;
typedef TYPE_1__ Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(Vector *VAR_2, Vector *VAR_3) {
    for (int VAR_4 = 0; VAR_4 < FUNC_4(VAR_3); VAR_4++) {
        Node *VAR_5 = FUNC_3(VAR_3, VAR_4);
        FUNC_0(VAR_5->kind == VAR_0);
        Node *VAR_6 = VAR_5->declvar;
        FUNC_0(VAR_6->kind == VAR_1);
        for (int VAR_7 = 0; VAR_7 < FUNC_4(VAR_2); VAR_7++) {
            Node *VAR_8 = FUNC_3(VAR_2, VAR_7);
            FUNC_0(VAR_8->kind == VAR_1);
            if (FUNC_2(VAR_8->varname, VAR_6->varname))
                continue;
            VAR_8->ty = VAR_6->ty;
            goto found;
        }
        FUNC_1("missing parameter: %s", VAR_6->varname);
    found:;
    }
}
