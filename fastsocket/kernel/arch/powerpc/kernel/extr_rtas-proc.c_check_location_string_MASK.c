
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, const char *VAR_1)
{
 while (*VAR_1) {
  if (FUNC_1(*VAR_1) || *VAR_1 == '.')
   FUNC_0(VAR_0, VAR_1);
  else if (*VAR_1 == '/' || *VAR_1 == '-')
   FUNC_2(VAR_0, " at ");
  VAR_1++;
 }
}
