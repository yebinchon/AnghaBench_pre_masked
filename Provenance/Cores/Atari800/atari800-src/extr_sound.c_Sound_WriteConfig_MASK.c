
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int freq; int sample_size; int frag_frames; } ;
typedef int FILE ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;

void FUNC_1(FILE *VAR_3)
{
 FUNC_0(VAR_3, "SOUND_ENABLED=%u\n", VAR_1);
 FUNC_0(VAR_3, "SOUND_RATE=%u\n", VAR_0.freq);
 FUNC_0(VAR_3, "SOUND_BITS=%u\n", VAR_0.sample_size * 8);
 FUNC_0(VAR_3, "SOUND_FRAG_FRAMES=%u\n", VAR_0.frag_frames);



}
