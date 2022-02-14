
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int freq; unsigned int frag_frames; int channels; int sample_size; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_7(void)
{

 if (VAR_4 && VAR_6.freq < 8192)

  VAR_6.freq = 8192;
 else if (VAR_6.freq < 1000)

  VAR_6.freq = 1000;
 else if (VAR_6.freq > 65535)

  VAR_6.freq = 65535;


 if (VAR_6.frag_frames != 0) {

  unsigned int VAR_14 = 1;
  unsigned int VAR_15 = VAR_6.frag_frames;
  while (VAR_15 >>= 1)
   VAR_14 <<= 1;
  if (VAR_14 < VAR_6.frag_frames)
   VAR_14 <<= 1;
  VAR_6.frag_frames = VAR_14;

  if (VAR_6.frag_frames < 16)

   VAR_6.frag_frames = 16;
 }

 VAR_9 = VAR_6;
 if (!(VAR_7 = FUNC_1(&VAR_9)))
  return VAR_0;


 if ((VAR_4 && VAR_9.freq < 8192)
  || VAR_9.freq < 1000 || VAR_9.freq > 65535) {
  FUNC_0("%d frequency not supported", VAR_9.freq);
  FUNC_3();
  return VAR_0;
 }
 if (VAR_9.channels > VAR_1) {
  FUNC_0("%d channels not supported", VAR_9.channels);
  FUNC_3();
  return VAR_0;
 }

 VAR_5 = VAR_9.channels == 2;

 FUNC_6(VAR_12);
 VAR_13 = VAR_9.frag_frames * VAR_9.channels * VAR_9.sample_size;
 VAR_12 = FUNC_5(VAR_13);


 FUNC_2(VAR_3, VAR_9.freq, VAR_9.channels, VAR_9.sample_size == 2 ? VAR_2 : 0);





 VAR_6.freq = VAR_9.freq;
 VAR_6.sample_size = VAR_9.sample_size;
 VAR_6.channels = VAR_9.channels;






 VAR_11 = VAR_10;
 return VAR_10;
}
