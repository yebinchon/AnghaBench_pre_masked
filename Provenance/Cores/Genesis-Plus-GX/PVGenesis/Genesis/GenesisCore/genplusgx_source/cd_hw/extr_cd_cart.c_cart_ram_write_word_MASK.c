
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* area; unsigned int mask; } ;
struct TYPE_4__ {TYPE_1__ cartridge; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_1, unsigned int VAR_2)
{
  VAR_0.cartridge.area[(VAR_1 >> 1) & VAR_0.cartridge.mask] = VAR_2 & 0xff;
}
