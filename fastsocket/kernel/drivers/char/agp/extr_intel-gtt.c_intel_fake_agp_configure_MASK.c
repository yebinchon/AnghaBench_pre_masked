
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int gart_bus_addr; } ;
struct TYPE_3__ {int clear_fake_agp; int gma_bus_addr; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_1(void)
{
 if (!FUNC_0())
     return -VAR_0;

 VAR_2.clear_fake_agp = 1;
 VAR_1->gart_bus_addr = VAR_2.gma_bus_addr;

 return 0;
}
