
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refs; int name; } ;
typedef TYPE_1__ Tube ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;

void
FUNC_2(Tube *VAR_0)
{
    if (!VAR_0) return;
    if (VAR_0->refs < 1) {
        FUNC_1("refs is zero for tube: %s", VAR_0->name);
        return;
    }

    --VAR_0->refs;
    if (VAR_0->refs < 1)
        FUNC_0(VAR_0);
}
