
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(Type *VAR_5, char *VAR_6, int VAR_7) {
    VAR_4;
    if (VAR_5->kind == VAR_0) {
        FUNC_0("lea %d(#%s), #rax", VAR_7, VAR_6);
    } else if (VAR_5->kind == VAR_2) {
        FUNC_0("movss %d(#%s), #xmm0", VAR_7, VAR_6);
    } else if (VAR_5->kind == VAR_1 || VAR_5->kind == VAR_3) {
        FUNC_0("movsd %d(#%s), #xmm0", VAR_7, VAR_6);
    } else {
        char *VAR_8 = FUNC_1(VAR_5);
        FUNC_0("%s %d(#%s), #rax", VAR_8, VAR_7, VAR_6);
        FUNC_2(VAR_5);
    }
}
