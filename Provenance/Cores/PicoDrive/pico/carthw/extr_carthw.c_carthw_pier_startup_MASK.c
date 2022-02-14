
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rom; scalar_t__ romsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;

void FUNC_3(void)
{
  int VAR_11;

  FUNC_1(VAR_0, "Pier Solar mapper startup");


  VAR_11 = FUNC_0(VAR_2.romsize + VAR_1);
  if (VAR_11 != 0) {
    FUNC_1(VAR_0, "OOM");
    return;
  }


  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11 += 0x8000)
    FUNC_2(VAR_2.rom + VAR_2.romsize + VAR_11, VAR_2.rom, 0x8000);

  VAR_3 = VAR_7;
  VAR_5 = VAR_8;
  VAR_4 = VAR_10;
  VAR_6 = VAR_9;
}
