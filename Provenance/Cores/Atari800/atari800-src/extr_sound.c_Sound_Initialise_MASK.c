
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int freq; int sample_size; int frag_frames; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

int FUNC_3(int *VAR_5, char *VAR_6[])
{
 int VAR_7, VAR_8;
 int VAR_9 = VAR_0;

 for (VAR_7 = VAR_8 = 1; VAR_7 < *VAR_5; VAR_7++) {
  int VAR_10 = (VAR_7 + 1 < *VAR_5);
  int VAR_11 = VAR_0;
  int VAR_12 = VAR_0;

  if (FUNC_2(VAR_6[VAR_7], "-sound") == 0)
   VAR_2 = 1;
  else if (FUNC_2(VAR_6[VAR_7], "-nosound") == 0)
   VAR_2 = 0;
  else if (FUNC_2(VAR_6[VAR_7], "-dsprate") == 0) {
   if (VAR_10)
    VAR_12 = (VAR_1.freq = FUNC_1(VAR_6[++VAR_7])) == -1;
   else VAR_11 = VAR_4;
  }
  else if (FUNC_2(VAR_6[VAR_7], "-audio16") == 0)
   VAR_1.sample_size = 2;
  else if (FUNC_2(VAR_6[VAR_7], "-audio8") == 0)
   VAR_1.sample_size = 1;
  else if (FUNC_2(VAR_6[VAR_7], "snd-fragsize") == 0) {
   if (VAR_10) {
    int VAR_13 = FUNC_1(VAR_6[++VAR_7]);
    if (VAR_13 == -1)
     VAR_12 = VAR_4;
    else
     VAR_1.frag_frames = VAR_13;
   }
   else VAR_11 = VAR_4;
  }






  else {
   if (FUNC_2(VAR_6[VAR_7], "-help") == 0) {
    VAR_9 = VAR_4;
    FUNC_0("\t-sound               Enable sound");
    FUNC_0("\t-nosound             Disable sound");
    FUNC_0("\t-dsprate <rate>      Set sound output frequency in Hz");
    FUNC_0("\t-audio16             Set sound output format to 16-bit");
    FUNC_0("\t-audio8              Set sound output format to 8-bit");
    FUNC_0("\t-snd-fragsize <num>  Set size of the hardware sound buffer (fragment size)");



   }
   VAR_6[VAR_8++] = VAR_6[VAR_7];
  }

  if (VAR_11) {
   FUNC_0("Missing argument for '%s'", VAR_6[VAR_7]);
   return VAR_0;
  } else if (VAR_12) {
   FUNC_0("Invalid argument for '%s'", VAR_6[--VAR_7]);
   return VAR_0;
  }
 }
 *VAR_5 = VAR_8;

 if (VAR_9)
  VAR_2 = VAR_0;

 return VAR_4;
}
