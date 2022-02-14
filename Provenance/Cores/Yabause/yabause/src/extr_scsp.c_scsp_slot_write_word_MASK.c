
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int kb; int sbctl; int ssctl; int lpctl; int pcm8b; int sa; int lsa; int lea; int d2r; int d1r; int hold; int ar; int unknown1; int ls; int krs; int dl; int rr; int unknown2; int si; int sd; int tl; int mdl; int mdxsl; int mdysl; int unknown3; int unknown4; int oct; int fns; int re; int lfof; int plfows; int plfos; int alfows; int alfos; int unknown5; int isel; int imxl; int disdl; int dipan; int efsdl; int efpan; } ;
struct Slot {TYPE_1__ regs; } ;
struct Scsp {struct Slot* slots; } ;


 int FUNC_0 (struct Scsp*) ;

void FUNC_1(struct Scsp *VAR_0, u32 VAR_1, u16 VAR_2)
{
   int VAR_3 = (VAR_1 >> 5) & 0x1f;
   struct Slot * VAR_4 = &VAR_0->slots[VAR_3];
   u32 VAR_5 = (VAR_1 - (0x20 * VAR_3));

   switch (VAR_5 >> 1)
   {
   case 0:
      VAR_4->regs.kb = (VAR_2 >> 11) & 1;

      if (VAR_2 & (1 << 12))
         FUNC_0(VAR_0);

      VAR_4->regs.sbctl = (VAR_2 >> 9) & 3;
      VAR_4->regs.ssctl = (VAR_2 >> 7) & 3;
      VAR_4->regs.lpctl = (VAR_2 >> 5) & 3;
      VAR_4->regs.pcm8b = (VAR_2 >> 4) & 1;
      VAR_4->regs.sa = (VAR_4->regs.sa & 0xffff) | ((VAR_2 & 0xf) << 16);
      break;
   case 1:
      VAR_4->regs.sa = (VAR_4->regs.sa & 0xf0000) | VAR_2;
      break;
   case 2:
      VAR_4->regs.lsa = VAR_2;
      break;
   case 3:
      VAR_4->regs.lea = VAR_2;
      break;
   case 4:
      VAR_4->regs.d2r = VAR_2 >> 11;
      VAR_4->regs.d1r = (VAR_2 >> 6) & 0x1f;
      VAR_4->regs.hold = (VAR_2 >> 5) & 1;
      VAR_4->regs.ar = VAR_2 & 0x1f;
      break;
   case 5:
      VAR_4->regs.unknown1 = (VAR_2 >> 15) & 1;
      VAR_4->regs.ls = (VAR_2 >> 14) & 1;
      VAR_4->regs.krs = (VAR_2 >> 10) & 0xf;
      VAR_4->regs.dl = (VAR_2 >> 5) & 0x1f;
      VAR_4->regs.rr = VAR_2 & 0x1f;
      break;
   case 6:
      VAR_4->regs.unknown2 = (VAR_2 >> 10) & 3;
      VAR_4->regs.si = (VAR_2 >> 9) & 1;
      VAR_4->regs.sd = (VAR_2 >> 8) & 1;
      VAR_4->regs.tl = VAR_2 & 0xff;
      break;
   case 7:
      VAR_4->regs.mdl = (VAR_2 >> 12) & 0xf;
      VAR_4->regs.mdxsl = (VAR_2 >> 6) & 0x3f;
      VAR_4->regs.mdysl = VAR_2 & 0x3f;
      break;
   case 8:
      VAR_4->regs.unknown3 = (VAR_2 >> 15) & 1;
      VAR_4->regs.unknown4 = (VAR_2 >> 10) & 1;
      VAR_4->regs.oct = (VAR_2 >> 11) & 0xf;
      VAR_4->regs.fns = VAR_2 & 0x3ff;
      break;
   case 9:
      VAR_4->regs.re = (VAR_2 >> 15) & 1;
      VAR_4->regs.lfof = (VAR_2 >> 10) & 0x1f;
      VAR_4->regs.plfows = (VAR_2 >> 8) & 3;
      VAR_4->regs.plfos = (VAR_2 >> 5) & 7;
      VAR_4->regs.alfows = (VAR_2 >> 3) & 3;
      VAR_4->regs.alfos = VAR_2 & 7;
      break;
   case 10:
      VAR_4->regs.unknown5 = (VAR_2 >> 7) & 1;
      VAR_4->regs.isel = (VAR_2 >> 3) & 0xf;
      VAR_4->regs.imxl = VAR_2 & 7;
      break;
   case 11:
      VAR_4->regs.disdl = (VAR_2 >> 13) & 7;
      VAR_4->regs.dipan = (VAR_2 >> 8) & 0x1f;
      VAR_4->regs.efsdl = (VAR_2 >> 5) & 7;
      VAR_4->regs.efpan = VAR_2 & 0x1f;
      break;
   default:
      break;
   }
}
