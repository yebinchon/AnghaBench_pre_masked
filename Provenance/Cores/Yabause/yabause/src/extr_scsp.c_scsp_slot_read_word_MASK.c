
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int kb; int sbctl; int ssctl; int lpctl; int pcm8b; int sa; int lsa; int lea; int d2r; int d1r; int hold; int ar; int unknown1; int ls; int krs; int dl; int rr; int unknown2; int si; int sd; int tl; int mdl; int mdxsl; int mdysl; int unknown3; int oct; int unknown4; int fns; int re; int lfof; int plfows; int plfos; int alfows; int alfos; int unknown5; int isel; int imxl; int disdl; int dipan; int efsdl; int efpan; } ;
struct Slot {TYPE_1__ regs; } ;
struct Scsp {struct Slot* slots; } ;



u16 FUNC_0(struct Scsp *VAR_0, u32 VAR_1)
{
   int VAR_2 = (VAR_1 >> 5) & 0x1f;
   struct Slot * VAR_3 = &VAR_0->slots[VAR_2];
   u32 VAR_4 = (VAR_1 - (0x20 * VAR_2));
   u16 VAR_5 = 0;

   switch (VAR_4 >> 1)
   {
   case 0:

      VAR_5 |= VAR_3->regs.kb << 11;
      VAR_5 |= VAR_3->regs.sbctl << 9;
      VAR_5 |= VAR_3->regs.ssctl << 7;
      VAR_5 |= VAR_3->regs.lpctl << 5;
      VAR_5 |= VAR_3->regs.pcm8b << 4;
      VAR_5 |= (VAR_3->regs.sa >> 16) & 0xf;
      break;
   case 1:
      VAR_5 = VAR_3->regs.sa & 0xffff;
      break;
   case 2:
      VAR_5 = VAR_3->regs.lsa;
      break;
   case 3:
      VAR_5 = VAR_3->regs.lea;
      break;
   case 4:
      VAR_5 |= VAR_3->regs.d2r << 11;
      VAR_5 |= VAR_3->regs.d1r << 6;
      VAR_5 |= VAR_3->regs.hold << 5;
      VAR_5 |= VAR_3->regs.ar;
      break;
   case 5:
      VAR_5 |= VAR_3->regs.unknown1 << 15;
      VAR_5 |= VAR_3->regs.ls << 14;
      VAR_5 |= VAR_3->regs.krs << 10;
      VAR_5 |= VAR_3->regs.dl << 5;
      VAR_5 |= VAR_3->regs.rr;
      break;
   case 6:
      VAR_5 |= VAR_3->regs.unknown2 << 10;
      VAR_5 |= VAR_3->regs.si << 9;
      VAR_5 |= VAR_3->regs.sd << 8;
      VAR_5 |= VAR_3->regs.tl;
      break;
   case 7:
      VAR_5 |= VAR_3->regs.mdl << 12;
      VAR_5 |= VAR_3->regs.mdxsl << 6;
      VAR_5 |= VAR_3->regs.mdysl;
      break;
   case 8:
      VAR_5 |= VAR_3->regs.unknown3 << 15;
      VAR_5 |= VAR_3->regs.oct << 11;
      VAR_5 |= VAR_3->regs.unknown4 << 10;
      VAR_5 |= VAR_3->regs.fns;
      break;
   case 9:
      VAR_5 |= VAR_3->regs.re << 15;
      VAR_5 |= VAR_3->regs.lfof << 10;
      VAR_5 |= VAR_3->regs.plfows << 8;
      VAR_5 |= VAR_3->regs.plfos << 5;
      VAR_5 |= VAR_3->regs.alfows << 3;
      VAR_5 |= VAR_3->regs.alfos;
      break;
   case 10:
      VAR_5 |= VAR_3->regs.unknown5 << 7;
      VAR_5 |= VAR_3->regs.isel << 3;
      VAR_5 |= VAR_3->regs.imxl;
      break;
   case 11:
      VAR_5 |= VAR_3->regs.disdl << 13;
      VAR_5 |= VAR_3->regs.dipan << 8;
      VAR_5 |= VAR_3->regs.efsdl << 5;
      VAR_5 |= VAR_3->regs.efpan;
      break;
   }
   return VAR_5;
}
