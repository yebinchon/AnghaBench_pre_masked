
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kind; } ;
typedef TYPE_1__ Node ;






 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(Node *VAR_0) {
    switch (VAR_0->kind) {
    case 129: case 130: case 131: case 128:
        return;
    default:
        FUNC_0("lvalue expected, but got %s", FUNC_1(VAR_0));
    }
}
