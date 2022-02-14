
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int current_section; } ;
typedef TYPE_1__ ASSSplitContext ;


 scalar_t__ FUNC_0 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

ASSSplitContext *FUNC_3(const char *VAR_0)
{
    ASSSplitContext *VAR_1 = FUNC_1(sizeof(*VAR_1));
    if (!VAR_1)
        return ((void*)0);
    VAR_1->current_section = -1;
    if (FUNC_0(VAR_1, VAR_0) < 0) {
        FUNC_2(VAR_1);
        return ((void*)0);
    }
    return VAR_1;
}
