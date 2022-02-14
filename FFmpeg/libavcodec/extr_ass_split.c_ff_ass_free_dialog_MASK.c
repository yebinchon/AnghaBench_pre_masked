
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* text; struct TYPE_4__* effect; struct TYPE_4__* name; struct TYPE_4__* style; } ;
typedef TYPE_1__ ASSDialog ;


 int FUNC_0 (TYPE_1__**) ;

void FUNC_1(ASSDialog **VAR_0)
{
    ASSDialog *VAR_1 = *VAR_0;
    if (!VAR_1)
        return;
    FUNC_0(&VAR_1->style);
    FUNC_0(&VAR_1->name);
    FUNC_0(&VAR_1->effect);
    FUNC_0(&VAR_1->text);
    FUNC_0(VAR_0);
}
