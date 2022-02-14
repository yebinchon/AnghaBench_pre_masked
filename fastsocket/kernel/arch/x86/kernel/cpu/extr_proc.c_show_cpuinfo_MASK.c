
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cpuinfo_x86 {unsigned int cpu_index; char* x86_vendor_id; char* x86_model_id; scalar_t__ cpuid_level; int loops_per_jiffy; int x86_power; int x86_virt_bits; int x86_phys_bits; int x86_cache_alignment; int x86_clflush_size; int x86_tlbsize; int x86_cache_size; int x86_mask; int x86_model; int x86; } ;


 int FUNC_0 (scalar_t__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct cpuinfo_x86*,int) ;
 unsigned int VAR_3 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (struct seq_file*,struct cpuinfo_x86*,unsigned int) ;
 int FUNC_5 (struct seq_file*,struct cpuinfo_x86*) ;
 int ** VAR_4 ;
 scalar_t__** VAR_5 ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_6, void *VAR_7)
{
 struct cpuinfo_x86 *VAR_8 = VAR_7;
 unsigned int VAR_9 = 0;
 int VAR_10;




 FUNC_3(VAR_6, "processor\t: %u\n"
     "vendor_id\t: %s\n"
     "cpu family\t: %d\n"
     "model\t\t: %u\n"
     "model name\t: %s\n",
     VAR_9,
     VAR_8->x86_vendor_id[0] ? VAR_8->x86_vendor_id : "unknown",
     VAR_8->x86,
     VAR_8->x86_model,
     VAR_8->x86_model_id[0] ? VAR_8->x86_model_id : "unknown");

 if (VAR_8->x86_mask || VAR_8->cpuid_level >= 0)
  FUNC_3(VAR_6, "stepping\t: %d\n", VAR_8->x86_mask);
 else
  FUNC_3(VAR_6, "stepping\t: unknown\n");

 if (FUNC_1(VAR_8, VAR_2)) {
  unsigned int VAR_11 = FUNC_2(VAR_9);

  if (!VAR_11)
   VAR_11 = VAR_3;
  FUNC_3(VAR_6, "cpu MHz\t\t: %u.%03u\n",
      VAR_11 / 1000, (VAR_11 % 1000));
 }


 if (VAR_8->x86_cache_size >= 0)
  FUNC_3(VAR_6, "cache size\t: %d KB\n", VAR_8->x86_cache_size);

 FUNC_4(VAR_6, VAR_8, VAR_9);
 FUNC_5(VAR_6, VAR_8);

 FUNC_3(VAR_6, "flags\t\t:");
 for (VAR_10 = 0; VAR_10 < 32*VAR_1; VAR_10++)
  if (FUNC_1(VAR_8, VAR_10) && VAR_4[VAR_10] != ((void*)0))
   FUNC_3(VAR_6, " %s", VAR_4[VAR_10]);

 FUNC_3(VAR_6, "\nbogomips\t: %lu.%02lu\n",
     VAR_8->loops_per_jiffy/(500000/VAR_0),
     (VAR_8->loops_per_jiffy/(5000/VAR_0)) % 100);





 FUNC_3(VAR_6, "clflush size\t: %u\n", VAR_8->x86_clflush_size);
 FUNC_3(VAR_6, "cache_alignment\t: %d\n", VAR_8->x86_cache_alignment);
 FUNC_3(VAR_6, "address sizes\t: %u bits physical, %u bits virtual\n",
     VAR_8->x86_phys_bits, VAR_8->x86_virt_bits);

 FUNC_3(VAR_6, "power management:");
 for (VAR_10 = 0; VAR_10 < 32; VAR_10++) {
  if (VAR_8->x86_power & (1 << VAR_10)) {
   if (VAR_10 < FUNC_0(VAR_5) &&
       VAR_5[VAR_10])
    FUNC_3(VAR_6, "%s%s",
        VAR_5[VAR_10][0] ? " " : "",
        VAR_5[VAR_10]);
   else
    FUNC_3(VAR_6, " [%d]", VAR_10);
  }
 }

 FUNC_3(VAR_6, "\n\n");

 return 0;
}
