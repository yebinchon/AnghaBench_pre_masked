
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct path {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (struct path*,char*,size_t) ;
 char* FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (struct seq_file*,int) ;
 size_t FUNC_4 (struct seq_file*,char**) ;

int FUNC_5(struct seq_file *VAR_0, struct path *VAR_1, char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4 = FUNC_4(VAR_0, &VAR_3);
 int VAR_5 = -1;

 if (VAR_4) {
  char *VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_4);
  if (!FUNC_0(VAR_6)) {
   char *VAR_7 = FUNC_2(VAR_3, VAR_6, VAR_2);
   if (VAR_7)
    VAR_5 = VAR_7 - VAR_3;
  }
 }
 FUNC_3(VAR_0, VAR_5);

 return VAR_5;
}
