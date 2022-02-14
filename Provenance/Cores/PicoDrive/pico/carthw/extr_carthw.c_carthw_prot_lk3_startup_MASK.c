
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rom; scalar_t__ romsize; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;

void FUNC_3(void)
{
  int VAR_4;

  FUNC_1(VAR_0, "lk3 prot emu startup");


  VAR_4 = FUNC_0(VAR_1.romsize + 0x8000);
  if (VAR_4 != 0) {
    FUNC_1(VAR_0, "OOM");
    return;
  }
  FUNC_2(VAR_1.rom + VAR_1.romsize, VAR_1.rom, 0x8000);

  VAR_2 = VAR_3;
}
