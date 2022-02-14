
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; scalar_t__ space; } ;
typedef TYPE_1__ Token ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char) ;
 TYPE_1__* FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static char *FUNC_7() {
    Buffer *VAR_1 = FUNC_5();
    for (;;) {
        Token *VAR_2 = FUNC_4();
        if (VAR_2->kind == VAR_0)
            return FUNC_0(VAR_1);
        if (FUNC_1(VAR_1) != 0 && VAR_2->space)
            FUNC_3(VAR_1, ' ');
        FUNC_2(VAR_1, "%s", FUNC_6(VAR_2));
    }
}
