
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct seq_file {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct seq_file *VAR_4)
{

 u16 VAR_5 = FUNC_0();
 FUNC_1(VAR_3);
 FUNC_2(VAR_4,
  "alarm_IRQ\t: %s\n"
  "wkalarm_IRQ\t: %s\n"
  "seconds_IRQ\t: %s\n",
  ((VAR_5 & VAR_0) ? "yes" : "no"),
  ((VAR_5 & VAR_1) ? "yes" : "no"),
  ((VAR_5 & VAR_2) ? "yes" : "no"));
 return 0;

}
