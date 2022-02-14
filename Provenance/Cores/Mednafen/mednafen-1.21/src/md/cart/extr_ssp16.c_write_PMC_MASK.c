
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {void* l; void* h; } ;
struct TYPE_3__ {int emu_status; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,void*,int ) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_2(u32 VAR_5)
{
 if (VAR_4->emu_status & VAR_1) {


  VAR_4->emu_status |= VAR_2;
  VAR_4->emu_status &= ~VAR_1;
  VAR_3.h = VAR_5;
  FUNC_1(VAR_0, "PMC w m %04x @ %04x", VAR_3.h, FUNC_0());
 } else {
  VAR_4->emu_status |= VAR_1;
  VAR_3.l = VAR_5;
  FUNC_1(VAR_0, "PMC w a %04x @ %04x", VAR_3.l, FUNC_0());
 }
}
