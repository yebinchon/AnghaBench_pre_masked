
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int sram_reg; } ;
struct TYPE_6__ {int romsize; int* rom; TYPE_1__ m; } ;
struct TYPE_5__ {int start; int end; int flags; int data; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u32 FUNC_3(u32 VAR_6)
{
  u32 VAR_7;
  if (VAR_4.start <= VAR_6 && VAR_6 <= VAR_4.end && (VAR_1.m.sram_reg & VAR_3))
  {
    if (VAR_4.flags & VAR_2) {
      VAR_7 = FUNC_0();
      if (!(VAR_6 & 1))
        VAR_7 >>= 8;
    } else
      VAR_7 = *(u8 *)(VAR_4.data - VAR_4.start + VAR_6);
    FUNC_1(VAR_0, "sram r8  [%06x]   %02x @ %06x", VAR_6, VAR_7, VAR_5);
    return VAR_7;
  }


  if (VAR_6 < VAR_1.romsize)
    return VAR_1.rom[VAR_6 ^ 1];

  return FUNC_2(VAR_6);
}
