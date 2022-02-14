
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int Vector ;
typedef int Type ;
typedef int Token ;
struct TYPE_6__ {int ty; } ;
typedef TYPE_1__ Node ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (char) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 int * FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 void** FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static Node *FUNC_10() {
    FUNC_1('(');
    Token *VAR_0 = FUNC_3();
    Node *VAR_1 = FUNC_4();
    FUNC_1(',');
    Node *VAR_2 = ((void*)0);
    Vector *VAR_3 = FUNC_5(&VAR_2);
    for (int VAR_4 = 0; VAR_4 < FUNC_9(VAR_3); VAR_4++) {
        void **VAR_5 = FUNC_8(VAR_3, VAR_4);
        Type *VAR_6 = VAR_5[0];
        Node *VAR_7 = VAR_5[1];
        if (FUNC_7(VAR_1->ty, VAR_6))
            return VAR_7;
    }
   if (!VAR_2)
       FUNC_0(VAR_0, "no matching generic selection for %s: %s", FUNC_2(VAR_1), FUNC_6(VAR_1->ty));
   return VAR_2;
}
