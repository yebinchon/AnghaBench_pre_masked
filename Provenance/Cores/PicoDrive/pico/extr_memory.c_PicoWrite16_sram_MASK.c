
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int sram_reg; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {scalar_t__ end; scalar_t__ start; int flags; scalar_t__ data; int changed; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(u32 VAR_6, u32 VAR_7)
{
  if (VAR_6 > VAR_4.end || VAR_6 < VAR_4.start || !(VAR_1.m.sram_reg & VAR_3)) {
    FUNC_2(VAR_6, VAR_7);
    return;
  }

  FUNC_1(VAR_0, "sram w16 [%06x] %04x @ %06x", VAR_6, VAR_7 & 0xffff, VAR_5);
  if (VAR_4.flags & VAR_2)
  {
    FUNC_0(VAR_7);
  }
  else {

    u8 *VAR_8 = (u8 *)(VAR_4.data - VAR_4.start + VAR_6);
    if (*VAR_8 != (u8)VAR_7) {
      VAR_4.changed = 1;
      *VAR_8 = (u8)VAR_7;
    }
  }
}
