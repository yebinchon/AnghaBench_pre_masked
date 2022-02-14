
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ldisc_ops {char* name; } ;
struct seq_file {int dummy; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (struct tty_ldisc_ops*) ;
 struct tty_ldisc_ops* FUNC_1 (int) ;
 int FUNC_2 (struct tty_ldisc_ops*) ;
 int FUNC_3 (struct seq_file*,char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 int VAR_2 = *(loff_t *)VAR_1;
 struct tty_ldisc_ops *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_3))
  return 0;
 FUNC_3(VAR_0, "%-10s %2d\n", VAR_3->name ? VAR_3->name : "???", VAR_2);
 FUNC_2(VAR_3);
 return 0;
}
