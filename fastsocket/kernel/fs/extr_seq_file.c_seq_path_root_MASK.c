
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct path {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct path*,struct path*,char*,size_t) ;
 int VAR_1 ;
 char* FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (struct seq_file*,int) ;
 size_t FUNC_5 (struct seq_file*,char**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct seq_file *VAR_2, struct path *VAR_3, struct path *VAR_4,
    char *VAR_5)
{
 char *VAR_6;
 size_t VAR_7 = FUNC_5(VAR_2, &VAR_6);
 int VAR_8 = -VAR_0;

 if (VAR_7) {
  char *VAR_9;

  FUNC_6(&VAR_1);
  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7);
  FUNC_7(&VAR_1);
  VAR_8 = FUNC_1(VAR_9);
  if (!FUNC_0(VAR_9)) {
   char *VAR_10 = FUNC_3(VAR_6, VAR_9, VAR_5);
   if (VAR_10)
    VAR_8 = VAR_10 - VAR_6;
   else
    VAR_8 = -VAR_0;
  }
 }
 FUNC_4(VAR_2, VAR_8);

 return VAR_8 < 0 ? VAR_8 : 0;
}
