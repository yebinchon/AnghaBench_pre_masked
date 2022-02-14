
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cpuinfo_um {int dummy; } ;


 int VAR_0 ;
 struct cpuinfo_um* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_4, void *VAR_5)
{
 int VAR_6 = 0;







 FUNC_1(VAR_4, "processor\t: %d\n", VAR_6);
 FUNC_1(VAR_4, "vendor_id\t: User Mode Linux\n");
 FUNC_1(VAR_4, "model name\t: UML\n");
 FUNC_1(VAR_4, "mode\t\t: skas\n");
 FUNC_1(VAR_4, "host\t\t: %s\n", VAR_2);
 FUNC_1(VAR_4, "bogomips\t: %lu.%02lu\n\n",
     VAR_3/(500000/VAR_0),
     (VAR_3/(5000/VAR_0)) % 100);

 return 0;
}
