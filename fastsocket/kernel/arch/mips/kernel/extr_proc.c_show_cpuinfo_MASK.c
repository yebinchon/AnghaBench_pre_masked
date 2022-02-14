
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {unsigned int processor_id; unsigned int fpu_id; int options; int udelay_val; int watch_reg_count; int core; int srsets; int * watch_reg_masks; int tlbsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (unsigned long,int ) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 () ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (char*,char*,char*) ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_18, void *VAR_19)
{
 unsigned long VAR_20 = (unsigned long) VAR_19 - 1;
 unsigned int VAR_21 = VAR_3[VAR_20].processor_id;
 unsigned int VAR_22 = VAR_3[VAR_20].fpu_id;
 char VAR_23 [64];
 int VAR_24;
 if (VAR_20 == 0)
  FUNC_2(VAR_18, "system type\t\t: %s\n", FUNC_1());

 FUNC_2(VAR_18, "processor\t\t: %ld\n", VAR_20);
 FUNC_3(VAR_23, "cpu model\t\t: %%s V%%d.%%d%s\n",
         VAR_3[VAR_20].options & VAR_1 ? "  FPU V%d.%d" : "");
 FUNC_2(VAR_18, VAR_23, VAR_2[VAR_20],
                            (VAR_21 >> 4) & 0x0f, VAR_21 & 0x0f,
                            (VAR_22 >> 4) & 0x0f, VAR_22 & 0x0f);
 FUNC_2(VAR_18, "BogoMIPS\t\t: %u.%02u\n",
               VAR_3[VAR_20].udelay_val / (500000/VAR_0),
               (VAR_3[VAR_20].udelay_val / (5000/VAR_0)) % 100);
 FUNC_2(VAR_18, "wait instruction\t: %s\n", VAR_15 ? "yes" : "no");
 FUNC_2(VAR_18, "microsecond timers\t: %s\n",
               VAR_4 ? "yes" : "no");
 FUNC_2(VAR_18, "tlb_entries\t\t: %d\n", VAR_3[VAR_20].tlbsize);
 FUNC_2(VAR_18, "extra interrupt vector\t: %s\n",
               VAR_5 ? "yes" : "no");
 FUNC_2(VAR_18, "hardware watchpoint\t: %s",
     VAR_13 ? "yes, " : "no\n");
 if (VAR_13) {
  FUNC_2(VAR_18, "count: %d, address/irw mask: [",
      VAR_3[VAR_20].watch_reg_count);
  for (VAR_24 = 0; VAR_24 < VAR_3[VAR_20].watch_reg_count; VAR_24++)
   FUNC_2(VAR_18, "%s0x%04x", VAR_24 ? ", " : "" ,
       VAR_3[VAR_20].watch_reg_masks[VAR_24]);
  FUNC_2(VAR_18, "]\n");
 }
 FUNC_2(VAR_18, "ASEs implemented\t:%s%s%s%s%s%s\n",
        VAR_8 ? " mips16" : "",
        VAR_7 ? " mdmx" : "",
        VAR_9 ? " mips3d" : "",
        VAR_11 ? " smartmips" : "",
        VAR_6 ? " dsp" : "",
        VAR_10 ? " mt" : ""
  );
 FUNC_2(VAR_18, "shadow register sets\t: %d\n",
         VAR_3[VAR_20].srsets);
 FUNC_2(VAR_18, "core\t\t\t: %d\n", VAR_3[VAR_20].core);

 FUNC_3(VAR_23, "VCE%%c exceptions\t\t: %s\n",
         VAR_12 ? "%u" : "not available");
 FUNC_2(VAR_18, VAR_23, 'D', VAR_16);
 FUNC_2(VAR_18, VAR_23, 'I', VAR_17);
 FUNC_2(VAR_18, "\n");

 return 0;
}
