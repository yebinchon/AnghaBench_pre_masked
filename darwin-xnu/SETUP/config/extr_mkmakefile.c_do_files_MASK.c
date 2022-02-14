
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {scalar_t__ f_type; char* f_fn; struct file_list* f_next; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 struct file_list* VAR_1 ;
 int FUNC_1 (int *,struct file_list*) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (char*) ;

void
FUNC_4(FILE *VAR_2, const char *VAR_3, char VAR_4)
{
 struct file_list *VAR_5;
 int VAR_6, VAR_7=0;

 FUNC_0(VAR_2, "%s", VAR_3);
 VAR_6 = 8;
 for (VAR_5 = VAR_1; VAR_5 != 0; VAR_5 = VAR_5->f_next) {
  if (VAR_5->f_type == VAR_0)
   continue;
  if (VAR_5->f_fn[FUNC_3(VAR_5->f_fn)-1] != VAR_4)
   continue;





  VAR_6 = 8;
  FUNC_0(VAR_2, "\\\n\t");
  FUNC_1(VAR_2, VAR_5);
  VAR_6 += VAR_7 + 1;
 }
 FUNC_2('\n', VAR_2);
}
