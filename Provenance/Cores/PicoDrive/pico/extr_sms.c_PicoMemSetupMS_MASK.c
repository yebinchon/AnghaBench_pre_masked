
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zram; scalar_t__ rom; } ;
struct TYPE_3__ {int z80_out; int z80_in; } ;
typedef int FPTR ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int,int,scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_4(void)
{
  FUNC_3(VAR_4, 0x0000, 0xbfff, VAR_1.rom, 0);
  FUNC_3(VAR_4, 0xc000, 0xdfff, VAR_1.zram, 0);
  FUNC_3(VAR_4, 0xe000, 0xffff, VAR_1.zram, 0);

  FUNC_3(VAR_7, 0x0000, 0xbfff, VAR_3, 1);
  FUNC_3(VAR_7, 0xc000, 0xdfff, VAR_1.zram, 0);
  FUNC_3(VAR_7, 0xe000, 0xffff, VAR_3, 1);
}
