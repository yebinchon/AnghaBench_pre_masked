
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_level {int dummy; } ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (struct seq_file*,char*,char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_2,
       struct service_level *VAR_3)
{
 char *VAR_4, *VAR_5;

 VAR_4 = FUNC_2(1024, VAR_1 | VAR_0);
 if (!VAR_4)
  return;
 FUNC_0("QUERY CPLEVEL", VAR_4, 1024, ((void*)0));
 VAR_5 = FUNC_4(VAR_4, '\n');
 if (VAR_5)
  *VAR_5 = 0;
 FUNC_3(VAR_2, "VM: %s\n", VAR_4);
 FUNC_1(VAR_4);
}
