
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ kind; int sval; } ;
typedef TYPE_2__ Token ;
struct TYPE_17__ {TYPE_1__* ty; } ;
struct TYPE_15__ {scalar_t__ kind; } ;
typedef TYPE_3__ Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (char) ;
 TYPE_2__* FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_2__* FUNC_7 () ;
 TYPE_3__* FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,TYPE_3__*) ;

__attribute__((used)) static Node *FUNC_11() {
    if (FUNC_5('*')) {

        Token *VAR_3 = FUNC_7();
        Node *VAR_4 = FUNC_8();
        if (VAR_4->ty->kind != VAR_0)
            FUNC_2(VAR_3, "pointer expected for computed goto, but got %s", FUNC_6(VAR_4));
        return FUNC_0(VAR_4);
    }
    Token *VAR_5 = FUNC_4();
    if (!VAR_5 || VAR_5->kind != VAR_1)
        FUNC_2(VAR_5, "identifier expected, but got %s", FUNC_9(VAR_5));
    FUNC_3(';');
    Node *VAR_6 = FUNC_1(VAR_5->sval);
    FUNC_10(VAR_2, VAR_6);
    return VAR_6;
}
