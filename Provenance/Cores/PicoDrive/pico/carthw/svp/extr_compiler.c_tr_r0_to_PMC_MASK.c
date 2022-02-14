
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int l; int v; } ;
struct TYPE_4__ {int emu_status; TYPE_1__ pmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int,int ,int,int ,int ,int,int) ;
 int FUNC_2 (int ,int ,int ,int,int,int ,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int,int ) ;
 int* VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(int VAR_12)
{
 if ((VAR_10 & VAR_4) && VAR_12 != -1)
 {
  if (VAR_11.emu_status & VAR_6) {
   VAR_11.emu_status |= VAR_7;
   VAR_11.emu_status &= ~VAR_6;
   VAR_11.pmc.h = VAR_12;
  } else {
   VAR_11.emu_status |= VAR_6;
   VAR_11.pmc.l = VAR_12;
  }
 }
 else
 {
  FUNC_7();
  if (VAR_10 & VAR_4) {
   FUNC_6(1, VAR_11.pmc.v);
   FUNC_4(1,7,0x400+VAR_5*4);
   VAR_10 &= ~VAR_4;
   VAR_8 &= ~VAR_4;
  }
  FUNC_3(1,7,0x484);
  FUNC_0(2,7,24/2,4);
  FUNC_5(1, 0, VAR_6);
  FUNC_1(VAR_0,1,0,2,0,0,1,VAR_5*4);
  FUNC_1(VAR_1,1,0,2,0,0,1,VAR_5*4+2);
  FUNC_2(VAR_0,VAR_3,0, 1, 1, 0, VAR_6);
  FUNC_2(VAR_1,VAR_2,0, 1, 1, 0, VAR_6);
  FUNC_2(VAR_1,VAR_3,0, 1, 1, 0, VAR_7);
  FUNC_4(1,7,0x484);
  VAR_9[1] = VAR_9[2] = -1;
 }
}
