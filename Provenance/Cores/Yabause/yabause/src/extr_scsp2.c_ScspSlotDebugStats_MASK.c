
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {TYPE_1__* slot; } ;
struct TYPE_3__ {int ssctl; int sbctl; int lpctl; int efpan; int efsdl; int dipan; int disdl; int isel; int imxl; int alfos; int alfows; int plfos; int plfows; int lfof; scalar_t__ lfore; int fns; int oct; int mdy; int mdx; int mdl; int tl; scalar_t__ sdir; scalar_t__ stwinh; int rr; int sl; int krs; scalar_t__ lpslnk; int ar; scalar_t__ eghold; int sr; int dr; int lea; int lsa; scalar_t__ sa; scalar_t__ pcm8b; } ;


 char* FUNC_0 (char*,char*,int ,int ) ;
 char* FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*,...) ;
 TYPE_2__ VAR_0 ;

void FUNC_4(u8 VAR_1, char *VAR_2)
{
   FUNC_3(VAR_2, "Sound Source = ");
   switch (VAR_0.slot[VAR_1].ssctl)
   {
      case 0:
      {
         FUNC_3(VAR_2, "External DRAM data\r\n");
         break;
      }
      case 1:
      {
         FUNC_3(VAR_2, "Internal(Noise)\r\n");
         break;
      }
      case 2:
      {
         FUNC_3(VAR_2, "Internal(0's)\r\n");
         break;
      }
      default:
      {
         FUNC_3(VAR_2, "Invalid setting\r\n");
         break;
      }
   }
   FUNC_3(VAR_2, "Source bit = ");
   switch (VAR_0.slot[VAR_1].sbctl)
   {
      case 0:
      {
         FUNC_3(VAR_2, "No bit reversal\r\n");
         break;
      }
      case 1:
      {
         FUNC_3(VAR_2, "Reverse other bits\r\n");
         break;
      }
      case 2:
      {
         FUNC_3(VAR_2, "Reverse sign bit\r\n");
         break;
      }
      case 3:
      {
         FUNC_3(VAR_2, "Reverse sign and other bits\r\n");
         break;
      }
   }


   FUNC_3(VAR_2, "Loop Mode = ");
   switch (VAR_0.slot[VAR_1].lpctl)
   {
      case 0:
      {
         FUNC_3(VAR_2, "Off\r\n");
         break;
      }
      case 1:
      {
         FUNC_3(VAR_2, "Normal\r\n");
         break;
      }
      case 2:
      {
         FUNC_3(VAR_2, "Reverse\r\n");
         break;
      }
      case 3:
      {
         FUNC_3(VAR_2, "Alternating\r\n");
         break;
      }
   }

   if (VAR_0.slot[VAR_1].pcm8b)
   {
      FUNC_3(VAR_2, "8-bit samples\r\n");
   }
   else
   {
      FUNC_3(VAR_2, "16-bit samples\r\n");
   }

   FUNC_3(VAR_2, "Start Address = %05lX\r\n", (unsigned long)VAR_0.slot[VAR_1].sa);
   FUNC_3(VAR_2, "Loop Start Address = %04X\r\n", VAR_0.slot[VAR_1].lsa);
   FUNC_3(VAR_2, "Loop End Address = %04X\r\n", VAR_0.slot[VAR_1].lea);
   FUNC_3(VAR_2, "Decay 1 Rate = %d\r\n", VAR_0.slot[VAR_1].dr);
   FUNC_3(VAR_2, "Decay 2 Rate = %d\r\n", VAR_0.slot[VAR_1].sr);
   if (VAR_0.slot[VAR_1].eghold)
   {
      FUNC_3(VAR_2, "EG Hold Enabled\r\n");
   }
   FUNC_3(VAR_2, "Attack Rate = %d\r\n", VAR_0.slot[VAR_1].ar);

   if (VAR_0.slot[VAR_1].lpslnk)
   {
      FUNC_3(VAR_2, "Loop Start Link Enabled\r\n");
   }

   if (VAR_0.slot[VAR_1].krs != 0)
   {
      FUNC_3(VAR_2, "Key rate scaling = %d\r\n", VAR_0.slot[VAR_1].krs);
   }

   FUNC_3(VAR_2, "Decay Level = %d\r\n", VAR_0.slot[VAR_1].sl);
   FUNC_3(VAR_2, "Release Rate = %d\r\n", VAR_0.slot[VAR_1].rr);

   if (VAR_0.slot[VAR_1].stwinh)
   {
      FUNC_3(VAR_2, "Stack Write Inhibited\r\n");
   }

   if (VAR_0.slot[VAR_1].sdir)
   {
      FUNC_3(VAR_2, "Sound Direct Enabled\r\n");
   }

   FUNC_3(VAR_2, "Total Level = %d\r\n", VAR_0.slot[VAR_1].tl);

   FUNC_3(VAR_2, "Modulation Level = %d\r\n", VAR_0.slot[VAR_1].mdl);
   FUNC_3(VAR_2, "Modulation Input X = %d\r\n", VAR_0.slot[VAR_1].mdx);
   FUNC_3(VAR_2, "Modulation Input Y = %d\r\n", VAR_0.slot[VAR_1].mdy);

   FUNC_3(VAR_2, "Octave = %d\r\n", VAR_0.slot[VAR_1].oct);
   FUNC_3(VAR_2, "Frequency Number Switch = %d\r\n", VAR_0.slot[VAR_1].fns);

   FUNC_3(VAR_2, "LFO Reset = %s\r\n", VAR_0.slot[VAR_1].lfore ? "TRUE" : "FALSE");
   FUNC_3(VAR_2, "LFO Frequency = %d\r\n", VAR_0.slot[VAR_1].lfof);
   VAR_2 = FUNC_0(VAR_2, "LFO Frequency modulation waveform =",
                           VAR_0.slot[VAR_1].plfos, VAR_0.slot[VAR_1].plfows);
   FUNC_3(VAR_2, "LFO Frequency modulation level = %d\r\n", VAR_0.slot[VAR_1].plfos);
   VAR_2 = FUNC_0(VAR_2, "LFO Amplitude modulation waveform =",
                           VAR_0.slot[VAR_1].alfos, VAR_0.slot[VAR_1].alfows);
   FUNC_3(VAR_2, "LFO Amplitude modulation level = %d\r\n", VAR_0.slot[VAR_1].alfos);

   FUNC_3(VAR_2, "Input mix level = ");
   VAR_2 = FUNC_1(VAR_2, VAR_0.slot[VAR_1].imxl);
   FUNC_3(VAR_2, "Input Select = %d\r\n", VAR_0.slot[VAR_1].isel);

   FUNC_3(VAR_2, "Direct data send level = ");
   VAR_2 = FUNC_1(VAR_2, VAR_0.slot[VAR_1].disdl);
   FUNC_3(VAR_2, "Direct data panpot = ");
   VAR_2 = FUNC_2(VAR_2, VAR_0.slot[VAR_1].dipan);

   FUNC_3(VAR_2, "Effect data send level = ");
   VAR_2 = FUNC_1(VAR_2, VAR_0.slot[VAR_1].efsdl);
   FUNC_3(VAR_2, "Effect data panpot = ");
   VAR_2 = FUNC_2(VAR_2, VAR_0.slot[VAR_1].efpan);
}
