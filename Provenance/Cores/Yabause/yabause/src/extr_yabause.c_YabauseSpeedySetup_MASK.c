
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_19__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
typedef int Vdp2 ;
struct TYPE_30__ {int all; } ;
struct TYPE_29__ {int all; } ;
struct TYPE_28__ {int all; } ;
struct TYPE_27__ {int all; } ;
struct TYPE_34__ {int TVMD; int TVSTAT; int CYCA0L; int CYCA0U; int CYCA1L; int CYCA1U; int CYCB0L; int CYCB0U; int CYCB1L; int CYCB1U; int BGON; int PNCN0; int MPABN0; int MPCDN0; int BKTAL; int SPCTL; int PRINA; int CLOFEN; int COAR; int COAG; int COAB; TYPE_4__ ZMYN1; TYPE_3__ ZMXN1; TYPE_2__ ZMYN0; TYPE_1__ ZMXN0; } ;
struct TYPE_33__ {scalar_t__ emulatebios; } ;
struct TYPE_32__ {int all; } ;
struct TYPE_31__ {int HIRQ; int CR1; int CR2; int CR3; scalar_t__ CR4; } ;
struct TYPE_26__ {int status; int options; int repcnt; int ctrladdr; int track; int index; int FAD; int satauth; TYPE_5__ reg; scalar_t__ isdiskchanged; } ;
struct TYPE_25__ {int* R; int GBR; int VBR; int MACH; int MACL; int PR; TYPE_6__ SR; } ;
struct TYPE_24__ {TYPE_15__ regs; } ;
struct TYPE_23__ {int D0EN; int IST; int AIACK; int ASR0; int ASR1; int AREF; int RSEL; scalar_t__ D2AD; scalar_t__ D1AD; } ;
struct TYPE_22__ {scalar_t__ resd; } ;
struct TYPE_21__ {int COMREG; } ;
struct TYPE_20__ {int EDSR; int localX; int localY; int systemclipX2; int systemclipY2; } ;


 int FUNC_0 () ;
 TYPE_19__* VAR_0 ;
 TYPE_14__* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_14__*,TYPE_15__*) ;
 int FUNC_4 (TYPE_14__*,TYPE_15__*) ;
 TYPE_13__* VAR_2 ;
 TYPE_12__* VAR_3 ;
 TYPE_11__* VAR_4 ;
 TYPE_10__* VAR_5 ;
 TYPE_8__* VAR_6 ;
 int FUNC_5 (TYPE_8__*,int ,int) ;
 TYPE_7__ VAR_7 ;

void FUNC_6(void)
{
   u32 VAR_8;
   int VAR_9;

   if (VAR_7.emulatebios)
      FUNC_0();
   else
   {

      for (VAR_9 = 0; VAR_9 < 0x210; VAR_9+=4)
      {
         VAR_8 = FUNC_1(0x00000600+VAR_9);
         FUNC_2(0x06000000+VAR_9, VAR_8);
      }


      for (VAR_9 = 0; VAR_9 < 0x8E0; VAR_9+=4)
      {
         VAR_8 = FUNC_1(0x00000820+VAR_9);
         FUNC_2(0x06000220+VAR_9, VAR_8);
      }


      for (VAR_9 = 0; VAR_9 < 0x700; VAR_9+=4)
      {
         VAR_8 = FUNC_1(0x00001100+VAR_9);
         FUNC_2(0x06001100+VAR_9, VAR_8);
      }


      FUNC_2(0x06000234, 0x000002AC);
      FUNC_2(0x06000238, 0x000002BC);
      FUNC_2(0x0600023C, 0x00000350);
      FUNC_2(0x06000240, 0x32524459);
      FUNC_2(0x0600024C, 0x00000000);
      FUNC_2(0x06000268, FUNC_1(0x00001344));
      FUNC_2(0x0600026C, FUNC_1(0x00001348));
      FUNC_2(0x0600029C, FUNC_1(0x00001354));
      FUNC_2(0x060002C4, FUNC_1(0x00001104));
      FUNC_2(0x060002C8, FUNC_1(0x00001108));
      FUNC_2(0x060002CC, FUNC_1(0x0000110C));
      FUNC_2(0x060002D0, FUNC_1(0x00001110));
      FUNC_2(0x060002D4, FUNC_1(0x00001114));
      FUNC_2(0x060002D8, FUNC_1(0x00001118));
      FUNC_2(0x060002DC, FUNC_1(0x0000111C));
      FUNC_2(0x06000328, 0x000004C8);
      FUNC_2(0x0600032C, 0x00001800);


      for (VAR_9 = 0; VAR_9 < 0x80; VAR_9+=4)
         FUNC_2(0x06000A00+VAR_9, 0x0600083C);
   }




   VAR_0->reg.HIRQ = 0xFC1;
   VAR_0->isdiskchanged = 0;
   VAR_0->reg.CR1 = (VAR_0->status << 8) | ((VAR_0->options & 0xF) << 4) | (VAR_0->repcnt & 0xF);
   VAR_0->reg.CR2 = (VAR_0->ctrladdr << 8) | VAR_0->track;
   VAR_0->reg.CR3 = (VAR_0->index << 8) | ((VAR_0->FAD >> 16) & 0xFF);
   VAR_0->reg.CR4 = (u16) VAR_0->FAD;
   VAR_0->satauth = 4;


   FUNC_3(VAR_1, &VAR_1->regs);
   for (VAR_9 = 0; VAR_9 < 15; VAR_9++)
      VAR_1->regs.R[VAR_9] = 0x00000000;
   VAR_1->regs.R[15] = 0x06002000;
   VAR_1->regs.SR.all = 0x00000000;
   VAR_1->regs.GBR = 0x00000000;
   VAR_1->regs.VBR = 0x06000000;
   VAR_1->regs.MACH = 0x00000000;
   VAR_1->regs.MACL = 0x00000000;
   VAR_1->regs.PR = 0x00000000;
   FUNC_4(VAR_1, &VAR_1->regs);


   VAR_2->D1AD = VAR_2->D2AD = 0;
   VAR_2->D0EN = 0x101;
   VAR_2->IST = 0x2006;
   VAR_2->AIACK = 0x1;
   VAR_2->ASR0 = VAR_2->ASR1 = 0x1FF01FF0;
   VAR_2->AREF = 0x1F;
   VAR_2->RSEL = 0x1;


   VAR_4->COMREG = 0x10;
   VAR_3->resd = 0;


   VAR_5->EDSR = 3;
   VAR_5->localX = 160;
   VAR_5->localY = 112;
   VAR_5->systemclipX2 = 319;
   VAR_5->systemclipY2 = 223;


   FUNC_5(VAR_6, 0, sizeof(Vdp2));
   VAR_6->TVMD = 0x8000;
   VAR_6->TVSTAT = 0x020A;
   VAR_6->CYCA0L = 0x0F44;
   VAR_6->CYCA0U = 0xFFFF;
   VAR_6->CYCA1L = 0xFFFF;
   VAR_6->CYCA1U = 0xFFFF;
   VAR_6->CYCB0L = 0xFFFF;
   VAR_6->CYCB0U = 0xFFFF;
   VAR_6->CYCB1L = 0xFFFF;
   VAR_6->CYCB1U = 0xFFFF;
   VAR_6->BGON = 0x0001;
   VAR_6->PNCN0 = 0x8000;
   VAR_6->MPABN0 = 0x0303;
   VAR_6->MPCDN0 = 0x0303;
   VAR_6->ZMXN0.all = 0x00010000;
   VAR_6->ZMYN0.all = 0x00010000;
   VAR_6->ZMXN1.all = 0x00010000;
   VAR_6->ZMYN1.all = 0x00010000;
   VAR_6->BKTAL = 0x4000;
   VAR_6->SPCTL = 0x0020;
   VAR_6->PRINA = 0x0007;
   VAR_6->CLOFEN = 0x0001;
   VAR_6->COAR = 0x0200;
   VAR_6->COAG = 0x0200;
   VAR_6->COAB = 0x0200;
}
