
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int freq; unsigned int channels; unsigned int sample_size; scalar_t__ frag_frames; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned int,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (double) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 () ;
 unsigned int VAR_3 ;
 int FUNC_7 (scalar_t__,scalar_t__,unsigned int) ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

__attribute__((used)) static void FUNC_8(void)
{
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;

 FUNC_1();

 VAR_12 = VAR_9 - VAR_8;


 {
  unsigned int VAR_14;
  VAR_14 = (FUNC_5() - VAR_3)*VAR_2.freq*VAR_2.channels*VAR_2.sample_size;
  if (VAR_12 < VAR_14)
   VAR_6 = 0;
  else
   VAR_6 = VAR_12 - VAR_14;
 }

 if (VAR_0 && VAR_6 > VAR_7) {
  FUNC_2();
  return;
 }


 VAR_11 = FUNC_3();
 VAR_10 = VAR_2.sample_size * VAR_11;


 if (VAR_10 > VAR_5 - VAR_12) {
  do {
   FUNC_2();

   FUNC_4((double)VAR_2.frag_frames / VAR_2.freq);
   FUNC_1();

   FUNC_6();

   VAR_12 = VAR_9 - VAR_8;
  } while (VAR_10 > VAR_5 - VAR_12);
 }
 VAR_13 = VAR_9 + VAR_10;
 if (VAR_13/VAR_5 == VAR_9/VAR_5)

  FUNC_7(VAR_4 + VAR_9%VAR_5, VAR_1, VAR_10);
 else {

  int VAR_15 = VAR_5 - VAR_9%VAR_5;
  FUNC_7(VAR_4 + VAR_9%VAR_5, VAR_1, VAR_15);
  FUNC_7(VAR_4, VAR_1 + VAR_15, VAR_10 - VAR_15);
 }

 VAR_9 = VAR_13;
 if (VAR_9 > VAR_8 + VAR_5)
  VAR_9 -= VAR_5;
 FUNC_2();
}
