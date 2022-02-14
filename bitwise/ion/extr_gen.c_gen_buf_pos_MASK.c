
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int line; } ;
typedef TYPE_1__ SrcPos ;


 int FUNC_0 (char*,char*,...) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (int ,int) ;

void FUNC_2(char **VAR_2, SrcPos VAR_3) {
    if (VAR_0) {
        return;
    }
    char *VAR_4 = *VAR_2;
    FUNC_0(VAR_4, "\n#line %d ", VAR_3.line);
    char *VAR_5 = VAR_1;
    VAR_1 = VAR_4;
    FUNC_1(VAR_3.name, 0);
    VAR_4 = VAR_1;
    VAR_1 = VAR_5;
    FUNC_0(VAR_4, "\n");
    *VAR_2 = VAR_4;
}
