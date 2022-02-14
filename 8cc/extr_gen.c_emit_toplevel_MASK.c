
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; int body; } ;
typedef TYPE_1__ Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_2 ;

void FUNC_5(Node *VAR_3) {
    VAR_2 = 8;
    if (VAR_3->kind == VAR_1) {
        FUNC_1(VAR_3);
        FUNC_0(VAR_3->body);
        FUNC_3();
    } else if (VAR_3->kind == VAR_0) {
        FUNC_2(VAR_3);
    } else {
        FUNC_4("internal error");
    }
}
