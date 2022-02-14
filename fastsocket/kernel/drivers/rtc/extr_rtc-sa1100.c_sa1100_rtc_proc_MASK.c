
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u32 ;
struct seq_file {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_6, struct seq_file *VAR_7)
{
 FUNC_0(VAR_7, "trim/divider\t: 0x%08x\n", (u32) VAR_4);
 FUNC_0(VAR_7, "update_IRQ\t: %s\n",
   (VAR_2 & VAR_3) ? "yes" : "no");
 FUNC_0(VAR_7, "periodic_IRQ\t: %s\n",
   (VAR_0 & VAR_1) ? "yes" : "no");
 FUNC_0(VAR_7, "periodic_freq\t: %ld\n", VAR_5);

 return 0;
}
