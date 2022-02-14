
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_operations {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 struct file* FUNC_2 (char const*,struct file_operations const*,void*,int) ;
 int FUNC_3 (int,struct file*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

int FUNC_6(const char *VAR_0, const struct file_operations *VAR_1,
       void *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct file *VAR_6;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_5 = VAR_4;

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_6)) {
  VAR_4 = FUNC_1(VAR_6);
  goto err_put_unused_fd;
 }
 FUNC_3(VAR_5, VAR_6);

 return VAR_5;

err_put_unused_fd:
 FUNC_5(VAR_5);
 return VAR_4;
}
