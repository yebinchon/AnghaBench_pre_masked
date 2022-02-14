
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rom; } ;
struct TYPE_3__ {int ssp1601; scalar_t__ iram_rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_4(void)
{
 FUNC_0(VAR_0, "SVP reset");

 FUNC_1(VAR_4->iram_rom + 0x800, VAR_2.rom + 0x800, 0x20000 - 0x800);
 FUNC_3(&VAR_4->ssp1601);




}
