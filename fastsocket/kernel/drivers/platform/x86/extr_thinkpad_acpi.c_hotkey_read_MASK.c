
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int hotkey; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct seq_file*,char*,...) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_5)
{
 int VAR_6, VAR_7;

 if (!VAR_4.hotkey) {
  FUNC_5(VAR_5, "status:\t\tnot supported\n");
  return 0;
 }

 if (FUNC_3(&VAR_2))
  return -VAR_0;
 VAR_6 = FUNC_2(&VAR_7);
 if (!VAR_6)
  VAR_6 = FUNC_1();
 FUNC_4(&VAR_2);
 if (VAR_6)
  return VAR_6;

 FUNC_5(VAR_5, "status:\t\t%s\n", FUNC_0(VAR_7, 0));
 if (VAR_1) {
  FUNC_5(VAR_5, "mask:\t\t0x%08x\n", VAR_3);
  FUNC_5(VAR_5, "commands:\tenable, disable, reset, <mask>\n");
 } else {
  FUNC_5(VAR_5, "mask:\t\tnot supported\n");
  FUNC_5(VAR_5, "commands:\tenable, disable, reset\n");
 }

 return 0;
}
