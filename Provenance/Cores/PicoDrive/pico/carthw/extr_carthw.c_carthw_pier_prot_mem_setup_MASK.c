
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rom; scalar_t__ romsize; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(int VAR_5)
{
  if (VAR_5) {

    int VAR_6;
    for (VAR_6 = 0x000000; VAR_6 < 0x400000; VAR_6 += VAR_0) {
      FUNC_0(VAR_4, VAR_6, VAR_6 + 0xffff, VAR_1.rom + VAR_1.romsize, 0);
      FUNC_0(VAR_3, VAR_6, VAR_6 + 0xffff, VAR_1.rom + VAR_1.romsize, 0);
    }
    FUNC_0(VAR_4, VAR_0, VAR_0 * 2 - 1,
      VAR_2, 1);
  }
  else {
    FUNC_0(VAR_4, 0, 0x27ffff, VAR_1.rom, 0);
    FUNC_0(VAR_3, 0, 0x27ffff, VAR_1.rom, 0);
  }
}
