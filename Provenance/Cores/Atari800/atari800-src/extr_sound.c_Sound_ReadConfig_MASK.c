
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int freq; int sample_size; int frag_frames; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

int FUNC_3(char *VAR_5, char *VAR_6)
{
 if (FUNC_2(VAR_5, "SOUND_ENABLED") == 0)
  return (VAR_2 = FUNC_0(VAR_6)) != -1;
 else if (FUNC_2(VAR_5, "SOUND_RATE") == 0)
  return (VAR_1.freq = FUNC_1(VAR_6)) != -1;
 else if (FUNC_2(VAR_5, "SOUND_BITS") == 0) {
  int VAR_7 = FUNC_1(VAR_6);
  if (VAR_7 != 8 && VAR_7 != 16)
   return VAR_0;
  VAR_1.sample_size = VAR_7 / 8;
 }
 else if (FUNC_2(VAR_5, "SOUND_FRAG_FRAMES") == 0) {
  int VAR_8 = FUNC_1(VAR_6);
  if (VAR_8 == -1)
   return VAR_0;
  VAR_1.frag_frames = VAR_8;
 }




 else
  return VAR_0;
 return VAR_4;
}
