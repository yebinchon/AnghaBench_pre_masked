
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, struct seq_file *VAR_4)
{
 unsigned long VAR_5 = FUNC_0(VAR_1);

 FUNC_1(VAR_4, "update_IRQ\t: %s\n",
   (VAR_5 & VAR_0) ? "yes" : "no");
 FUNC_1(VAR_4, "periodic_IRQ\t: %s\n",
   (VAR_5 & VAR_2) ? "yes" : "no");

 return 0;
}
