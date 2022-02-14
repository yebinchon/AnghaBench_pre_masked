
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {char* f_fn; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;

void
FUNC_1(FILE *VAR_0, struct file_list *VAR_1)
{
 if ((VAR_1->f_fn[0] == '.') && (VAR_1->f_fn[1] == '/'))
  FUNC_0(VAR_0, "%s ", VAR_1->f_fn);
  else
  FUNC_0(VAR_0, "$(SOURCE_DIR)/%s ", VAR_1->f_fn);
}
