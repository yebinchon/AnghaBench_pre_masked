
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_7__ {scalar_t__ base_addr; } ;
struct TYPE_6__ {scalar_t__ base_addr; } ;
typedef TYPE_1__ KXLDSym ;
typedef TYPE_2__ KXLDSect ;


 int FUNC_0 (TYPE_1__ const*) ;

u_int
FUNC_1(const KXLDSym *VAR_0, const KXLDSect *VAR_1)
{
    FUNC_0(VAR_0);

    return (u_int) (VAR_0->base_addr - VAR_1->base_addr);
}
