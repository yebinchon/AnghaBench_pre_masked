
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;
struct TYPE_20__ {TYPE_1__* ty; } ;
typedef TYPE_2__ Node ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (int) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static Node *FUNC_7(int VAR_3, Node *VAR_4, Node *VAR_5) {
    if (VAR_4->ty->kind == VAR_0 && VAR_5->ty->kind == VAR_0) {
        if (!FUNC_5(VAR_3))
            FUNC_2("invalid pointer arith");

        if (VAR_3 == '-')
            return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);

        return FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);
    }
    if (VAR_4->ty->kind == VAR_0)
        return FUNC_1(VAR_4->ty, VAR_3, VAR_4, VAR_5);
    if (VAR_5->ty->kind == VAR_0)
        return FUNC_1(VAR_5->ty, VAR_3, VAR_5, VAR_4);
    FUNC_0(FUNC_3(VAR_4->ty));
    FUNC_0(FUNC_3(VAR_5->ty));
    Type *VAR_6 = FUNC_4(VAR_4->ty, VAR_5->ty);
    return FUNC_1(VAR_6, VAR_3, FUNC_6(VAR_6, VAR_4), FUNC_6(VAR_6, VAR_5));
}
