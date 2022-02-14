
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, struct seq_file *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_2 + VAR_0);

 FUNC_1(VAR_4, "periodic_IRQ\t: %s\n",
       (VAR_5 & VAR_1) ? "yes" : "no" );
 return 0;
}
