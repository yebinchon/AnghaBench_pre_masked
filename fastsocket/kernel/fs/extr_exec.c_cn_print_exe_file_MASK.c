
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_path; } ;
struct core_name {int dummy; } ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct core_name*,char*,...) ;
 TYPE_1__* VAR_3 ;
 char* FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct file*) ;
 struct file* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct core_name *VAR_4)
{
 struct file *VAR_5;
 char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;

 VAR_5 = FUNC_5(VAR_3->mm);
 if (!VAR_5)
  return FUNC_2(VAR_4, "(unknown)");

 VAR_6 = FUNC_7(VAR_2, VAR_1);
 if (!VAR_6) {
  VAR_9 = -VAR_0;
  goto put_exe_file;
 }

 VAR_7 = FUNC_3(&VAR_5->f_path, VAR_6, VAR_2);
 if (FUNC_0(VAR_7)) {
  VAR_9 = FUNC_1(VAR_7);
  goto free_buf;
 }

 for (VAR_8 = VAR_7; *VAR_8; VAR_8++)
  if (*VAR_8 == '/')
   *VAR_8 = '!';

 VAR_9 = FUNC_2(VAR_4, "%s", VAR_7);

free_buf:
 FUNC_6(VAR_6);
put_exe_file:
 FUNC_4(VAR_5);
 return VAR_9;
}
