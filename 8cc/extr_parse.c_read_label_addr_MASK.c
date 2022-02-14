
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; int sval; } ;
typedef TYPE_1__ Token ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static Node *FUNC_5(Token *VAR_2) {


    Token *VAR_3 = FUNC_2();
    if (VAR_3->kind != VAR_0)
        FUNC_1(VAR_2, "label name expected after &&, but got %s", FUNC_3(VAR_3));
    Node *VAR_4 = FUNC_0(VAR_3->sval);
    FUNC_4(VAR_1, VAR_4);
    return VAR_4;
}
