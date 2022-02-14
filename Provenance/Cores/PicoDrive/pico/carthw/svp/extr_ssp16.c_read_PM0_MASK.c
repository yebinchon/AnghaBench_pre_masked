
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int emu_status; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static u32 FUNC_3(void)
{
 u32 VAR_4 = FUNC_2(0, 0, 0);
 if (VAR_4 != (u32)-1) return VAR_4;
 FUNC_1(VAR_0, "PM0 raw r %04x @ %04x", VAR_2, FUNC_0());
 VAR_4 = VAR_2;
 if (!(VAR_4 & 2) && (FUNC_0() == 0x800 || FUNC_0() == 0x1851E)) {
  VAR_3->emu_status |= VAR_1; FUNC_1(VAR_0, "det TIGHT loop: PM0");
 }
 VAR_2 &= ~2;
 return VAR_4;
}
