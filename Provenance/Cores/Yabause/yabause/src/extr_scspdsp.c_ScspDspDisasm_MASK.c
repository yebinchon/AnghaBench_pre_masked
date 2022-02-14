
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int coef; int masa; int ewa; int shift; int ysel; int ira; int iwa; int tra; int twa; int unknown3; scalar_t__ unknown2; scalar_t__ unknown; scalar_t__ twt; scalar_t__ iwt; scalar_t__ xsel; scalar_t__ bsel; scalar_t__ zero; scalar_t__ negb; scalar_t__ yrl; scalar_t__ frcl; scalar_t__ adrl; scalar_t__ ewt; scalar_t__ mrd; scalar_t__ mwt; scalar_t__ table; scalar_t__ nxadr; scalar_t__ adreb; scalar_t__ nofl; } ;
union ScspDspInstruction {scalar_t__ all; TYPE_1__ part; } ;
typedef size_t u8 ;
struct TYPE_4__ {scalar_t__* mpro; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*) ;

void FUNC_2(u8 VAR_1, char *VAR_2)
{
   union ScspDspInstruction VAR_3;

   VAR_3.all = VAR_0.mpro[VAR_1];

   FUNC_0(VAR_2, "%02X: ", VAR_1);
   VAR_2 += FUNC_1(VAR_2);

   if (VAR_3.all == 0)
   {
      FUNC_0(VAR_2, "nop ");
      VAR_2 += FUNC_1(VAR_2);
      return;
   }

   if (VAR_3.part.nofl)
   {
      FUNC_0(VAR_2, "nofl ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.coef)
   {
      FUNC_0(VAR_2, "coef %02X ", (unsigned int)(VAR_3.part.coef & 0x3F));
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.masa)
   {
      FUNC_0(VAR_2, "masa %02X ", (unsigned int)(VAR_3.part.masa & 0x1F));
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.adreb)
   {
      FUNC_0(VAR_2, "adreb ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.nxadr)
   {
      FUNC_0(VAR_2, "nxadr ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.table)
   {
      FUNC_0(VAR_2, "table ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.mwt)
   {
      FUNC_0(VAR_2, "mwt ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.mrd)
   {
      FUNC_0(VAR_2, "mrd ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.ewt)
   {
      FUNC_0(VAR_2, "ewt ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.ewa)
   {
      FUNC_0(VAR_2, "ewa %01X ", (unsigned int)(VAR_3.part.ewa & 0xf));
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.adrl)
   {
      FUNC_0(VAR_2, "adrl ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.frcl)
   {
      FUNC_0(VAR_2, "frcl ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.shift)
   {
      FUNC_0(VAR_2, "shift %d ", (int)(VAR_3.part.shift & 3));
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.yrl)
   {
      FUNC_0(VAR_2, "yrl ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.negb)
   {
      FUNC_0(VAR_2, "negb ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.zero)
   {
      FUNC_0(VAR_2, "zero ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.bsel)
   {
      FUNC_0(VAR_2, "bsel ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.xsel)
   {
      FUNC_0(VAR_2, "xsel ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.ysel)
   {
      FUNC_0(VAR_2, "ysel %d ", (int)(VAR_3.part.ysel & 3));
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.ira)
   {
      FUNC_0(VAR_2, "ira %02X ", (int)(VAR_3.part.ira & 0x3F));
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.iwt)
   {
      FUNC_0(VAR_2, "iwt ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.iwa)
   {
      FUNC_0(VAR_2, "iwa %02X ", (unsigned int)(VAR_3.part.iwa & 0x1F));
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.tra)
   {
      FUNC_0(VAR_2, "tra %02X ", (unsigned int)(VAR_3.part.tra & 0x7F));
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.twt)
   {
      FUNC_0(VAR_2, "twt ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.twa)
   {
      FUNC_0(VAR_2, "twa %02X ", (unsigned int)(VAR_3.part.twa & 0x7F));
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.unknown)
   {
      FUNC_0(VAR_2, "unknown ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.unknown2)
   {
      FUNC_0(VAR_2, "unknown2 ");
      VAR_2 += FUNC_1(VAR_2);
   }

   if (VAR_3.part.unknown3)
   {
      FUNC_0(VAR_2, "unknown3 %d", (int)(VAR_3.part.unknown3 & 3));
      VAR_2 += FUNC_1(VAR_2);
   }
}
