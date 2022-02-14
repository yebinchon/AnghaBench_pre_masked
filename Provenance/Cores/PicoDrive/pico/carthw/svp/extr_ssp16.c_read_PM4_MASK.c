
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int emu_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static u32 FUNC_3(void)
{
 u32 VAR_6 = FUNC_2(4, 0, 0);

 if (VAR_6 == 0) {
  switch (FUNC_0()) {
   case 0x0854: VAR_5->emu_status |= VAR_3; FUNC_1(VAR_1, "det TIGHT loop: [30fe08]"); break;
   case 0x4f12: VAR_5->emu_status |= VAR_2; FUNC_1(VAR_1, "det TIGHT loop: [30fe06]"); break;
  }
 }

 if (VAR_6 != (u32)-1) return VAR_6;

 FUNC_1(VAR_1|VAR_0, "PM4 raw r %04x @ %04x", VAR_4, FUNC_0());
 return VAR_4;
}
