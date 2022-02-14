
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct individual_sensor {int dummy; } ;


 int FUNC_0 (struct seq_file*,char const*) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (struct seq_file*,char) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, struct individual_sensor *VAR_1,
  const char *VAR_2)
{
 if (!VAR_2 || !*VAR_2) {
  FUNC_1(VAR_0, "---");
 } else {
  FUNC_0(VAR_0, VAR_2);
 }
 FUNC_2(VAR_0, ' ');
}
