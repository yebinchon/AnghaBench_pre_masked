
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* slot; } ;
struct TYPE_3__ {int ssctl; int sbctl; int lpctl; scalar_t__ krs; int mdy; int mdx; int mdl; scalar_t__ tl; scalar_t__ sdir; scalar_t__ swe; scalar_t__ rr; scalar_t__ lslnk; scalar_t__ ar; scalar_t__ eghold; scalar_t__ sr; scalar_t__ dr; scalar_t__ lea; scalar_t__ lsa; scalar_t__ sa; scalar_t__ pcm8b; } ;


 char* FUNC_0 (char*,char*,int,int) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,...) ;
 unsigned long VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_4 (int) ;

void
FUNC_5 (u8 VAR_2, char *VAR_3)
{
  u32 VAR_4 = VAR_2 * 0x20;

  FUNC_3 (VAR_3, "Sound Source = ");
  switch (VAR_1.slot[VAR_2].ssctl)
    {
    case 0:
      FUNC_3 (VAR_3, "External DRAM data\r\n");
      break;
    case 1:
      FUNC_3 (VAR_3, "Internal(Noise)\r\n");
      break;
    case 2:
      FUNC_3 (VAR_3, "Internal(0's)\r\n");
      break;
    default:
      FUNC_3 (VAR_3, "Invalid setting\r\n");
      break;
    }

  FUNC_3 (VAR_3, "Source bit = ");
  switch(VAR_1.slot[VAR_2].sbctl)
    {
    case 0:
      FUNC_3 (VAR_3, "No bit reversal\r\n");
      break;
    case 1:
      FUNC_3 (VAR_3, "Reverse other bits\r\n");
      break;
    case 2:
      FUNC_3 (VAR_3, "Reverse sign bit\r\n");
      break;
    case 3:
      FUNC_3 (VAR_3, "Reverse sign and other bits\r\n");
      break;
    }


  FUNC_3 (VAR_3, "Loop Mode = ");
  switch (VAR_1.slot[VAR_2].lpctl)
    {
    case 0:
      FUNC_3 (VAR_3, "Off\r\n");
      break;
    case 1:
      FUNC_3 (VAR_3, "Normal\r\n");
      break;
    case 2:
      FUNC_3 (VAR_3, "Reverse\r\n");
      break;
    case 3:
      FUNC_3 (VAR_3, "Alternating\r\n");
      break;
    }



  if (VAR_1.slot[VAR_2].pcm8b)
    {
      FUNC_3 (VAR_3, "8-bit samples\r\n");
    }
  else
    {
      FUNC_3 (VAR_3, "16-bit samples\r\n");
    }

  FUNC_3 (VAR_3, "Start Address = %05lX\r\n", (unsigned long)VAR_1.slot[VAR_2].sa);
  FUNC_3 (VAR_3, "Loop Start Address = %04lX\r\n", (unsigned long)VAR_1.slot[VAR_2].lsa >> VAR_0);
  FUNC_3 (VAR_3, "Loop End Address = %04lX\r\n", (unsigned long)VAR_1.slot[VAR_2].lea >> VAR_0);
  FUNC_3 (VAR_3, "Decay 1 Rate = %ld\r\n", (unsigned long)VAR_1.slot[VAR_2].dr);
  FUNC_3 (VAR_3, "Decay 2 Rate = %ld\r\n", (unsigned long)VAR_1.slot[VAR_2].sr);
  if (VAR_1.slot[VAR_2].eghold)
    FUNC_3 (VAR_3, "EG Hold Enabled\r\n");
  FUNC_3 (VAR_3, "Attack Rate = %ld\r\n", (unsigned long)VAR_1.slot[VAR_2].ar);

  if (VAR_1.slot[VAR_2].lslnk)
    FUNC_3 (VAR_3, "Loop Start Link Enabled\r\n");

  if (VAR_1.slot[VAR_2].krs != 0)
    FUNC_3 (VAR_3, "Key rate scaling = %ld\r\n", (unsigned long)VAR_1.slot[VAR_2].krs);

  FUNC_3 (VAR_3, "Decay Level = %d\r\n", (FUNC_4(VAR_4 + 0xA) >> 5) & 0x1F);
  FUNC_3 (VAR_3, "Release Rate = %ld\r\n", (unsigned long)VAR_1.slot[VAR_2].rr);

  if (VAR_1.slot[VAR_2].swe)
    FUNC_3 (VAR_3, "Stack Write Inhibited\r\n");

  if (VAR_1.slot[VAR_2].sdir)
    FUNC_3 (VAR_3, "Sound Direct Enabled\r\n");

  FUNC_3 (VAR_3, "Total Level = %ld\r\n", (unsigned long)VAR_1.slot[VAR_2].tl);

  FUNC_3 (VAR_3, "Modulation Level = %d\r\n", VAR_1.slot[VAR_2].mdl);
  FUNC_3 (VAR_3, "Modulation Input X = %d\r\n", VAR_1.slot[VAR_2].mdx);
  FUNC_3 (VAR_3, "Modulation Input Y = %d\r\n", VAR_1.slot[VAR_2].mdy);

  FUNC_3 (VAR_3, "Octave = %d\r\n", (FUNC_4(VAR_4 + 0x10) >> 11) & 0xF);
  FUNC_3 (VAR_3, "Frequency Number Switch = %d\r\n", FUNC_4(VAR_4 + 0x10) & 0x3FF);

  FUNC_3 (VAR_3, "LFO Reset = %s\r\n", ((FUNC_4(VAR_4 + 0x12) >> 15) & 0x1) ? "TRUE" : "FALSE");
  FUNC_3 (VAR_3, "LFO Frequency = %d\r\n", (FUNC_4(VAR_4 + 0x12) >> 10) & 0x1F);
  VAR_3 = FUNC_0 (VAR_3, "LFO Frequency modulation waveform = ",
                           (FUNC_4(VAR_4 + 0x12) >> 5) & 0x7,
                           (FUNC_4(VAR_4 + 0x12) >> 8) & 0x3);
  FUNC_3 (VAR_3, "LFO Frequency modulation level = %d\r\n", (FUNC_4(VAR_4 + 0x12) >> 5) & 0x7);
  VAR_3 = FUNC_0 (VAR_3, "LFO Amplitude modulation waveform = ",
                           FUNC_4(VAR_4 + 0x12) & 0x7,
                           (FUNC_4(VAR_4 + 0x12) >> 3) & 0x3);
  FUNC_3 (VAR_3, "LFO Amplitude modulation level = %d\r\n", FUNC_4(VAR_4 + 0x12) & 0x7);

  FUNC_3 (VAR_3, "Input mix level = ");
  VAR_3 = FUNC_1 (VAR_3, FUNC_4(VAR_4 + 0x14) & 0x7);
  FUNC_3 (VAR_3, "Input Select = %d\r\n", (FUNC_4(VAR_4 + 0x14) >> 3) & 0x1F);

  FUNC_3 (VAR_3, "Direct data send level = ");
  VAR_3 = FUNC_1 (VAR_3, (FUNC_4(VAR_4 + 0x16) >> 13) & 0x7);
  FUNC_3 (VAR_3, "Direct data panpot = ");
  VAR_3 = FUNC_2 (VAR_3, (FUNC_4(VAR_4 + 0x16) >> 8) & 0x1F);

  FUNC_3 (VAR_3, "Effect data send level = ");
  VAR_3 = FUNC_1 (VAR_3, (FUNC_4(VAR_4 + 0x16) >> 5) & 0x7);
  FUNC_3 (VAR_3, "Effect data panpot = ");
  VAR_3 = FUNC_2 (VAR_3, FUNC_4(VAR_4 + 0x16) & 0x1F);
}
