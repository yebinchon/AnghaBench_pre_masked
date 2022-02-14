
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct seq_file *VAR_1 = VAR_0;
 unsigned long VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {

  if ((VAR_3 == 4) || (VAR_3 == 5))
   continue;
  FUNC_0(VAR_2, VAR_3);
  FUNC_1(VAR_1, " dr%d\t: %016lx\n", VAR_3, VAR_2);
 }

 FUNC_1(VAR_1, "\n MSR\t:\n");
}
