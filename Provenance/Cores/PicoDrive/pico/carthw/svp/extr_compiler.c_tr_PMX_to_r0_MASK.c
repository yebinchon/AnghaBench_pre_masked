
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int v; } ;
struct TYPE_4__ {int emu_status; int* pmac_read; TYPE_1__ pmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int,int,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int* VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(int VAR_13)
{
 if ((VAR_10 & VAR_3) && (VAR_11.emu_status & VAR_5))
 {
  VAR_11.pmac_read[VAR_13] = VAR_11.pmc.v;
  VAR_11.emu_status &= ~VAR_5;
  VAR_10 |= 1 << (20+VAR_13);
  VAR_8 |= 1 << (20+VAR_13);
  return;
 }

 if ((VAR_10 & VAR_3) && (VAR_10 & (1 << (20+VAR_13))))
 {
  u32 VAR_14 = VAR_11.pmac_read[VAR_13];
  int VAR_15 = VAR_14>>16;
  VAR_11.emu_status &= ~VAR_4;

  if ((VAR_15 & 0xfff0) == 0x0800)
  {
   FUNC_2(1,7,0x488);
   FUNC_6(0, (VAR_14&0xfffff)<<1);
   FUNC_1(0,1,0);
   VAR_11.pmac_read[VAR_13] += 1;
  }
  else if ((VAR_15 & 0x47ff) == 0x0018)
  {
   int VAR_16 = FUNC_7(VAR_15);
   FUNC_2(1,7,0x490);
   FUNC_6(0, (VAR_14&0xffff)<<1);
   FUNC_1(0,1,0);
   if (VAR_13 == 4 && (VAR_14 == 0x187f03 || VAR_14 == 0x187f04))
   {
    int VAR_17 = (VAR_14 == 0x187f03) ? VAR_6 : VAR_7;
    FUNC_9();
    FUNC_2(1,7,0x484);
    FUNC_4(0,0);
    FUNC_0(VAR_0,VAR_2,0,11,11,22/2,1);
    FUNC_0(VAR_0,VAR_1,0, 1, 1,24/2,VAR_17>>8);
    FUNC_3(1,7,0x484);
   }
   VAR_11.pmac_read[VAR_13] += VAR_16;
  }
  else
  {
   FUNC_11();
  }
  VAR_11.pmc.v = VAR_11.pmac_read[VAR_13];

  VAR_8 |= VAR_3;
  VAR_8 |= 1 << (20+VAR_13);
  VAR_9[0] = VAR_9[1] = -1;
  return;
 }

 VAR_10 &= ~VAR_3;
 VAR_8 &= ~VAR_3;
 VAR_10 &= ~(1 << (20+VAR_13));
 VAR_8 &= ~(1 << (20+VAR_13));


 FUNC_9();

 FUNC_10(0, VAR_13);
 FUNC_5(VAR_12);
 FUNC_8();
}
