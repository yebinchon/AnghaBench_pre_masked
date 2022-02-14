
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,...) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(Type *VAR_2, char *VAR_3, int VAR_4) {
    VAR_1;
    if (VAR_2->kind == VAR_0) {
        if (VAR_4)
            FUNC_0("lea %s+%d(#rip), #rax", VAR_3, VAR_4);
        else
            FUNC_0("lea %s(#rip), #rax", VAR_3);
        return;
    }
    char *VAR_5 = FUNC_1(VAR_2);
    FUNC_0("%s %s+%d(#rip), #rax", VAR_5, VAR_3, VAR_4);
    FUNC_2(VAR_2);
}
