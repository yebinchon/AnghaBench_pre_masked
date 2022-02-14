
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* kern_allocation_name_t ;
struct TYPE_5__ {scalar_t__ refcount; int subtotalscount; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,scalar_t__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void
FUNC_5(kern_allocation_name_t VAR_0)
{
    FUNC_3(VAR_0->refcount > 0);
    if (1 == FUNC_2(-1, &VAR_0->refcount))
    {
        FUNC_4(VAR_0, FUNC_1(FUNC_0(VAR_0), VAR_0->subtotalscount));
    }
}
