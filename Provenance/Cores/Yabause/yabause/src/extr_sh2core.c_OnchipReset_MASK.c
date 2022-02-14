
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int all; } ;
struct TYPE_16__ {int all; } ;
struct TYPE_15__ {int all; } ;
struct TYPE_14__ {int all; } ;
struct TYPE_13__ {int all; } ;
struct TYPE_12__ {int all; } ;
struct TYPE_11__ {int all; } ;
struct TYPE_18__ {int SMR; int BRR; int SCR; int TDR; int SSR; int RDR; int TIER; int FTCSR; int OCRA; int OCRB; int TCR; int TOCR; int FICR; int IPRB; int VCRA; int VCRB; int VCRC; int VCRD; int DRCR0; int DRCR1; int WTCSR; int WTCNT; int RSTCSR; int SBYCR; int CCR; int ICR; int IPRA; int VCRWDT; int DVCR; int VCRDIV; int BBRA; int BBRB; int BRCR; int CHCR0; int CHCR1; int DMAOR; int BCR1; int BCR2; int WCR; int MCR; int RTCSR; int RTCNT; int RTCOR; TYPE_7__ BDMRB; TYPE_6__ BDRB; TYPE_5__ BAMRB; TYPE_4__ BARB; TYPE_3__ BAMRA; TYPE_2__ BARA; TYPE_1__ FRC; } ;
struct TYPE_19__ {TYPE_8__ onchip; } ;
typedef TYPE_9__ SH2_struct ;



void FUNC_0(SH2_struct *VAR_0) {
   VAR_0->onchip.SMR = 0x00;
   VAR_0->onchip.BRR = 0xFF;
   VAR_0->onchip.SCR = 0x00;
   VAR_0->onchip.TDR = 0xFF;
   VAR_0->onchip.SSR = 0x84;
   VAR_0->onchip.RDR = 0x00;
   VAR_0->onchip.TIER = 0x01;
   VAR_0->onchip.FTCSR = 0x00;
   VAR_0->onchip.FRC.all = 0x0000;
   VAR_0->onchip.OCRA = 0xFFFF;
   VAR_0->onchip.OCRB = 0xFFFF;
   VAR_0->onchip.TCR = 0x00;
   VAR_0->onchip.TOCR = 0xE0;
   VAR_0->onchip.FICR = 0x0000;
   VAR_0->onchip.IPRB = 0x0000;
   VAR_0->onchip.VCRA = 0x0000;
   VAR_0->onchip.VCRB = 0x0000;
   VAR_0->onchip.VCRC = 0x0000;
   VAR_0->onchip.VCRD = 0x0000;
   VAR_0->onchip.DRCR0 = 0x00;
   VAR_0->onchip.DRCR1 = 0x00;
   VAR_0->onchip.WTCSR = 0x18;
   VAR_0->onchip.WTCNT = 0x00;
   VAR_0->onchip.RSTCSR = 0x1F;
   VAR_0->onchip.SBYCR = 0x60;
   VAR_0->onchip.CCR = 0x00;
   VAR_0->onchip.ICR = 0x0000;
   VAR_0->onchip.IPRA = 0x0000;
   VAR_0->onchip.VCRWDT = 0x0000;
   VAR_0->onchip.DVCR = 0x00000000;
   VAR_0->onchip.VCRDIV = 0x00000000;
   VAR_0->onchip.BARA.all = 0x00000000;
   VAR_0->onchip.BAMRA.all = 0x00000000;
   VAR_0->onchip.BBRA = 0x0000;
   VAR_0->onchip.BARB.all = 0x00000000;
   VAR_0->onchip.BAMRB.all = 0x00000000;
   VAR_0->onchip.BDRB.all = 0x00000000;
   VAR_0->onchip.BDMRB.all = 0x00000000;
   VAR_0->onchip.BBRB = 0x0000;
   VAR_0->onchip.BRCR = 0x0000;
   VAR_0->onchip.CHCR0 = 0x00000000;
   VAR_0->onchip.CHCR1 = 0x00000000;
   VAR_0->onchip.DMAOR = 0x00000000;
   VAR_0->onchip.BCR1 &= 0x8000;
   VAR_0->onchip.BCR1 |= 0x03F0;
   VAR_0->onchip.BCR2 = 0x00FC;
   VAR_0->onchip.WCR = 0xAAFF;
   VAR_0->onchip.MCR = 0x0000;
   VAR_0->onchip.RTCSR = 0x0000;
   VAR_0->onchip.RTCNT = 0x0000;
   VAR_0->onchip.RTCOR = 0x0000;
}
