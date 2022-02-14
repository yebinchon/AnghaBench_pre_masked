
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int audio_buf_info ;
struct TYPE_3__ {int frag_frames; int freq; int channels; int sample_size; } ;
typedef TYPE_1__ Sound_setup_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,int ,int*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;

int FUNC_5(Sound_setup_t *VAR_14)
{
 int VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_10)
  FUNC_1(VAR_12);

 VAR_12 = FUNC_3(VAR_13, VAR_3);
 if (VAR_12 == -1) {
  FUNC_4(VAR_13);
  return VAR_2;
 }

 if (VAR_14->frag_frames == 0)

  VAR_16 = VAR_14->freq / 50;
 else
  VAR_16 = VAR_14->frag_frames;
 VAR_16 *= VAR_14->channels * VAR_14->sample_size;




 VAR_17 = 0x7fff0000;
 {

  int VAR_18 = 1;
  int VAR_19 = VAR_16;
  while (VAR_19 >>= 1) {
   VAR_18 <<= 1;
   ++VAR_17;
  }
  if (VAR_18 < VAR_16)

   ++VAR_17;
 }
 if (FUNC_2(VAR_12, VAR_8, &VAR_17) == -1) {
  FUNC_0("%s: SNDCTL_DSP_SETFRAGMENT(%.8x) failed", VAR_13, VAR_17);
  FUNC_1(VAR_12);
  return VAR_2;
 }

 VAR_15 = VAR_14->sample_size == 2 ? VAR_0 : VAR_1;
 if (FUNC_2(VAR_12, VAR_7, &VAR_15) == -1) {
  FUNC_0("%s: SNDCTL_DSP_SETFMT(%i) failed", VAR_13, VAR_15);
  FUNC_1(VAR_12);
  return VAR_2;
 }
 if (VAR_15 == VAR_0)
  VAR_14->sample_size = 2;
 else if (VAR_15 == VAR_1)
  VAR_14->sample_size = 1;
 else {
  FUNC_0("%s: Obtained format %i not supported", VAR_13, VAR_15);
  FUNC_1(VAR_12);
  return VAR_2;
 }

 if (FUNC_2(VAR_12, VAR_4, &VAR_14->channels) == -1) {
  FUNC_0("%s: SNDCTL_DSP_CHANNELS(%u) failed", VAR_13, VAR_14->channels);
  FUNC_1(VAR_12);
  return VAR_2;
 }

 if (FUNC_2(VAR_12, VAR_9, &VAR_14->freq) == -1) {
  FUNC_0("%s: SNDCTL_DSP_SPEED(%u) failed", VAR_13, VAR_14->freq);
  FUNC_1(VAR_12);
  return VAR_2;
 }

 if (FUNC_2(VAR_12, VAR_5, &VAR_16) == -1) {
  FUNC_0("%s: SNDCTL_DSP_GETBLKSIZE failed", VAR_13);
  FUNC_1(VAR_12);
  return VAR_2;
 }

 VAR_14->frag_frames = VAR_16 / VAR_14->channels / VAR_14->sample_size;
 {
  audio_buf_info VAR_20;
  if (FUNC_2(VAR_12, VAR_6, &VAR_20) == -1) {
   FUNC_0("%s: cannot retrieve ospace", VAR_13);
   return 0;
  }




 }

 return VAR_11;
}
