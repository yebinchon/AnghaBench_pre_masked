
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int sram_reg; } ;
struct TYPE_6__ {scalar_t__ romsize; scalar_t__ rom; TYPE_1__ m; } ;
struct TYPE_5__ {scalar_t__ start; scalar_t__ end; int flags; scalar_t__ data; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(u32 VAR_6)
{
  u32 VAR_7;
  if (VAR_4.start <= VAR_6 && VAR_6 <= VAR_4.end && (VAR_1.m.sram_reg & VAR_3))
  {
    if (VAR_4.flags & VAR_2)
      VAR_7 = FUNC_0();
    else {
      u8 *VAR_8 = (u8 *)(VAR_4.data - VAR_4.start + VAR_6);
      VAR_7 = VAR_8[0] << 8;
      VAR_7 |= VAR_8[1];
    }
    FUNC_1(VAR_0, "sram r16 [%06x] %04x @ %06x", VAR_6, VAR_7, VAR_5);
    return VAR_7;
  }

  if (VAR_6 < VAR_1.romsize)
    return *(u16 *)(VAR_1.rom + VAR_6);

  return FUNC_2(VAR_6);
}
