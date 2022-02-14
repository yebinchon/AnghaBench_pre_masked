
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* tdt; } ;
struct TYPE_3__ {int fdt; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(int VAR_1, int VAR_2)
{
 u32 *VAR_3 = &VAR_0->tdt[VAR_1].fdt;
 *VAR_3 = (*VAR_3 & ~0xff) | VAR_2;
}
