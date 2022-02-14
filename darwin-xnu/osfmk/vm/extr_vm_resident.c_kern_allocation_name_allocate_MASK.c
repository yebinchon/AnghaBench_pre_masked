
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* kern_allocation_name_t ;
struct TYPE_6__ {int refcount; int subtotalscount; int flags; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*,int) ;
 scalar_t__ FUNC_5 (char const*,scalar_t__) ;

kern_allocation_name_t
FUNC_6(const char * VAR_2, uint32_t VAR_3)
{
    uint32_t VAR_4;

    VAR_4 = (uint32_t) FUNC_5(VAR_2, VAR_0 - 1);

    kern_allocation_name_t VAR_5;
    VAR_5 = FUNC_3(FUNC_1(VAR_4, VAR_3));
    FUNC_2(VAR_5, FUNC_1(VAR_4, VAR_3));

    VAR_5->refcount = 1;
    VAR_5->subtotalscount = VAR_3;
    VAR_5->flags = (VAR_4 << VAR_1);
    FUNC_4(FUNC_0(VAR_5), VAR_2, VAR_4 + 1);

    return (VAR_5);
}
