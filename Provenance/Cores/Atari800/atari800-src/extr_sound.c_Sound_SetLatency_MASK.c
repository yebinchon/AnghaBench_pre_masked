
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int channels; unsigned int sample_size; int freq; int frag_frames; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (unsigned int) ;
 unsigned int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;

void FUNC_5(unsigned int VAR_10)
{
 VAR_1 = VAR_10;
 if (VAR_0) {

  enum { SYNC_BUFFER_FRAGS = 5 };
  unsigned int VAR_11 = VAR_2.channels * VAR_2.sample_size;
  unsigned int VAR_12 = VAR_2.freq*VAR_1/1000;
  FUNC_0();
  VAR_5 = (VAR_12 + SYNC_BUFFER_FRAGS*VAR_2.frag_frames) * VAR_11;
  VAR_7 = VAR_12 * VAR_11;
  VAR_6 = VAR_7 + VAR_2.frag_frames * VAR_11;
  VAR_3 = VAR_7;
  VAR_8 = 0;
  VAR_9 = VAR_7;
  FUNC_3(VAR_4);
  VAR_4 = FUNC_2(VAR_5);
  FUNC_4(VAR_4, 0, VAR_5);
  FUNC_1();
 }
}
