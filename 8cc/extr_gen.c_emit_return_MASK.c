
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ty; } ;
struct TYPE_4__ {TYPE_3__* retval; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(Node *VAR_1) {
    VAR_0;
    if (VAR_1->retval) {
        FUNC_0(VAR_1->retval);
        FUNC_2(VAR_1->retval->ty);
    }
    FUNC_1();
}
