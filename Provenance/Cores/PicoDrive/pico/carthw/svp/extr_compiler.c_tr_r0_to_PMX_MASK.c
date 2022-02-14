
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v; } ;
struct TYPE_4__ {int emu_status; int* pmac_write; TYPE_1__ pmc; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int* VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 (int,int) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(int VAR_8)
{
 if ((VAR_5 & VAR_0) && (VAR_6.emu_status & VAR_2))
 {
  VAR_6.pmac_write[VAR_8] = VAR_6.pmc.v;
  VAR_6.emu_status &= ~VAR_2;
  VAR_5 |= 1 << (25+VAR_8);
  VAR_3 |= 1 << (25+VAR_8);
  return;
 }

 if ((VAR_5 & VAR_0) && (VAR_5 & (1 << (25+VAR_8))))
 {
  int VAR_9, VAR_10;

  VAR_6.emu_status &= ~VAR_1;

  VAR_9 = VAR_6.pmac_write[VAR_8]>>16;
  VAR_10 = VAR_6.pmac_write[VAR_8]&0xffff;
  if ((VAR_9 & 0x43ff) == 0x0018)
  {
   int VAR_11 = FUNC_6(VAR_9);
   if (VAR_9 & 0x0400) FUNC_10();
   FUNC_0(1,7,0x490);
   FUNC_5(2, VAR_10 << 1);
   FUNC_2(0,1,2);
   VAR_6.pmac_write[VAR_8] += VAR_11;
  }
  else if ((VAR_9 & 0xfbff) == 0x4018)
  {
   if (VAR_9 & 0x0400) FUNC_10();
   FUNC_0(1,7,0x490);
   FUNC_5(2, VAR_10 << 1);
   FUNC_2(0,1,2);
   VAR_6.pmac_write[VAR_8] += (VAR_10&1) ? 31 : 1;
  }
  else if ((VAR_9 & 0x47ff) == 0x001c)
  {
   int VAR_12 = FUNC_6(VAR_9);
   FUNC_0(1,7,0x48c);
   FUNC_5(2, (VAR_10&0x3ff) << 1);
   FUNC_2(0,1,2);
   FUNC_1(1,0,1);
   FUNC_3(1,7,0x494);
   VAR_6.pmac_write[VAR_8] += VAR_12;
  }
  else
   FUNC_10();

  VAR_6.pmc.v = VAR_6.pmac_write[VAR_8];

  VAR_3 |= VAR_0;
  VAR_3 |= 1 << (25+VAR_8);
  VAR_4[1] = VAR_4[2] = -1;
  return;
 }

 VAR_5 &= ~VAR_0;
 VAR_3 &= ~VAR_0;
 VAR_5 &= ~(1 << (25+VAR_8));
 VAR_3 &= ~(1 << (25+VAR_8));


 FUNC_8();

 FUNC_9(1, VAR_8);
 FUNC_4(VAR_7);
 FUNC_7();
}
