
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int pos; scalar_t__ referenced; scalar_t__ defined; } ;
typedef TYPE_1__ Label ;


 int FUNC_0 (int ,char*,int ) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;

void FUNC_2(void) {
    for (Label *VAR_2 = VAR_0; VAR_2 != VAR_1; VAR_2++) {
        if (VAR_2->referenced && !VAR_2->defined) {
            FUNC_0(VAR_2->pos, "Label '%s' referenced but not defined", VAR_2->name);
        }
        if (VAR_2->defined && !VAR_2->referenced) {
            FUNC_1(VAR_2->pos, "Label '%s' defined but not referenced", VAR_2->name);
        }
    }
    VAR_1 = VAR_0;
}
