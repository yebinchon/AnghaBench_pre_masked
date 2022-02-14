
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ty; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static Node *FUNC_4() {
    Node *VAR_3 = FUNC_3();
    Node *VAR_4;
    if (FUNC_2(VAR_0)) {
        VAR_4 = FUNC_0(VAR_0, FUNC_1(VAR_3), FUNC_1(FUNC_4()));
    } else if (FUNC_2(VAR_1)) {
        VAR_4 = FUNC_0(VAR_1, FUNC_1(VAR_3), FUNC_1(FUNC_4()));
    } else {
        return VAR_3;
    }
    VAR_4->ty = VAR_2;
    return VAR_4;
}
