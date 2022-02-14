
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int l; } ;
struct TYPE_3__ {int emu_status; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,char,int ) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static u32 FUNC_2(void)
{
 FUNC_1(VAR_0, "PMC r a %04x (st %c) @ %04x", VAR_3.l,
  (VAR_4->emu_status & VAR_1) ? 'm' : 'a', FUNC_0());
 if (VAR_4->emu_status & VAR_1) {


  VAR_4->emu_status |= VAR_2;
  VAR_4->emu_status &= ~VAR_1;
  return ((VAR_3.l << 4) & 0xfff0) | ((VAR_3.l >> 4) & 0xf);
 } else {
  VAR_4->emu_status |= VAR_1;
  return VAR_3.l;
 }
}
