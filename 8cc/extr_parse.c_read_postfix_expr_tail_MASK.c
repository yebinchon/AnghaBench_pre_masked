
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ kind; struct TYPE_19__* ptr; } ;
typedef TYPE_1__ Type ;
typedef int Token ;
struct TYPE_20__ {TYPE_1__* ty; } ;
typedef TYPE_2__ Node ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (int,TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (int *,char*,char*) ;
 scalar_t__ FUNC_5 (int *,char) ;
 scalar_t__ FUNC_6 (char) ;
 char* FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 () ;
 TYPE_2__* FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static Node *FUNC_13(Node *VAR_8) {
    if (!VAR_8) return ((void*)0);
    for (;;) {
        if (FUNC_6('(')) {
            Token *VAR_9 = FUNC_8();
            VAR_8 = FUNC_1(VAR_8);
            Type *VAR_10 = VAR_8->ty;
            if (VAR_10->kind != VAR_2 || VAR_10->ptr->kind != VAR_1)
                FUNC_4(VAR_9, "function expected, but got %s", FUNC_7(VAR_8));
            VAR_8 = FUNC_9(VAR_8);
            continue;
        }
        if (FUNC_6('[')) {
            VAR_8 = FUNC_11(VAR_8);
            continue;
        }
        if (FUNC_6('.')) {
            VAR_8 = FUNC_10(VAR_8);
            continue;
        }
        if (FUNC_6(VAR_3)) {
            if (VAR_8->ty->kind != VAR_2)
                FUNC_3("pointer type expected, but got %s %s",
                      FUNC_12(VAR_8->ty), FUNC_7(VAR_8));
            VAR_8 = FUNC_0(VAR_0, VAR_8->ty->ptr, VAR_8);
            VAR_8 = FUNC_10(VAR_8);
            continue;
        }
        Token *VAR_11 = FUNC_8();
        if (FUNC_6(VAR_5) || FUNC_6(VAR_4)) {
            FUNC_2(VAR_8);
            int VAR_12 = FUNC_5(VAR_11, VAR_5) ? VAR_7 : VAR_6;
            return FUNC_0(VAR_12, VAR_8->ty, VAR_8);
        }
        return VAR_8;
    }
}
