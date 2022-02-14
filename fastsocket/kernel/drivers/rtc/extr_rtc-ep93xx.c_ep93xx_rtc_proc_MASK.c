
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,unsigned short*,unsigned short*) ;
 int FUNC_1 (struct seq_file*,char*,unsigned short) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct seq_file *VAR_1)
{
 unsigned short VAR_2, VAR_3;

 FUNC_0(VAR_0, &VAR_2, &VAR_3);

 FUNC_1(VAR_1, "preload\t\t: %d\n", VAR_2);
 FUNC_1(VAR_1, "delete\t\t: %d\n", VAR_3);

 return 0;
}
