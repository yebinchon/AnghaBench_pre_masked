
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l; } ;
struct TYPE_4__ {int emu_status; TYPE_1__ pmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(int VAR_11)
{
 if (VAR_9 & VAR_4)
 {
  if (VAR_10.emu_status & VAR_6) {
   VAR_10.emu_status |= VAR_7;
   VAR_10.emu_status &= ~VAR_6;

  } else {
   FUNC_5(0, VAR_10.pmc.l);
   VAR_10.emu_status |= VAR_6;
  }
 }
 else
 {
  FUNC_1(1,7,0x484);
  FUNC_4();
  if (VAR_11 != 0x000e)
   FUNC_1(0, 7, 0x400+VAR_5*4);
  FUNC_3(1, 0, VAR_6);
  FUNC_0(VAR_0,VAR_3,0, 1, 1, 0, VAR_6);
  FUNC_0(VAR_1,VAR_2,0, 1, 1, 0, VAR_6);
  FUNC_0(VAR_1,VAR_3,0, 1, 1, 0, VAR_7);
  FUNC_2(1,7,0x484);
  VAR_8[0] = VAR_8[1] = -1;
 }
}
