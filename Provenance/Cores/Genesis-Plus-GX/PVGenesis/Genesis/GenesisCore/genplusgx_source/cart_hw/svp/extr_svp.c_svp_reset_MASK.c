
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rom; } ;
struct TYPE_3__ {int ssp1601; scalar_t__ iram_rom; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;

void FUNC_2(void)
{
  FUNC_0(VAR_1->iram_rom + 0x800, VAR_0.rom + 0x800, 0x20000 - 0x800);
  FUNC_1(&VAR_1->ssp1601);
}
