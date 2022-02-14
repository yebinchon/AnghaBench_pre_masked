
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char*) ;
 char* FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_6(char *VAR_2, Type *VAR_3, int VAR_4) {
    VAR_1;
    FUNC_0(VAR_3->kind != VAR_0);
    FUNC_4(VAR_3);
    char *VAR_5 = FUNC_3(VAR_3, 'a');
    char *VAR_6 = FUNC_2("%s+%d(%%rip)", VAR_2, VAR_4);
    FUNC_5(VAR_3, VAR_6);
    FUNC_1("mov #%s, %s", VAR_5, VAR_6);
}
