
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ty; } ;
typedef TYPE_1__ Node ;


 char VAR_0 ;
 char VAR_1 ;
 TYPE_1__* FUNC_0 (char,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char) ;
 TYPE_1__* FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static Node *FUNC_4() {
    Node *VAR_3 = FUNC_3();
    for (;;) {
        if (FUNC_2('<')) VAR_3 = FUNC_0('<', FUNC_1(VAR_3), FUNC_1(FUNC_3()));
        else if (FUNC_2('>')) VAR_3 = FUNC_0('<', FUNC_1(FUNC_3()), FUNC_1(VAR_3));
        else if (FUNC_2(VAR_1)) VAR_3 = FUNC_0(VAR_1, FUNC_1(VAR_3), FUNC_1(FUNC_3()));
        else if (FUNC_2(VAR_0)) VAR_3 = FUNC_0(VAR_1, FUNC_1(FUNC_3()), FUNC_1(VAR_3));
        else return VAR_3;
        VAR_3->ty = VAR_2;
    }
}
