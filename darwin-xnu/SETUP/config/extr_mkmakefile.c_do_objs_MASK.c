
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
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*) ;

void
FUNC_5(FILE *VAR_2, const char *VAR_3, int VAR_4)
{
 struct file_list *VAR_5;
 int VAR_6, VAR_7;
 char *VAR_8;
 char VAR_9;
 const char *VAR_10;

 FUNC_0(VAR_2, "%s", VAR_3);
 VAR_6 = FUNC_3(VAR_3);
 for (VAR_5 = VAR_1; VAR_5 != 0; VAR_5 = VAR_5->f_next) {
  if (VAR_5->f_type == VAR_0)
   continue;




  VAR_8 = VAR_5->f_fn + (VAR_7 = FUNC_3(VAR_5->f_fn)) - 1;
  if (VAR_4 != -1 && *VAR_8 != VAR_4)
   continue;
  else if (*VAR_8 == 'o') {
   if (VAR_7 + VAR_6 > 72) {
    VAR_6 = 8;
    FUNC_0(VAR_2, "\\\n\t");
   }
   FUNC_1(VAR_2, VAR_5);
   FUNC_0(VAR_2, " ");
   VAR_6 += VAR_7 + 1;
   continue;
  }
  VAR_10 = FUNC_4(VAR_5->f_fn);
  VAR_8 = (char *)VAR_10 + (VAR_7 = FUNC_3(VAR_10)) - 1;
  VAR_9 = *VAR_8;
  *VAR_8 = 'o';
  if (VAR_7 + VAR_6 > 72) {
   VAR_6 = 8;
   FUNC_0(VAR_2, "\\\n\t");
  }
  FUNC_0(VAR_2, "%s ", VAR_10);
  VAR_6 += VAR_7 + 1;
  *VAR_8 = VAR_9;
 }
 FUNC_2('\n', VAR_2);
}
