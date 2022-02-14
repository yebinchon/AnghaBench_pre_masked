
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ romsize; scalar_t__ rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;

void FUNC_3(void)
{
 int VAR_5;

 FUNC_1(VAR_0, "Realtec mapper startup");



 VAR_5 = FUNC_0(VAR_2.romsize + VAR_1);
 if (VAR_5 != 0) {
  FUNC_1(VAR_0, "OOM");
  return;
 }


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 += 0x2000)
  FUNC_2(VAR_2.rom + VAR_2.romsize + VAR_5, VAR_2.rom + VAR_2.romsize - 0x2000, 0x2000);

 VAR_3 = VAR_4;
}
