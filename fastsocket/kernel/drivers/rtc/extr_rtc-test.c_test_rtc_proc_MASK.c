
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct platform_device {int id; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 struct platform_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct seq_file *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, "test\t\t: yes\n");
 FUNC_0(VAR_1, "id\t\t: %d\n", VAR_2->id);

 return 0;
}
