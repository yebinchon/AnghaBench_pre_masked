
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pt_regs {unsigned long epsw; scalar_t__ lar; scalar_t__ pc; } ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static void FUNC_2(struct pt_regs *VAR_2, uint32_t VAR_3)
{
 unsigned long VAR_4 = VAR_2->epsw;
 unsigned long VAR_5;

 FUNC_1("MOV_Lcc %x [flags=%lx]", VAR_3, VAR_4 & 0xf);


 VAR_5 = ((VAR_4 >> 3) ^ VAR_4 >> 1) & 1;

 switch (VAR_3 & 0xf) {
 case 0x0:
  if (VAR_5)
   goto take_the_loop;
  return;
 case 0x1:
  if (!((VAR_4 & VAR_1) | VAR_5))
   goto take_the_loop;
  return;
 case 0x2:
  if (!VAR_5)
   goto take_the_loop;
  return;
 case 0x3:
  if ((VAR_4 & VAR_1) | VAR_5)
   goto take_the_loop;
  return;

 case 0x4:
  if (VAR_4 & VAR_0)
   goto take_the_loop;
  return;
 case 0x5:
  if (!(VAR_4 & (VAR_0 | VAR_1)))
   goto take_the_loop;
  return;
 case 0x6:
  if (!(VAR_4 & VAR_0))
   goto take_the_loop;
  return;
 case 0x7:
  if (VAR_4 & (VAR_0 | VAR_1))
   goto take_the_loop;
  return;

 case 0x8:
  if (VAR_4 & VAR_1)
   goto take_the_loop;
  return;
 case 0x9:
  if (!(VAR_4 & VAR_1))
   goto take_the_loop;
  return;
 case 0xa:
  goto take_the_loop;

 default:
  FUNC_0();
 }

take_the_loop:

 FUNC_1("loop LAR=%lx", VAR_2->lar);
 VAR_2->pc = VAR_2->lar - 4;
}
