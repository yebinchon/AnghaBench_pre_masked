
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_13__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;
struct TYPE_15__ {scalar_t__ kind; } ;
struct TYPE_14__ {TYPE_6__* ty; } ;
typedef TYPE_2__ Node ;


 TYPE_2__* FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (int ,char) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,TYPE_1__*,int ,int) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static Vector *FUNC_11(Type *VAR_0) {
    Vector *VAR_1 = FUNC_6();
    if (FUNC_4(FUNC_7(), '{') || FUNC_5(VAR_0)) {
        FUNC_9(VAR_1, VAR_0, 0, 0);
    } else {
        Node *VAR_2 = FUNC_2(FUNC_8());
        if (FUNC_3(VAR_2->ty) && VAR_2->ty->kind != VAR_0->kind)
            VAR_2 = FUNC_0(VAR_0, VAR_2);
        FUNC_10(VAR_1, FUNC_1(VAR_2, VAR_0, 0));
    }
    return VAR_1;
}
