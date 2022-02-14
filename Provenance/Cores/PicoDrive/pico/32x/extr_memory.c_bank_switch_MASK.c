
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sram_reg; scalar_t__ ncart_in; } ;
struct TYPE_8__ {unsigned int romsize; scalar_t__ rom; TYPE_1__ m; } ;
struct TYPE_7__ {unsigned long* Fetch; } ;
struct TYPE_6__ {unsigned int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,int,scalar_t__,int ) ;
 int FUNC_2 (int,char*,int,...) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(int VAR_9)
{
  unsigned int VAR_10, VAR_11;

  if (VAR_3.m.ncart_in)
    return;

  VAR_11 = VAR_9 << 20;
  if ((VAR_3.m.sram_reg & VAR_5) && VAR_11 == VAR_6.start) {
    FUNC_0();
    return;
  }

  if (VAR_11 >= VAR_3.romsize) {
    FUNC_2(VAR_0|VAR_1, "missing bank @ %06x", VAR_11);
    FUNC_0();
    return;
  }


  VAR_10 = (VAR_3.romsize + VAR_2) & ~VAR_2;
  VAR_10 -= VAR_11;
  if (VAR_10 > 0x100000)
    VAR_10 = 0x100000;
  FUNC_1(VAR_8, 0x900000, 0x900000 + VAR_10 - 1, VAR_3.rom + VAR_11, 0);
  FUNC_1(VAR_7, 0x900000, 0x900000 + VAR_10 - 1, VAR_3.rom + VAR_11, 0);

  FUNC_2(VAR_0, "bank %06x-%06x -> %06x", 0x900000, 0x900000 + VAR_10 - 1, VAR_11);






}
