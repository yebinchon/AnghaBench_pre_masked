
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1)
{
 u8 VAR_2;

 if (!FUNC_0(VAR_0, &VAR_2)) {
  FUNC_2(VAR_1, "level:\t\tunreadable\n");
 } else {
  FUNC_2(VAR_1, "level:\t\t%d\n", VAR_2 & 0xf);
  FUNC_2(VAR_1, "mute:\t\t%s\n", FUNC_1(VAR_2, 6));
  FUNC_2(VAR_1, "commands:\tup, down, mute\n");
  FUNC_2(VAR_1, "commands:\tlevel <level>"
          " (<level> is 0-15)\n");
 }

 return 0;
}
