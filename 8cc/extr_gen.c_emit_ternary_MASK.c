
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ els; scalar_t__ then; scalar_t__ cond; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 () ;

__attribute__((used)) static void FUNC_5(Node *VAR_1) {
    VAR_0;
    FUNC_0(VAR_1->cond);
    char *VAR_2 = FUNC_4();
    FUNC_1(VAR_2);
    if (VAR_1->then)
        FUNC_0(VAR_1->then);
    if (VAR_1->els) {
        char *VAR_3 = FUNC_4();
        FUNC_2(VAR_3);
        FUNC_3(VAR_2);
        FUNC_0(VAR_1->els);
        FUNC_3(VAR_3);
    } else {
        FUNC_3(VAR_2);
    }
}
