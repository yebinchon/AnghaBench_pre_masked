
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cpuinfo_x86 {int cpuid_level; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, struct cpuinfo_x86 *VAR_1)
{
 FUNC_0(VAR_0,
     "fpu\t\t: yes\n"
     "fpu_exception\t: yes\n"
     "cpuid level\t: %d\n"
     "wp\t\t: yes\n",
     VAR_1->cpuid_level);
}
