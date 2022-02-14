
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_path; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int,int) ;
 struct file* FUNC_3 (struct file*,int) ;
 struct file* FUNC_4 (int) ;
 int FUNC_5 (int,struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct file*) ;
 int FUNC_10 (int) ;

int FUNC_11(int *VAR_3, int VAR_4)
{
 struct file *VAR_5, *VAR_6;
 int VAR_7;
 int VAR_8, VAR_9;

 if (VAR_4 & ~(VAR_1 | VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 VAR_6 = FUNC_3(VAR_5, VAR_4);
 VAR_7 = FUNC_1(VAR_6);
 if (FUNC_0(VAR_6))
  goto err_write_pipe;

 VAR_7 = FUNC_7(VAR_4);
 if (VAR_7 < 0)
  goto err_read_pipe;
 VAR_9 = VAR_7;

 VAR_7 = FUNC_7(VAR_4);
 if (VAR_7 < 0)
  goto err_fdr;
 VAR_8 = VAR_7;

 FUNC_2(VAR_9, VAR_8);
 FUNC_5(VAR_9, VAR_6);
 FUNC_5(VAR_8, VAR_5);
 VAR_3[0] = VAR_9;
 VAR_3[1] = VAR_8;

 return 0;

 err_fdr:
 FUNC_10(VAR_9);
 err_read_pipe:
 FUNC_8(&VAR_6->f_path);
 FUNC_9(VAR_6);
 err_write_pipe:
 FUNC_6(VAR_5);
 return VAR_7;
}
