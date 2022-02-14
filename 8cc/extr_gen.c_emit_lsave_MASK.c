
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_5(Type *VAR_3, int VAR_4) {
    VAR_2;
    if (VAR_3->kind == VAR_1) {
        FUNC_0("movss #xmm0, %d(#rbp)", VAR_4);
    } else if (VAR_3->kind == VAR_0) {
        FUNC_0("movsd #xmm0, %d(#rbp)", VAR_4);
    } else {
        FUNC_3(VAR_3);
        char *VAR_5 = FUNC_2(VAR_3, 'a');
        char *VAR_6 = FUNC_1("%d(%%rbp)", VAR_4);
        FUNC_4(VAR_3, VAR_6);
        FUNC_0("mov #%s, %s", VAR_5, VAR_6);
    }
}
