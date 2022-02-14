
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int defined; } ;
typedef int SrcPos ;
typedef TYPE_1__ Label ;


 int FUNC_0 (int ,char*,char const*) ;
 TYPE_1__* FUNC_1 (int ,char const*) ;

void FUNC_2(SrcPos VAR_0, const char *VAR_1) {
    Label *VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2->defined) {
        FUNC_0(VAR_0, "Multiple definitions of label '%s'", VAR_1);
    }
    VAR_2->defined = 1;
}
