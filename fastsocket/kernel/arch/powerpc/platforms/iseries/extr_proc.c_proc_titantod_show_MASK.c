
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {unsigned long xProcFreq; unsigned long xTimeBaseFreq; } ;


 int VAR_0 ;
 unsigned long FUNC_0 () ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_6, void *VAR_7)
{
 unsigned long VAR_8, VAR_9;

 VAR_8 = FUNC_1();
 VAR_9 = FUNC_0();

 FUNC_2(VAR_6, "Titan\n" );
 FUNC_2(VAR_6, "  time base =          %016lx\n", VAR_8);
 FUNC_2(VAR_6, "  titan tod =          %016lx\n", VAR_9);
 FUNC_2(VAR_6, "  xProcFreq =          %016x\n",
     VAR_5[0].xProcFreq);
 FUNC_2(VAR_6, "  xTimeBaseFreq =      %016x\n",
     VAR_5[0].xTimeBaseFreq);
 FUNC_2(VAR_6, "  tb_ticks_per_jiffy = %lu\n", VAR_3);
 FUNC_2(VAR_6, "  tb_ticks_per_usec  = %lu\n", VAR_4);

 if (!VAR_2) {
  VAR_2 = VAR_9;
  VAR_1 = VAR_8;
 } else {
  unsigned long VAR_10 = (VAR_9 - VAR_2) >> 12;
  unsigned long VAR_11 = (VAR_8 - VAR_1);
  unsigned long VAR_12 = VAR_10 / (1000000/VAR_0);
  unsigned long VAR_13 = VAR_12 * (1000000/VAR_0);
  unsigned long VAR_14 =
   VAR_10 - VAR_13;
  unsigned long VAR_15 = VAR_11 / VAR_3;
  unsigned long VAR_16 = VAR_15 * VAR_3;
  unsigned long VAR_17 = VAR_11 - VAR_16;
  unsigned long VAR_18 =
   VAR_17 / VAR_4;
  unsigned long VAR_19 =
   (VAR_11 * (1000000/VAR_0))/VAR_10;

  FUNC_2(VAR_6, "  titan elapsed = %lu uSec\n", VAR_10);
  FUNC_2(VAR_6, "  tb elapsed    = %lu ticks\n", VAR_11);
  FUNC_2(VAR_6, "  titan jiffies = %lu.%04lu \n", VAR_12,
      VAR_14);
  FUNC_2(VAR_6, "  tb jiffies    = %lu.%04lu\n", VAR_15,
      VAR_18);
  FUNC_2(VAR_6, "  new tb_ticks_per_jiffy = %lu\n",
      VAR_19);
 }

 return 0;
}
